#ifndef PINS2PINS_LTL
#define PINS2PINS_LTL

#include <pins/pins.h>


/**
\brief The behaviour of the ltl buchi product
*/

/**
\brief The type of the Buchi automaton

PINS_BUCHI_TYPE_BA refers to the (state-based) Buchi Automaton obtained
from ltl2ba.
PINS_BUCHI_TYPE_TGBA refers to the Transition Based Generalized Buchi
Automaton obtained from Spot (via ltl2spot).
PINS_BUCHI_TYPE_SPOTBA refers to the (state-based) Buchi Automaton
obtained from Spot (via ltl2spot).
*/
typedef enum {
    PINS_BUCHI_TYPE_BA,
    PINS_BUCHI_TYPE_TGBA,
    PINS_BUCHI_TYPE_SPOTBA,
} pins_buchi_type_t;

/**
\brief Add LTL layer on top all other pins layers
*/
extern model_t pins2pins_ltl(model_t model);

#endif // PINS2PINS_LTL
