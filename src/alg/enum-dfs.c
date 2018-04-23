
/**
 * An enumerative DFS algorithm using tree compression
 */

#include <stdbool.h>
#include <unistd.h>

#include "aux/options.h"
#include "pins/pins.h"
#include "pins/property-semantics.h"
#include "syntax/ltsmin-tl.h"
#include "util/dfs-stack.h"
#include "util/runtime.h"
#include "util/util.h"
#include "util-mc/tree-ll.h"

static size_t TABLE_SIZE = 28; // log2 size of tree table
static size_t progress = 10000;

typedef struct seach_s {
    model_t model;           // PINS model

    dfs_stack_t *stack;      // stack
    tree_ll_t *visited;      // visited set
    size_t states;
    size_t trans;
    size_t deadlocks;

    int *dst_tree;           // additional space for storing new "trees"
    int *src_tree;           // pointer to source tree (on stack)
} search_t;

static inline void
monitor_progress(search_t *S, size_t successor_count) {
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
void process_cb(void *ctx, transition_info_t *ti, int *dst, int *cpy) {
    search_t *S = (search_t *) ctx;
    S->trans++;
    //int res = tree_ll_fop (S->visited, dst, true);
    int res = tree_ll_fop_dm (S->visited, dst, S->src_tree, S->dst_tree,
                              ti->group, true);
    if (res == DB_ROOTS_FULL || res == DB_LEAFS_FULL)
        Abort ("Tree table full, enlarge TABLE_SIZE");
    if (res == 0) {                              // vector is new
        dfs_stack_push (S->stack, S->dst_tree); // add !tree! to the stack
    }
}


void print_state(search_t *S, int *src) {
    for (size_t i = 0; i < pins_get_state_variable_count(S->model); i++) {
        Print0("%d, ", src[i]);
    }
    Print("\n");
}

void check_invariant(search_t *S, int *src) {
    if (eval_state_predicate(S->model, SETTINGS.INVARIANT, src) == 0)
        return;
    Error ("Invariant violation FOUND.");
    Error ("Printing trace:");
    print_state (S, src);
    while (dfs_stack_nframes(S->stack) > 0) {
        dfs_stack_leave(S->stack);
        S->src_tree = dfs_stack_top(S->stack);
        int *src = tree_ll_data(S->visited, S->src_tree);
        print_state (S, src);
    }
    // TODO: print actions and labels
    Exit(1, "Invariant '%s' violated.", SETTINGS.OPTIONS.INVARIANT);

}

/**
 * Perform search
 */
void dfs(search_t *S) {
    while (dfs_stack_size(S->stack) > 0) {

        // greedy search:
        while (dfs_stack_frame_size(S->stack) > 0) {
            S->src_tree = dfs_stack_top(S->stack);
            int *src = tree_ll_data(S->visited, S->src_tree);

            if (SETTINGS.INVARIANT != NULL)
                check_invariant(S, src);

            dfs_stack_enter (S->stack);
            size_t count = GBgetTransitionsAll(S->model, src, process_cb, (void *) S);
            monitor_progress(S, count);
        }

        // backtrack:
        dfs_stack_leave (S->stack);
        dfs_stack_pop(S->stack);
    }
}

/**
 * Load model & Setup the search
 */
void alg_enum_dfs(model_t model) {

    if (SETTINGS.CTL != NULL || SETTINGS.LTL != NULL ||
        SETTINGS.CTLSTAR != NULL || SETTINGS.MU != NULL) {
        Exit(1, "LTL / CTL / CTL* / model mu-calculus checking not yet implemented in explicit-state engine.");
    }

    // setup search:
    size_t l = pins_get_state_variable_count(model);
    search_t S;
    S.model = model;
    S.states = S.trans = S.deadlocks = 0;
    S.stack = dfs_stack_create(2 * l);        // store trees
    S.dst_tree = malloc(sizeof(int[2 * l]));
    matrix_t *m = GBgetDMInfo(model);
    S.visited = tree_ll_create_dm (l, TABLE_SIZE, 2, m, 0, false, false);
    int *initial = malloc(sizeof(int[l]));
    GBgetInitialState (model, initial);             // place initial state on stack
    tree_ll_fop_dm (S.visited, initial, NULL, S.dst_tree, -1, true);
    dfs_stack_push (S.stack, S.dst_tree);

    // Start search:
    rt_timer_t timer = RTcreateTimer();
    RTstartTimer(timer);
    dfs(&S);
    RTstopTimer(timer);

    // Print final statistics:
    RTprintTimer(timer, "\nTotal exploration time");
    Print("State space has %zu states, %zu transitions, and %zu deadlocks",
          S.states, S.trans,  S.deadlocks);
    stats_t *stats = tree_ll_stats (S.visited);
    Assert (stats->elts == S.states, "Wrong state count in tree");
    Print(" ");
    size_t tree_m = sizeof(int[2][stats->nodes]);
    size_t table_m = sizeof(int[l]) * S.states;
    Print("Tree memory used %zu KB (%.2f%% of %zu KB uncompressed)",
          tree_m / 1024, (double)tree_m/table_m*100, table_m / 1024);
    Print("Compressed size: %.2f B/state", (double)tree_m / S.states);
    free (initial);
}
