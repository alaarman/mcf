#ifndef SYM_BFS_
#define SYM_BFS_

/**
 * An symbolic BFS algorithm using decision diagrams
 */

#include <stdbool.h>
#include <unistd.h>

#include "pins/pins.h"

/**
 * Do a symbolic BFS search for the PINS model
 */
void alg_sym_bfs(model_t model);

#endif
