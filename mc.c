
/**
 * Your first LTL model checker
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
    model_t model;
    size_t state_size_int;

    dfs_stack_t *stack;		// stack
    tree_ll_t *visited;		// visited set
    size_t states;
    size_t trans;
    size_t deadlocks;
} search_t;

static inline void
monitor_progress(search_t *S) {
	S->states++;
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
    int res = tree_ll_fop (S->visited, dst, true);
    if (res == DB_ROOTS_FULL || res == DB_LEAFS_FULL)
    		Abort ("Tree table full, enlarge TABLE_SIZE");
    if (res == 0) { 						// vector is new
    		dfs_stack_push (S->stack, dst);	// add vector to the stack
    }
}


/**
 * Perform search
 */
void search(search_t *S){
    while (dfs_stack_size(S->stack) > 0) {
		monitor_progress(S);
        int *cur = dfs_stack_pop(S->stack);
        size_t count = GBgetTransitionsAll(S->model, cur, process_cb, (void *) S);
        S->deadlocks += count == 0;
    }
}

/**
 * Load model & Setup the search
 */
int main(int argc, const char **argv) {

    // Parse command line options
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

    // Load PINS model
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

    // setup search
    search_t S;
    S.model = model;
    S.state_size_int = l;
    S.states = S.trans = S.deadlocks = 0;
    S.stack = dfs_stack_create(l);
    S.visited = tree_ll_create_sized (l, TABLE_SIZE, 2, 0, false, false);

    int *initial = dfs_stack_push(S.stack, NULL); // reserve space
    GBgetInitialState (model, initial);			 // place initial state on stack
    // add initial state to stack:
    tree_ll_fop (S.visited, initial, true);

    // Start search
    rt_timer_t timer = RTcreateTimer();
    RTstartTimer(timer);
    search(&S);
    RTstopTimer(timer);
    RTprintTimer(timer, "\nTotal exploration time");
    Print("State space has %zu states, %zu transitions, and %zu deadlocks",
    		S.states, S.trans,  S.deadlocks);
}
