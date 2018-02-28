#ifndef PINS2PINS_POR
#define PINS2PINS_POR

#include <pins/pins.h>
#include <util/util.h>


/*
 * PINS2PINS Partial Order Reduction Layer
 *
 *
 *      /--------\
 *      | Model  |       e.g. Peterson
 *      |        |
 *      \--------/
 *         ^  |
 *         |  | callback(t)         for all { t | s-->t }
 * getNS(s)|  |
 *         |  v
 *     /----------\
 *     |   POR    |
 *     | PINS2PINS|
 *     \----------/
 *         ^  |
 *         |  | callback(t)         for a subset of { t | s-->t }
 * getNS(s)|  |
 *         |  v
 *      /--------\
 *      | Search |
 *      |  Algo  |
 *      \--------/
 *
 */


extern model_t pins2pins_por(model_t model);

#endif // PINS2PINS_POR
