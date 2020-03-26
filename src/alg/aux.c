
/**
 * Auxiliary functions
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
#include "vset/vector_set.h"


void
print_state(model_t model, int *src)
{
    for (size_t i = 0; i < pins_get_state_variable_count(model); i++) {
        Print0("%d, ", src[i]);
    }
    Print("\n");
}

void
check_invariant(model_t model, dfs_stack_t *stack, int *src)
{
    if (eval_state_predicate(model, SETTINGS.INVARIANT, src) != 0)
        return;
    Error ("Invariant violation FOUND.");
    Error ("Printing trace:");
    print_state (model, src);
    while (dfs_stack_nframes(stack) > 0) {
        dfs_stack_leave(stack);
        int *src = dfs_stack_top(stack);
        print_state (model, src);
    }
    // TODO: print actions and labels
    Exit(1, "Invariant '%s' violated.", SETTINGS.OPTIONS.INVARIANT);
}

