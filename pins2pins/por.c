#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <dm/dm.h>
#include <pins/ltsmin-standard.h>
#include <pins2pins/por.h>
#include <pins/pins.h>
#include <pins/pins-util.h>
#include <util/list.h>
#include <util/runtime.h>
#include <util/util.h>

typedef enum {
    Disabled = 0,
    Enabled  = 1
} status_t;

typedef struct por_ctx {
    model_t         model;
    size_t          nguards;  // number of guards (groups)
    size_t          nactions; // number of actions (groups)
    size_t          nslots;   // number of variables in state vector
    list_t        **ncommute; // dna[a] is a list of not commuting actions for action a
    list_t        **nes;      // nes[g] is a list of NES actions for guard g

    status_t       *guard_status;   // guard enabled or disabled
    status_t       *action_status;  // action enabled or disabled

    // for search over ations:
    list_t         *queued;
    bool           *action_selected;// action selected or not

    // for callback
    TransitionCB    cb_org;
    void           *ctx_org;
    size_t          emitted;
} por_context_t;

void
por_cb_filter (void *context, transition_info_t *ti, int *dst, int *cpy)
{
    int action = ti->group;
    por_context_t *por = (por_context_t*) context;
    if (por->action_selected[action]) {
        por->cb_org(por->ctx_org, ti, dst, cpy);
        por->emitted++;
    }
}

static inline int
find_disabled(por_context_t *por, int a)
{
    // iterate over guards of a2
    guard_t *guards = GBgetGuard (por->model, a);
    for (int j = 0; j < guards->count; j++) {
        int g = guards->guard[j];
        if (por->guard_status[g] == Disabled) {
            return g;
        }
    }
    return -1;
}

/**
 * Emits subset of ations to search algorithm
 */
int
por_next_all (model_t self, int *src, TransitionCB cb, void *ctx)
{
    por_context_t *por = (por_context_t*) GBgetContext(self);

    // read state label values (including guards)
    GBgetStateLabelsAll(por->model, src, (int *) por->guard_status);
    for (int a = 0; a < por->nactions; a++) {            // actions
        por->action_status[a] = find_disabled(por, a) == -1; // set action enabledness
        if (por->action_status[a] && list_count(por->queued) == 0) {
            list_add (por->queued, a);
            por->action_selected[a] = true;
        }
    }

    // deselect all actions:
    memset(por->action_selected, false, por->nactions);

    size_t      nr_enabled = 0;
    while (list_count(por->queued) > 0) {
        int         a1 = list_pop(por->queued);

        if (por->action_status[a1]) { // action a1 enabled
            nr_enabled++;
            for (int i = 0; i < por->ncommute[a1]->count; i++) {
                int a2 = por->ncommute[a1]->data[i];    // non-commuting action

                if (por->action_selected[a2]) continue; // skip selected
                por->action_selected[a2] = true;
                list_add (por->queued, a2);
            }
        } else {  // action a2 diabled
            int g = find_disabled(por, a1);             // disabled guard
            Assert (g != -1, "No disabled guard for disabled action %d found", a1);
            for (int i = 0; i < por->nes[g]->count; i++) {
                int a2 = por->nes[g]->data[i];     // NES action

                if (por->action_selected[a2]) continue; // skip selected
                por->action_selected[a2] = true;
                list_add (por->queued, a2);
            }
        }
    }

    // Forward the next selected successor states to the algorithm:
    por->cb_org = cb;
    por->ctx_org = ctx;
    por->emitted = 0;
    GBgetTransitionsAll (por->model, src, por_cb_filter, (void *)por);
    return por->emitted;
}

/**
 * Setup the partial order reduction layer.
 */
model_t
pins2pins_por (model_t model)
{
    if (!pins_has_guards(model)) {
        Abort ("Frontend doesn't have guards. Ignoring --por.");
    }

    por_context_t *por = malloc(sizeof *por);
    por->model = model;
    por->nactions = pins_get_group_count(model);
    por->nguards = GBgetStateLabelGroupInfo(model, GB_SL_GUARDS)->count;
    por->nslots = pins_get_state_variable_count (model);
    por->guard_status = malloc(sizeof(status_t[pins_get_state_label_count(model)]));
    por->action_status = malloc(sizeof(status_t[por->nactions]));

    Print ("Number of actions: %zu", por->nactions);
    Print ("Number of guards: %zu / %zu state labels", por->nguards, pins_get_state_label_count(model));

    por->action_selected = malloc(sizeof(bool[por->nactions]));
    por->queued = list_create (por->nactions);

    matrix_t *dna = GBgetDoNotAccordInfo(model); // non-commuting actions
    Assert (dm_nrows(dna) == por->nactions && dm_ncols(dna) == por->nactions);
    por->ncommute = (list_t **) dm_rows_to_idx_table (dna);

    matrix_t *nes = GBgetGuardNESInfo(model); // non-commuting actions
    Assert (dm_nrows(nes) == pins_get_state_label_count(model) &&
            dm_ncols(nes) == por->nactions);
    por->nes = (list_t **) dm_rows_to_idx_table (nes);


    // create fresh PINS model
    model_t             pormodel = GBcreateBase ();

    // set POR as new context
    GBsetContext (pormodel, por);
    // set por next state function
    GBsetNextStateAll   (pormodel, por_next_all);

    // copy all the other data from the original model
    GBinitModelDefaults (&pormodel, model);
    int                 s0[por->nslots];
    GBgetInitialState (model, s0);
    GBsetInitialState (pormodel, s0);

    return pormodel;
}

