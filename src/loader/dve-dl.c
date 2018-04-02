
#include <dlfcn.h>
#include <fcntl.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

#include "dm/dm.h"
#include "loader/dve-dl.h"
#include "pins/ltsmin-standard.h"
#include "pins/pins-util.h"
#include "util/chunk_support.h"
#include "util/runtime.h"
#include "util/util.h"


enum {
    SL_IDX_BUCHI_ACCEPT = 0,
};

typedef struct grey_box_context {
    int                 accepting_state_label_idx;
} *gb_context_t;

static void* dlHandle = NULL;
static char templatename[PATH_MAX];

/* XXX missing sl_short, need way to check acceptance based only on
   Buchi state */

static int
sl_long_p_g (model_t model, int label, int *state)
{
    gb_context_t ctx = (gb_context_t) GBgetContext (model);
    if (label == ctx->accepting_state_label_idx) {
#ifdef buchi_is_accepting
        return buchi_is_accepting(model, state);
#else
        Assert (false, "This model is not a Buchi automaton");
#endif
    } else {
        return get_guard(model, label, state);
    }
}

static void
sl_all_p_g (model_t model, int *state, int *labels)
{
    get_guard_all(model, state, labels);
    gb_context_t ctx = (gb_context_t) GBgetContext (model);
#ifdef buchi_is_accepting
    labels[ctx->accepting_state_label_idx] = buchi_is_accepting(model, state);
#else
        Assert (false, "This model is not a Buchi automaton");
#endif
}

static void
sl_group (model_t model, sl_group_enum_t group, int *state, int *labels)
{
    switch (group) {
        case GB_SL_ALL:
            GBgetStateLabelsAll(model, state, labels);
            return;
        case GB_SL_GUARDS:
            get_guard_all(model, state, labels);
            return;
        default:
            return;
    }
}

// set the name of this PINS plugin
char pins_plugin_name[] = "DVE";

void pins_model_init(model_t model)
{
    lts_type_t ltstype;
    matrix_t *dm_info = RTmalloc(sizeof(matrix_t));
    matrix_t *dm_read_info = RTmalloc(sizeof(matrix_t));
    matrix_t *dm_actions_read_info = RTmalloc(sizeof(matrix_t));
    matrix_t *dm_may_write_info = RTmalloc(sizeof(matrix_t));
    matrix_t *dm_must_write_info = RTmalloc(sizeof(matrix_t));
    matrix_t *sl_info = RTmalloc(sizeof(matrix_t));

    gb_context_t ctx=(gb_context_t)RTmalloc(sizeof(struct grey_box_context));
    GBsetContext(model,ctx);

    // get ltstypes
    int state_length = get_state_variable_count();
    ltstype=lts_type_create();

    // adding types
    int ntypes = get_state_variable_type_count();
    for(int i = 0; i < ntypes; i++) {
        const char* type_name = get_state_variable_type_name(i);
        Assert (type_name != NULL, "invalid type name");
        if (lts_type_add_type(ltstype, type_name, NULL) != i) {
            Abort("wrong type number");
        }
        int type_value_count = get_state_variable_type_value_count(i);
        if (0 == type_value_count) {
            lts_type_set_format (ltstype, i, LTStypeDirect);
        } else {
            lts_type_set_format (ltstype, i, LTStypeEnum);
        }
    }
    int guard_type = lts_type_add_type (ltstype, "guard", NULL);
    lts_type_set_format (ltstype, guard_type, LTStypeTrilean);

    lts_type_set_state_length(ltstype, state_length);

    // set state name & type
    for(int i=0; i < state_length; ++i)
    {
        const char* name = get_state_variable_name(i);
        const int   type = get_state_variable_type(i);
        lts_type_set_state_name(ltstype,i,name);
        lts_type_set_state_typeno(ltstype,i,type);
    }
    // compute state label names
    int nguards = get_guard_count(); // TODO: should be in model has guards block..?
    int sl_size = 0 +
                  nguards +
                  (have_property() ? 1 : 0);

    // assumption on state labels:
    // state labels (idx): 0 - nguards-1 = guard state labels
    // state label  (idx): nguards = property state label
    lts_type_set_state_label_count (ltstype, sl_size);
    char buf[256];
    for(int i=0; i < nguards; i++) {
        snprintf(buf, 256, "%s_%d", LTSMIN_LABEL_TYPE_GUARD_PREFIX, i);
        lts_type_set_state_label_name (ltstype, i, buf);
        lts_type_set_state_label_typeno (ltstype, i, guard_type);
    }
    if (have_property()) {
        lts_type_set_state_label_name (ltstype, nguards, LTSMIN_STATE_LABEL_ACCEPTING);
        lts_type_set_state_label_typeno (ltstype, nguards, guard_type);
        ctx->accepting_state_label_idx = nguards;
    } else {
        ctx->accepting_state_label_idx = -1;
    }

    GBsetLTStype(model, ltstype);

    // setting values for types
    for(int i=0; i < ntypes; i++) {
        int type_value_count = get_state_variable_type_value_count(i);
        if (lts_type_get_format(ltstype, i) != LTStypeChunk &&
            lts_type_get_format(ltstype, i) != LTStypeEnum) {
            Debug ("Skipping type values for non-chunk type %s", lts_type_get_type(ltstype, i));
            continue;
        }
        for(int j=0; j < type_value_count; ++j) {
            const char* type_value = get_state_variable_type_value(i, j);
            pins_chunk_put_at (model, i, chunk_str((char*)type_value), j);
        }
    }

    lts_type_validate(ltstype);

    int ngroups = get_transition_count();
	dm_create(dm_info, ngroups, state_length);
    dm_create(dm_read_info, ngroups, state_length);
    dm_create(dm_actions_read_info, ngroups, state_length);
    dm_create(dm_may_write_info, ngroups, state_length);
    dm_create(dm_must_write_info, ngroups, state_length);
    for(int i=0; i < dm_nrows(dm_info); i++) {
        int* proj = (int*)get_transition_read_dependencies(i);
        for(int j=0; j<state_length; j++) {
            if (proj[j]) {
                dm_set(dm_info, i, j);
                dm_set(dm_read_info, i, j);
            }
        }
        proj = (int*)get_transition_actions_read_dependencies(i);
        for(int j=0; j<state_length; j++) {
            if (proj[j]) {
                dm_set(dm_actions_read_info, i, j);
            }
        }
        proj = (int*)get_transition_may_write_dependencies(i);
        for(int j=0; j<state_length; j++) {
            if (proj[j]) {
                dm_set(dm_info, i, j);
                dm_set(dm_may_write_info, i, j);
            }
        }
        proj = (int*)get_transition_must_write_dependencies(i);
        for(int j=0; j<state_length; j++) {
            if (proj[j]) {
                dm_set(dm_must_write_info, i, j);
            }
        }
    }
    GBsetDMInfo(model, dm_info);
    GBsetDMInfoRead(model, dm_read_info);
    GBsetMatrix(model, LTSMIN_MATRIX_ACTIONS_READS, dm_actions_read_info, PINS_MAY_SET,
                                            PINS_INDEX_GROUP, PINS_INDEX_STATE_VECTOR);
    GBsetDMInfoMayWrite(model, dm_may_write_info);
    GBsetDMInfoMustWrite(model, dm_must_write_info);

    // set state label matrix (accepting label and guards)
    get_label_method_t sl_long = NULL;
    get_label_all_method_t sl_all = NULL;
    dm_create(sl_info, sl_size, state_length);

    // if the model exports a property, reserve first for accepting label
    if (have_property()) {
        for (int i=0; i<state_length; ++i) {
            if (strcmp ("LTL_property", lts_type_get_state_name(ltstype, i)) == 0) {
                dm_set(sl_info, ctx->accepting_state_label_idx, i);
            }
        }
    }

    // if the model has guards, add guards as state labels
    if (have_property()) {
        // filter the property
        sl_long = sl_long_p_g;
        sl_all = sl_all_p_g;
    } else {
        // pass request directly to dynamic lib
        sl_long = (get_label_method_t)     get_guard;
        sl_all =  (get_label_all_method_t) get_guard_all;
    }

    // set the guards per transition group
    GBsetGuardsInfo(model, (guard_t**) get_all_guards());

    // initialize state label matrix
    // assumption, guards come first (0-nguards)
    for(int i=0; i < nguards; i++) {
        int* guards = (int*)get_guard_matrix(i);
        for(int j=0; j<state_length; j++) {
            if (guards[j]) dm_set(sl_info, i, j);
        }
    }

    // set guard may be co-enabled relation
    matrix_t *gce_info = RTmalloc(sizeof(matrix_t));
    dm_create(gce_info, nguards, nguards);
    for(int i=0; i < nguards; i++) {
        int* guardce = (int*)get_guard_may_be_coenabled_matrix(i);
        for(int j=0; j<nguards; j++) {
            if (guardce[j]) dm_set(gce_info, i, j);
        }
    }
    GBsetGuardCoEnabledInfo(model, gce_info);

    // set guard necessary enabling set info
    matrix_t *gnes_info = RTmalloc(sizeof(matrix_t));
    dm_create(gnes_info, nguards, ngroups);
    for(int i=0; i < nguards; i++) {
        int* guardnes = (int*)get_guard_nes_matrix(i);
        for(int j=0; j<ngroups; j++) {
            if (guardnes[j]) dm_set(gnes_info, i, j);
        }
    }
    GBsetGuardNESInfo(model, gnes_info);

    // set guard necessary disabling set info
    matrix_t *gnds_info = RTmalloc(sizeof(matrix_t));
    dm_create(gnds_info, nguards, ngroups);
    for(int i=0; i < nguards; i++) {
        int* guardnds = (int*)get_guard_nds_matrix(i);
        for(int j=0; j<ngroups; j++) {
            if (guardnds[j]) dm_set(gnds_info, i, j);
        }
    }
    GBsetGuardNDSInfo(model, gnds_info);


    matrix_t *dna_info = RTmalloc(sizeof(matrix_t));
    dm_create(dna_info, ngroups, ngroups);
    for(int i=0; i < ngroups; i++) {
        int* dna = (int*)get_dna_matrix(i);
        for(int j=0; j<ngroups; j++) {
            if (dna[j]) dm_set(dna_info, i, j);
        }
    }
    GBsetDoNotAccordInfo(model, dna_info);

    // set the group implementation
    sl_group_t* sl_group_all = RTmallocZero(sizeof(sl_group_t) + sl_size * sizeof(int));
    sl_group_all->count = sl_size;
    for(int i=0; i < sl_group_all->count; i++) sl_group_all->sl_idx[i] = i;
    sl_group_t* sl_group_guards = RTmallocZero(sizeof(sl_group_t) + nguards * sizeof(int));
    sl_group_guards->count = nguards;
    for(int i=0; i < sl_group_guards->count; i++) sl_group_guards->sl_idx[i] = i;
    GBsetStateLabelGroupInfo(model, GB_SL_ALL, sl_group_all);
    GBsetStateLabelGroupInfo(model, GB_SL_GUARDS, sl_group_guards);
    GBsetStateLabelsGroup(model, sl_group);

    GBsetStateLabelInfo(model, sl_info);
    if (sl_long != NULL) GBsetStateLabelLong(model, sl_long);
    if (sl_all  != NULL) GBsetStateLabelsAll(model, sl_all);

    // get initial state
    int state[state_length];
    get_initial_state((char*)state);
    GBsetInitialState(model,state);

    GBsetNextStateAll  (model, (next_method_black_t) get_successors);
    GBsetNextStateLong (model, (next_method_grey_t)  get_successor);
    GBsetActionsLong (model, (next_method_grey_t) get_action);
}
