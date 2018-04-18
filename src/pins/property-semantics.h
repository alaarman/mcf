/*
 * property-semantics.c
 *
 *  Created on: Aug 8, 2012
 *      Author: laarman
 */

#ifndef PROPERTY_SEMANTICS_H
#define PROPERTY_SEMANTICS_H

#include <limits.h>

#include <syntax/ltsmin-tl.h>
#include <syntax/ltsmin-parse-env.h>
#include <syntax/ltsmin-standard.h>
#include <pins/pins.h>
#include <pins/pins-util.h>
#include <util/util.h>

/* set visibility in PINS and dependencies in deps (if not NULL) */
extern void set_pins_semantics(model_t model, ltsmin_expr_t e,
                               ltsmin_parse_env_t env,
                               bitvector_t *deps, bitvector_t *sl_deps);

extern long eval_trans_predicate(model_t model, ltsmin_expr_t e,
                                 int *state, int* edge_labels,
                                 ltsmin_parse_env_t env);

extern long eval_state_predicate(model_t model, ltsmin_parse_env_t e,
                                 int *state);

#endif // PROPERTY_SEMANTICS_H
