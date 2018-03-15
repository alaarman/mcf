#ifndef ENUM_DFS_
#define ENUM_DFS_

/**
 * An enumerative DFS algorithm using tree compression
 */

#include <stdbool.h>
#include <unistd.h>

#include "pins/pins.h"

/**
 * Do an enumerative DFS search for the PINS model
 */
void alg_enum_dfs(model_t model);

#endif
