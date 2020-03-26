
/**
 * An enumerative DFS algorithm using tree compression
 */

#include <stdbool.h>
#include <unistd.h>

#include "alg/aux.h"
#include "aux/options.h"
#include "pins/pins.h"
#include "pins/property-semantics.h"
#include "syntax/ltsmin-tl.h"
#include "util/dfs-stack.h"
#include "util/runtime.h"
#include "util/util.h"
#include "sylvan/lace.h"
#include "vset/vector_set.h"

static size_t progress = 100;

typedef struct seach_s {
    model_t model;           // PINS model

    dfs_stack_t *stack;      // stack
    vset_t visited;      // visited set
    size_t states;
    size_t trans;
    size_t deadlocks;
} search_t;

static inline void
report_progress (search_t *S, size_t successor_count) {
    S->states++;
    S->deadlocks += successor_count == 0;
    if (S->states == progress) {
        Print("States explored: %zu, transitions: %zu", S->states, S->trans);
        progress <<= 1; // times 2
    }
}

/**
 * Callback processing successors
 */
void callback (void *ctx, transition_info_t *ti, int *dst, int *cpy) {
    search_t *S = (search_t *) ctx;
    S->trans++;

    if (!vset_member(S->visited, dst)) {     // vector is new
        vset_add (S->visited, dst);
        dfs_stack_push (S->stack, dst);
    }
}

/**
 * Perform search
 */
void dfs_like_bdd(search_t *S) {
    while (dfs_stack_size(S->stack) > 0 && !SETTINGS.STOPPED) {

        // greedy search:
        while (dfs_stack_frame_size(S->stack) > 0) {
            int *src = dfs_stack_top (S->stack);

            if (SETTINGS.INVARIANT != NULL)
                check_invariant(S->model, S->stack, src);

            dfs_stack_enter (S->stack);
            size_t count = GBgetTransitionsAll(S->model, src, callback, (void *) S);
            report_progress (S, count);
        }

        // backtrack:
        dfs_stack_leave (S->stack);
        dfs_stack_pop(S->stack);
    }
}

/**
 * Load model & Setup the search
 */
void alg_enum_bdd(model_t model) {

    if (SETTINGS.CTL != NULL || SETTINGS.LTL != NULL ||
        SETTINGS.CTLSTAR != NULL || SETTINGS.MU != NULL) {
        Exit(1, "LTL / CTL / CTL* / model mu-calculus checking not yet implemented in explicit-state engine.");
    }
    lace_init(1, 0);
    lace_startup(0, NULL, NULL);

    // setup search:
    size_t l = pins_get_state_variable_count(model);
    search_t S;
    S.model = model;
    vdom_t dom = vdom_create_domain(l, SETTINGS.OPTIONS.BDD);
    S.visited = vset_create(dom, -1, NULL);
    S.states = S.trans = S.deadlocks = 0;
    S.stack = dfs_stack_create(l);
    int *initial = malloc(sizeof(int[l]));
    GBgetInitialState (model, initial);
    vset_add (S.visited, initial);          // add initial state to DD
    dfs_stack_push (S.stack, initial);      // place initial state on stack

    // Start search:
    rt_timer_t timer = RTcreateTimer();
    RTstartTimer(timer);
    dfs_like_bdd(&S);
    RTstopTimer(timer);

    // Print final statistics:
    RTprintTimer(timer, "\nTotal exploration time");
    Print("State space has %zu states, %zu transitions, and %zu deadlocks",
          S.states, S.trans,  S.deadlocks);
    long int nodes;
    double elements;
    vset_count(S.visited, &nodes, &elements);
    Assert (SETTINGS.STOPPED || elements == S.states, "Wrong state count in tree");
    Print(" ");
    size_t bdd_m = 16 * nodes;
    size_t table_m = sizeof(int[l]) * S.states;
    Print("%sDD memory used %zu KB (%.2f%% of %zu KB uncompressed)", SETTINGS.OPTIONS.BDD==VSET_Sylvan ? "B" : "M",
          bdd_m / 1024, (double)bdd_m/table_m*100, table_m / 1024);
    Print("Compressed size: %.2f B/state", (double)bdd_m / S.states);
    free (initial);
}
