#include <pins/dlopen-api.h>
#include <pins/lts-type.h>
#include <pins/ltsmin-standard.h>
#include <pins/pins.h>
//#include <pins/pins-util.h>

#include <peterson/peterson.h>

// set the name of this PINS plugin
char pins_plugin_name[] = "peterson";


/**
 * next_states_long is wrapper, which only returns successors
 * for the group that is queried. LTSmin needs it.
 */
typedef struct context {
    int group;
    TransitionCB cb;
    void *arg;
    int count;
} context_t;

static void long_cb (void *context, transition_info_t *ti, int *dst, int *cpy) {
    context_t *c = (context_t *) context;
    if (ti->group == c->group) {
        c->cb(c->arg, ti, dst, cpy);
        c->count++;
    }
}

int next_states_long (void *model, int group, int *src,
                      TransitionCB callback, void *arg)
{
    context_t c;
    c.cb = callback;
    c.group = group;
    c.arg = arg;
    c.count = 0;
    next_states (model, src, long_cb, (void *) &c);
    return c.count;
}

void pins_model_init(model_t m) {

    // create the LTS type LTSmin will generate
    lts_type_t ltstype=lts_type_create();

    // set the length of the state
    lts_type_set_state_length(ltstype, state_int_length());

    // add an "int" type for a state slot
    int int_type = lts_type_add_type(ltstype, "int", NULL);
    lts_type_set_format (ltstype, int_type, LTStypeDirect);

    // add an "action" type for edge labels
    int action_type = lts_type_add_type(ltstype, "action", NULL);
    lts_type_set_format (ltstype, action_type, LTStypeEnum);

    // add a "bool" type for state labels
    int bool_type = lts_type_add_type (ltstype, "bool", NULL);
    lts_type_set_format (ltstype, bool_type, LTStypeEnum);//LTStypeBool);

    // set state name & type
    for (int i = 0; i < state_int_length(); ++i) {
        lts_type_set_state_name(ltstype, i, SLOT_NAMES[i]);
        lts_type_set_state_typeno(ltstype, i, int_type);
    }

    // edge label types
    lts_type_set_edge_label_count (ltstype, 1);
    lts_type_set_edge_label_name(ltstype, 0, "action");
    lts_type_set_edge_label_type(ltstype, 0, "action");
    lts_type_set_edge_label_typeno(ltstype, 0, action_type);

    // state label types
    lts_type_set_state_label_count (ltstype, state_label_count());
    for (int i = 0; i < state_label_count(); ++i) {
        lts_type_set_state_label_name (ltstype, i, STATE_LABELS[i]);
        lts_type_set_state_label_typeno (ltstype, i, bool_type);
    }

    // done with ltstype
    lts_type_validate(ltstype);

    // make sure to set the lts-type before anything else in the GB
    GBsetLTStype(m, ltstype);

    // setting all values for all non direct types
    for (int i = 0; i < action_label_count(); ++i) {
        pins_chunk_put(m, action_type, chunk_str(ACTION_LABELS[i]));
    }

    // set state variable values for initial state
    GBsetInitialState(m, initial_state());

    // set function pointer for the next-state function
    GBsetNextStateAll(m, (next_method_black_t) next_states);

    // set function pointer for the next-state function
    GBsetNextStateLong(m, (next_method_grey_t) next_states_long);

    // set function pointer for the label evaluation function
    GBsetStateLabelLong(m, (get_label_method_t) state_label);

    // create matrices
    matrix_t *cm = malloc(sizeof(matrix_t));            //combined
    dm_create(cm, group_count(), state_int_length());
    matrix_t *rm = malloc(sizeof(matrix_t));
    dm_create(rm, group_count(), state_int_length());
    matrix_t *wm = malloc(sizeof(matrix_t));
    dm_create(wm, group_count(), state_int_length());
    matrix_t *mwm = malloc(sizeof(matrix_t));
    dm_create(mwm, group_count(), state_int_length());

    // set the read/write/must dependency matrix
    for (int i = 0; i < group_count(); i++) {
        for (int j = 0; j < state_int_length(); j++) {
            if (write_matrix(i,j)) {
                dm_set(cm, i, j);
                dm_set(wm, i, j);
            }
//            if (must_write_matrix(i,j)) {
//                dm_set(mwm, i, j);
//            }
            if (read_matrix(i,j)) {
                dm_set(cm, i, j);
                dm_set(rm, i, j);
            }
        }
    }
    GBsetDMInfoRead(m, rm);
    GBsetDMInfoMayWrite(m, wm);
    GBsetDMInfoMustWrite(m, mwm);
    GBsetDMInfo(m, cm);

    // set the label dependency matrix
    matrix_t *lm = malloc(sizeof(matrix_t));
    dm_create(lm, state_label_count(), state_int_length());
    for (int i = 0; i < state_label_count(); i++) {
        for (int j = 0; j < state_int_length(); j++) {
            if (label_matrix(i,j)) dm_set(lm, i, j);
        }
    }
    GBsetStateLabelInfo(m, lm);
}
