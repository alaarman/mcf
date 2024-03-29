/*
 * property-semantics.c
 *
 *  Created on: Aug 8, 2012
 *      Author: laarman
 */
#include <stdbool.h>

#include <aux/options.h>
#include <syntax/ltsmin-type-system.h>
#include <syntax/ltsmin-standard.h>
#include <pins/property-semantics.h>
#include <pins/pins-util.h>
#include <pins2pins/por.h>
#include <util/chunk_support.h>
#include <util/unix.h>



#define ENUM_VALUE_NOT_FOUND\
    "Value '%s' cannot be found in table for enum type \"%s\"."

#define ENUM_VALUE_NOT_FOUND_HINT\
    "To change this error into a warning use option --allow-undefined-values"

#define GROUP_NOT_FOUND\
    "There is no group that can produce edge '%s'"

#define GROUP_NOT_FOUND_HINT\
    "To change this error into a warning use option --allow-undefined-edges"

void set_pins_semantics(model_t model, ltsmin_expr_t e, ltsmin_parse_env_t env, bitvector_t *deps, bitvector_t *sl_deps)
{
    const lts_type_t lts_type = GBgetLTStype(model);

    switch (e->node_type) {
        case BINARY_OP: {
            set_pins_semantics(model, e->arg1, env, deps, sl_deps);
            set_pins_semantics(model, e->arg2, env, deps, sl_deps);
            break;
        }
        case UNARY_OP: {
            set_pins_semantics(model, e->arg1, env, deps, sl_deps);
            break;
        }
        case SVAR: {
            const int N = lts_type_get_state_length(lts_type);
            if (e->idx < N) { // state variable
                if (deps != NULL) bitvector_set(deps, e->idx);
                if (SETTINGS.OPTIONS.POR) pins_add_state_variable_visible(model, e->idx);
            } else { // state label
                if (sl_deps != NULL) bitvector_set(sl_deps, e->idx - N);
                if (deps != NULL) dm_row_union(deps, GBgetStateLabelInfo(model), e->idx - N);
                if (SETTINGS.OPTIONS.POR) pins_add_state_label_visible(model, e->idx - N);
            }
            break;
        }
        case EVAR: {
            const int type = lts_type_get_edge_label_typeno(GBgetLTStype(model), e->idx);
            const int value = LTSminExprSibling(e)->idx;

            chunk c;
            c.data = SIgetC(env->values, value, (int*) &c.len);
    
            e->chunk_cache = pins_chunk_put(model, type, c);
    
            const int *groups = NULL;
            const int n = GBgroupsOfEdge(model, e->idx, e->chunk_cache, &groups);
            if (n > 0) {
                for (int k = 0; k < n; k++) {
                    const int group = groups[k];
                    if (SETTINGS.OPTIONS.POR) pins_add_group_visible(model, group);
                    if (deps != NULL) dm_row_union(deps, GBgetDMInfoRead(model), group);
                }
            } else {
                char s[c.len * 2 + 6];
                chunk2string(c, sizeof(s), s);
                if (pins_allow_undefined_edges)
                    Print(GROUP_NOT_FOUND, s);
                else
                    Error(GROUP_NOT_FOUND, s);
                if (!pins_allow_undefined_edges) Abort(GROUP_NOT_FOUND_HINT);
            }            
            break;
        }
        case CHUNK: {
            const ltsmin_expr_t other = LTSminExprSibling(e);
            Assert(other != NULL, " ");
            const int type = get_typeno(other, GBgetLTStype(model));
            chunk c;
            c.data = SIgetC(env->values, e->idx, (int*) &c.len);

            const int n_chunks = pins_chunk_count(model, type);
            e->chunk_cache = pins_chunk_put(model, type, c);
            if (lts_type_get_format(GBgetLTStype(model), type) == LTStypeEnum) {
                if (pins_chunk_count(model, type) != n_chunks) {
                    char id[c.len * 2 + 6];
                    chunk2string(c, sizeof(id), id);

                    if (pins_allow_undefined_edges)
                        Print(ENUM_VALUE_NOT_FOUND, id,
                              lts_type_get_type(GBgetLTStype(model),type));
                    else
                        Error(ENUM_VALUE_NOT_FOUND, id,
                              lts_type_get_type(GBgetLTStype(model),type));
                    if (!pins_allow_undefined_values) {
                        Abort(ENUM_VALUE_NOT_FOUND_HINT);
                    }
                }
            }
            break;
        }
        default:
            break;
    }
}

struct evar_info {
    int idx; // edge label to look for
    int num; // edge value to look for
    int exists; // whether an transition with such an edge exists
};

static void
evar_cb(void *context, transition_info_t *ti, int *dst, int *cpy)
{
    (void) dst; (void) cpy;
    struct evar_info* ctx = (struct evar_info*) context;
    ctx->exists = ctx->exists || ti->labels[ctx->idx] == ctx->num;
}

long
eval_trans_predicate(model_t model, ltsmin_expr_t e, int *state, int* edge_labels, ltsmin_parse_env_t env)
{
    const lts_type_t lts_type = GBgetLTStype(model);
    const int N = lts_type_get_state_length(lts_type);

    switch (e->token) {
        case PRED_TRUE:
            return 1;
        case PRED_FALSE:
            return 0;
        case PRED_NUM:
            return e->idx;
        case PRED_SVAR:
            if (e->idx < N) { // state variable
#ifndef NDEBUG
                // check that we never have a "maybe" value (must be guaranteed by back-end).
                const data_format_t df = lts_type_get_format(lts_type, lts_type_get_state_typeno(lts_type, e->idx));
                Assert(df != LTStypeTrilean || state[e->idx] != 2);
#endif
                return state[e->idx];
            } else { // state label
#ifndef NDEBUG
                // check that we never have a "maybe" value (must be guaranteed by back-end).
                const data_format_t df = lts_type_get_format(lts_type, lts_type_get_state_label_typeno(lts_type, e->idx - N));
                Assert(df != LTStypeTrilean || GBgetStateLabelLong(model, e->idx - N, state) != 2);
#endif
                return GBgetStateLabelLong(model, e->idx - N, state);
            }
        case PRED_EVAR: {
            if (e->parent->token == PRED_EN) {
                // test whether the state has at least one transition (existential) with a specific edge
                struct evar_info ctx;
                ctx.idx = e->idx;
                ctx.num = e->chunk_cache;
                ctx.exists = 0;

                const int *groups = NULL;
                const int n = GBgroupsOfEdge(model, e->idx, ctx.num, &groups);

                if (n > 0) {
                    for (int i = 0; i < n && ctx.exists == 0; i++) {
                        GBgetTransitionsLong(model, groups[i], state, evar_cb, &ctx);
                    }
                    return ctx.exists ? ctx.num : -1;
                } else return -1;
            } else if (edge_labels != NULL) {
                Assert(edge_labels[0] != -1, "transition checking on state predicates");
#ifndef NDEBUG
                // check that we never have a "maybe" value (must be guaranteed by back-end).
                const data_format_t df = lts_type_get_format(lts_type, lts_type_get_edge_label_typeno(lts_type, e->idx));
                Assert(df != LTStypeTrilean || edge_labels[e->idx] != 2);
#endif
                return edge_labels[e->idx];
            } else return -1;
        }
        case PRED_CHUNK: {
#ifndef NDEBUG
            const ltsmin_expr_t other = LTSminExprSibling(e);
            Assert(other != NULL && (other->token == SVAR || other->token == EVAR));
#endif
            return e->chunk_cache;
        }
        case PRED_NOT:
            return !eval_trans_predicate(model, e->arg1, state, edge_labels, env);
        case PRED_EN:
        case PRED_EQ:
            return eval_trans_predicate(model, e->arg1, state, edge_labels, env) ==
                    eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_NEQ:
            return eval_trans_predicate(model, e->arg1, state, edge_labels, env) !=
                    eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_AND:
            return eval_trans_predicate(model, e->arg1, state, edge_labels, env) &&
                    eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_OR:
            return eval_trans_predicate(model, e->arg1, state, edge_labels, env) ||
                    eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_IMPLY:
            return !eval_trans_predicate(model, e->arg1, state, edge_labels, env) ||
                      eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_EQUIV:
            return !eval_trans_predicate(model, e->arg1, state, edge_labels, env) ==
                    !eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_LT:
            return eval_trans_predicate(model, e->arg1, state, edge_labels, env) <
                    eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_LEQ:
            return eval_trans_predicate(model, e->arg1, state, edge_labels, env) <=
                    eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_GT:
            return eval_trans_predicate(model, e->arg1, state, edge_labels, env) >
                    eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_GEQ:
            return eval_trans_predicate(model, e->arg1, state, edge_labels, env) >=
                    eval_trans_predicate(model, e->arg2, state, edge_labels, env);
        case PRED_MULT: {
            const long l = eval_trans_predicate(model, e->arg1, state, edge_labels, env);
            const long r = eval_trans_predicate(model, e->arg2, state, edge_labels, env);
            if (long_mult_overflow(l, r)) {
                LTSminLogExpr("integer overflow in: ", e, env);
                Exit(LTSMIN_EXIT_FAILURE, " ");
            }
            return l * r;
        }
        case PRED_DIV: {
            const long l = eval_trans_predicate(model, e->arg1, state, edge_labels, env);
            const long r = eval_trans_predicate(model, e->arg2, state, edge_labels, env);
            if (r == 0 || ((l == LONG_MIN) && r == -1)) {
                LTSminLogExpr("division by zero in: ", e, env);
                Exit(LTSMIN_EXIT_FAILURE, " ");
            }
            return l / r;
        }
        case PRED_REM: {
            const long l = eval_trans_predicate(model, e->arg1, state, edge_labels, env);
            const long r = eval_trans_predicate(model, e->arg2, state, edge_labels, env);
            if (r == 0 || ((l == LONG_MIN) && r == -1)) {
                LTSminLogExpr("division by zero in: ", e, env);
                Exit(LTSMIN_EXIT_FAILURE, " ");
            }
            return l % r;
        }
        case PRED_ADD: {
            const long l = eval_trans_predicate(model, e->arg1, state, edge_labels, env);
            const long r = eval_trans_predicate(model, e->arg2, state, edge_labels, env);
            if ((r > 0 && l > LONG_MAX - r) || (r < 0 && l < LONG_MIN - r)) {
                LTSminLogExpr("integer overflow in: ", e, env);
                Exit(LTSMIN_EXIT_FAILURE, " ");
            }
            return l + r;
        }
        case PRED_SUB: {
            const long l = eval_trans_predicate(model, e->arg1, state, edge_labels, env);
            const long r = eval_trans_predicate(model, e->arg2, state, edge_labels, env);
            if ((r > 0 && l < LONG_MIN + r) || (r < 0 && l > LONG_MAX + r)) {
                LTSminLogExpr("integer overflow in: ", e, env);
                Exit(LTSMIN_EXIT_FAILURE, " ");
            }
            return l - r;
        }
        default: {
            LTSminLogExpr("Unhandled predicate expression: ", e, env);
            Exit(LTSMIN_EXIT_FAILURE, " ");
        }
    }
    return 0;
}


long
eval_state_predicate(model_t model, ltsmin_parse_env_t e, int *state)
{
    static int edge_error[1] = {-1};
    return eval_trans_predicate(model, e->expr, state, edge_error, e);
}
