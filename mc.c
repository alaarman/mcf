
/**
 * Your first model checker
 *
 * PINS = Partitioned Next-State Interface
 * (previously called 'greybox', hence the mix of GB* / pins_* functions)
 */

#include <stdbool.h>
#include <unistd.h>

#include "loader/loader.h"
#include "pins/pins.h"
#include "pins/pins-util.h"
#include "pins2pins/por.h"
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

/**
 * Perform search
 */
void dfs(search_t *S){
    while (dfs_stack_size(S->stack) > 0) {

        // greedy search:
        while (dfs_stack_frame_size(S->stack) > 0) {
            S->src_tree = dfs_stack_top(S->stack);
            int *src = tree_ll_data(S->visited, S->src_tree);
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
int main(int argc, const char **argv) {

    // Parse command line options:
    const char *fname = NULL;
    bool    POR = false;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--por") == 0) {
            POR = true;
        } else if (access(fname, F_OK) == -1) {
            fname = argv[i];
            Print ("Using model in file '%s'", argv[i]);
        } else {
            Abort ("Unknown option '%s'.", argv[i]);
        }
    }
    if (fname == NULL) Abort("Supply a file name.");

    // Load PINS model:
    model_t model = GBcreateBase();
    GBsetChunkMap (model, simple_table_factory_create());
    pins_model_loader (model, fname);
    if (POR) {
        Print("Activating Partial Order Reduction layer");
        model = pins2pins_por(model); // wrap model
    }

    // Print model info:
    size_t l = pins_get_state_variable_count(model);
    Print("State vectors are %zu * 32-bit long", l);
    Print("State slots are:");
    Print0("\t");
    for (size_t i = 0 ; i < l; i++)
            Print0("%s,", pins_get_state_name(model, i));
    Print(" ");
    Print("There are %zu state labels", pins_get_state_label_count(model));
    Print("State labels are (skipping guards): ");
    Print0("\t");
    for (size_t i = 0 ; i <  pins_get_state_label_count(model); i++)
        if (strncmp(pins_get_state_label_name(model, i), "guard", 5) != 0)
            Print0("%s,", pins_get_state_label_name(model, i));
    Print(" ");

    // setup search:
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
    Print("Tree memory used %zu KB (%.2f%% of %zu KB)", tree_m / 1024, (double)tree_m/table_m*100, table_m / 1024);
    Print("Compressed size: %.2f B/state", (double)tree_m / S.states);
    free (initial);
}
