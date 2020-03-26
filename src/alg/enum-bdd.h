#ifndef ENUM_BDD_
#define ENUM_BDD_

/**
 * An enumerative DFS algorithm using tree compression
 */

#include <stdbool.h>
#include <unistd.h>

#include "pins/pins.h"

/**
 * Do an enumerative DFS search for the PINS model
 */
void alg_enum_bdd(model_t model);

#endif
