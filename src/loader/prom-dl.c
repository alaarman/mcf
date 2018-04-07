#include <dlfcn.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

#include "dm/dm.h"
#include "loader/prom-dl.h"
#include "syntax/ltsmin-standard.h"
#include "pins/pins-util.h"
#include "util/chunk_support.h"
#include "util/runtime.h"
#include "util/util.h"

static const char* ACCEPTING_STATE_LABEL_NAME       = "accept_";
static const char* PROGRESS_STATE_LABEL_NAME        = "progress_";
static const char* VALID_END_STATE_LABEL_NAME       = "end_";

typedef struct grey_box_context {
    int todo;
    int *groups_of_edge;
} *gb_context_t;

void
sl_group (model_t model, sl_group_enum_t group, int*src, int *label)
{
    spins_get_labels_many (model, src, label, group == GB_SL_GUARDS);
    (void) group; // Both groups overlap, and start at index 0!
}

void
sl_all (model_t model, int*src, int *label)
{
    spins_get_labels_many (model, src, label, false);
}

static int
groups_of_edge (model_t model, int edgeno, int index, const int **groups)
{
    if (spins_transition_has_edge == NULL)
        Abort ("spins_transition_has_edge() not available, update Spins and recompile model");
    gb_context_t ctx = (gb_context_t) GBgetContext(model);
    int             nr_groups = pins_get_group_count (model);
    int             count = 0;
    for (int i = 0; i < nr_groups; i++)
        count += spins_transition_has_edge(i, edgeno, index);
    count = 0;
    for (int i = 0; i < nr_groups; i++) {
        if (spins_transition_has_edge(i, edgeno, index)) {
            ctx->groups_of_edge[count++] = i;
        }
    }
    *groups = ctx->groups_of_edge;
    return count;
}

#define OLD_DEBUG DEBUG
#undef DEBUG
#define DEBUG 0


// set the name of this PINS plugin
char pins_plugin_name[] = "SpinS";

void pins_model_init(model_t model)
{
    lts_type_t ltstype;
    matrix_t *dm_info = RTmalloc (sizeof *dm_info);
    matrix_t *dm_actions_read_info = RTmalloc(sizeof(matrix_t));
    matrix_t *dm_read_info = RTmalloc(sizeof(matrix_t));
    matrix_t *dm_may_write_info = RTmalloc(sizeof(matrix_t));
    matrix_t *dm_must_write_info = RTmalloc(sizeof(matrix_t));
    matrix_t *sl_info = RTmalloc (sizeof *sl_info);


    gb_context_t ctx=(gb_context_t)RTmalloc(sizeof(struct grey_box_context));
    GBsetContext(model,ctx);

    // get ltstypes
    ltstype=lts_type_create();
    int state_length = spins_get_state_size();
    ctx->groups_of_edge = RTmalloc(sizeof(int[state_length]));
    // adding types
    int ntypes = spins_get_type_count();
    for (int i = 0; i < ntypes; i++) {
        const char* type_name = spins_get_type_name(i);
        Assert (type_name != NULL, "invalid type name");
        if (lts_type_add_type(ltstype, type_name, NULL) != i) {
            Abort("wrong type number");
        }
        int type_value_count = spins_get_type_value_count(i);
        Debug("Promela type %s (%d) has %d values.", type_name, i, type_value_count);
        if (0 == type_value_count) {
            lts_type_set_format (ltstype, i, LTStypeDirect);
        } else {
            lts_type_set_format (ltstype, i, LTStypeEnum);
        }
    }

    int guard_type = lts_type_add_type (ltstype, "guard", NULL);
    lts_type_set_format (ltstype, guard_type, LTStypeTrilean);
    int bool_type = lts_type_add_type (ltstype, "bool", NULL);
    lts_type_set_format (ltstype, bool_type, LTStypeBool);

    lts_type_set_state_length(ltstype, state_length);

    // set state name & type
    for (int i=0; i < state_length; ++i) {
        const char* name = spins_get_state_variable_name(i);
        const int   type = spins_get_state_variable_type(i);
        lts_type_set_state_name(ltstype,i,name);
        lts_type_set_state_typeno(ltstype,i,type);
    }

    // edge label types
    lts_type_set_edge_label_count (ltstype, spins_get_edge_count());
    for (int i = 0; i < spins_get_edge_count(); i++) {
        lts_type_set_edge_label_name(ltstype, i, spins_get_edge_name(i));
        int typeno = spins_get_edge_type(i);
        const char* type_name = spins_get_type_name(typeno);
        lts_type_set_edge_label_type(ltstype, i, type_name);
        lts_type_set_edge_label_typeno(ltstype, i, typeno);
    }

    GBsetLTStype(model, ltstype); // must set ltstype before setting initial state
                                  // creates tables for types!

    // get initial state
    int state[state_length];
    spins_get_initial_state(state);
    GBsetInitialState(model,state);

    // get next state
    GBsetNextStateAll  (model, spins_get_successor_all);
    GBsetNextStateLong (model, spins_get_successor);
    GBsetActionsLong (model, spins_get_actions);

    // setting values for types
    for(int i=0; i < ntypes; i++) {
        int type_value_count = spins_get_type_value_count(i);
        if (lts_type_get_format(ltstype, i) != LTStypeChunk &&
            lts_type_get_format(ltstype, i) != LTStypeEnum) {
            Debug ("Skipping type values for non-chunk type %s", lts_type_get_type(ltstype, i));
            continue;
        }
        for(int j=0; j < type_value_count; ++j) {
            const char* type_value = spins_get_type_value_name(i, j);
            pins_chunk_put_at (model, i, chunk_str((char*)type_value), j);
        }
    }

	// init state labels
	int sl_size = spins_get_label_count();
    int nguards = spins_get_guard_count();
	lts_type_set_state_label_count (ltstype, sl_size);

    for(int i = 0;i < sl_size; i++) {
        const char *name = spins_get_label_name (i);
        Assert (i >= nguards || strncmp(name, LTSMIN_LABEL_TYPE_GUARD_PREFIX, strlen(LTSMIN_LABEL_TYPE_GUARD_PREFIX)) == 0,
                   "Label %d was expected to ba a guard instead of '%s'", i, name);

        if (strcmp(ACCEPTING_STATE_LABEL_NAME, name) == 0) {
            name = LTSMIN_STATE_LABEL_ACCEPTING;
        }
        if (strcmp(PROGRESS_STATE_LABEL_NAME, name) == 0) {
            name = LTSMIN_STATE_LABEL_PROGRESS;
        }
        if (strcmp(VALID_END_STATE_LABEL_NAME, name) == 0) {
            name = LTSMIN_STATE_LABEL_VALID_END;
        }

        lts_type_set_state_label_name (ltstype, i, name);
        if (i < nguards) {
            lts_type_set_state_label_typeno (ltstype, i, guard_type);
        } else {
            lts_type_set_state_label_typeno (ltstype, i, bool_type);
        }
    }

    lts_type_validate(ltstype); // done with ltstype

    // set the label group implementation
    sl_group_t *sl_group_all = RTmallocZero (sizeof(sl_group_t) + sl_size * sizeof(int));
    sl_group_all->count = sl_size;
    for(int i=0; i < sl_group_all->count; i++) sl_group_all->sl_idx[i] = i;
        GBsetStateLabelGroupInfo (model, GB_SL_ALL, sl_group_all);
    if (nguards > 0) {
        sl_group_t *sl_group_guards = RTmallocZero (sizeof(sl_group_t) + nguards * sizeof(int));
        sl_group_guards->count = nguards;
        for(int i=0; i < sl_group_guards->count; i++) sl_group_guards->sl_idx[i] = i;
        GBsetStateLabelGroupInfo (model, GB_SL_GUARDS, sl_group_guards);
    }

    // get state labels
    GBsetStateLabelsGroup(model, sl_group);
    GBsetStateLabelLong(model, (get_label_method_t)spins_get_label);
    GBsetStateLabelsAll(model, (get_label_all_method_t)sl_all);

    // initialize the state read/write dependency matrices
    int ngroups = spins_get_transition_groups();
    dm_create(dm_info, ngroups, state_length);
    dm_create(dm_actions_read_info, ngroups, state_length);
    dm_create(dm_read_info, ngroups, state_length);
    dm_create(dm_may_write_info, ngroups, state_length);
    dm_create(dm_must_write_info, ngroups, state_length);
    for (int i=0; i < dm_nrows(dm_info); i++) {
        int* proj = (int*)spins_get_transition_read_dependencies(i);
        Assert (proj != NULL, "No SpinS read dependencies");
        for(int j=0; j<state_length; j++) {
            if (proj[j]) dm_set(dm_info, i, j);
            if (proj[j]) dm_set(dm_read_info, i, j);
        }
        proj = (int*)spins_get_transition_may_write_dependencies(i);
        Assert (proj != NULL, "No SpinS may write dependencies");
        for(int j=0; j<state_length; j++) {
            if (proj[j]) dm_set(dm_info, i, j);
            if (proj[j]) dm_set(dm_may_write_info, i, j);
        }
        proj = (int*)spins_get_transition_must_write_dependencies(i);
        Assert (proj != NULL, "No SpinS must write dependencies");
        for(int j=0; j<state_length; j++) {
            if (proj[j]) dm_set(dm_must_write_info, i, j);
        }
        if (spins_get_actions_read_dependencies != NULL) {
            proj = (int*)spins_get_actions_read_dependencies(i);
            for(int j=0; j<state_length; j++) {
                if (proj[j]) dm_set(dm_actions_read_info, i, j);
            }
        }
    }
    GBsetDMInfo(model, dm_info);
    GBsetDMInfoRead(model, dm_read_info);
    GBsetDMInfoMayWrite(model, dm_may_write_info);
    GBsetDMInfoMustWrite(model, dm_must_write_info);

    GBsetMatrix(model, LTSMIN_MATRIX_ACTIONS_READS, dm_actions_read_info,
                PINS_MAY_SET, PINS_INDEX_GROUP, PINS_INDEX_STATE_VECTOR);

    if (spins_get_matrix != NULL) {
        int matrices = spins_get_matrix_count();
        for (int m = 0; m < matrices; m++) {
            int rows = spins_get_matrix_row_count(m);
            int cols = spins_get_matrix_col_count(m);
            matrix_t *dm_other = RTmalloc(sizeof(matrix_t));
            dm_create(dm_other, rows, cols);
            const char *name = spins_get_matrix_name(m);

            for (int i = 0; i < rows; i++) {
                int *proj = (int*)spins_get_matrix(m,i);
                Assert (proj != NULL, "No matrix '%s' found", name);
                for (int j = 0; j < cols; j++) {
                    if (proj[j]) dm_set(dm_other, i, j);
                }
            }

            GBsetMatrix(model, name, dm_other, PINS_STRICT, PINS_INDEX_OTHER,
                                                            PINS_INDEX_OTHER);
        }
    }

    // Export dependencies for all state labels (NOT ONLY GUARDS)

    // initialize state label dependency matrix
    dm_create(sl_info, sl_size, state_length);
    for(int i = 0; i < sl_size; i++) {
        int *guards = (int*)spins_get_label_matrix(i);
        for(int j = 0; j<state_length; j++) {
            if (guards[j]) dm_set(sl_info, i, j);
        }
    }
    GBsetStateLabelInfo(model, sl_info);

    // set the guards per transition group
    GBsetGuardsInfo(model, (guard_t**) spins_get_all_labels());

    if (spins_get_trans_commutes_matrix != NULL) {
        matrix_t *commutes_info = RTmalloc(sizeof(matrix_t));
        dm_create(commutes_info, ngroups, ngroups);
        for (int i = 0; i < ngroups; i++) {
            int *dna = (int*)spins_get_trans_commutes_matrix(i);
            for(int j = 0; j < ngroups; j++) {
                if (dna[j]) dm_set(commutes_info, i, j);
            }
        }
        GBsetCommutesInfo(model, commutes_info);
    }

    if (spins_get_trans_do_not_accord_matrix != NULL) {
        matrix_t *dna_info = RTmalloc(sizeof(matrix_t));
        dm_create(dna_info, ngroups, ngroups);
        for (int i = 0; i < ngroups; i++) {
            int *dna = (int*)spins_get_trans_do_not_accord_matrix(i);
            for(int j = 0; j < ngroups; j++) {
                if (dna[j]) dm_set(dna_info, i, j);
            }
        }
        GBsetDoNotAccordInfo(model, dna_info);
    }

    // set guard may be co-enabled relation
    if (spins_get_label_may_be_coenabled_matrix != NULL) {
        matrix_t *gce_info = RTmalloc(sizeof(matrix_t));
        dm_create(gce_info, sl_size, sl_size);
        for (int i = 0; i < sl_size; i++) {
            int *guardce = (int*)spins_get_label_may_be_coenabled_matrix(i);
            for(int j = 0; j < sl_size; j++) {
                if (guardce[j]) dm_set(gce_info, i, j);
            }
        }
        GBsetGuardCoEnabledInfo(model, gce_info);
    }

    // set guard necessary enabling set info
    if (spins_get_label_nes_matrix) {
        matrix_t *gnes_info = RTmalloc(sizeof(matrix_t));
        dm_create(gnes_info, sl_size, ngroups);
        for(int i = 0; i < sl_size; i++) {
            int *guardnes = (int*)spins_get_label_nes_matrix(i);
            for(int j = 0; j < ngroups; j++) {
                if (guardnes[j]) dm_set(gnes_info, i, j);
            }
        }
        GBsetGuardNESInfo(model, gnes_info);
    }

    // set guard necessary disabling set info
    if (spins_get_label_nds_matrix) {
        matrix_t *gnds_info = RTmalloc(sizeof(matrix_t));
        dm_create(gnds_info, sl_size, ngroups);
        for(int i = 0; i < sl_size; i++) {
            int *guardnds = (int*)spins_get_label_nds_matrix(i);
            for(int j = 0; j < ngroups; j++) {
                if (guardnds[j]) dm_set(gnds_info, i, j);
            }
        }
        GBsetGuardNDSInfo(model, gnds_info);
    }

    GBsetGroupsOfEdge(model, groups_of_edge);
}

#undef DEBUG
#define DEBUG OLD_DEBUG
