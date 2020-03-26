#ifndef ALG_AUX_
#define ALG_AUX_

/**
 * An enumerative DFS algorithm using tree compression
 */

#include "pins/pins.h"
#include "util/dfs-stack.h"

extern void print_state(model_t model, int *src);

extern void check_invariant(model_t model, dfs_stack_t *stack, int *src);


#endif
