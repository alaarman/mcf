#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>


// Should be first to avoid collision with LTSmin print macros
#include <ltl2ba/ltl2ba.h>
#undef Debug
#undef Assert
#undef min



#include <ltsmin-lib/ltl2ba-lex.h>

#ifdef HAVE_SPOT
#include <ltsmin-lib/ltl2spot.h>
#endif

//#include <ltsmin-lib/ltl2spot.h>
//#include <ltsmin-lib/ltsmin-standard.h>


#include <dm/dm.h>
#include <pins/pins.h>
#include <pins/ltsmin-standard.h>
#include <pins/pins-util.h>
#include <pins2pins/ltl.h>
#include <util/runtime.h>
#include <util/util.h>



//#include <pins-lib/property-semantics.h>

uint32_t                HOA_ACCEPTING_SET = 0;
static char            *ltl_file = NULL;
static const char      *ltl_semantics_name = "none";
pins_buchi_type_t       PINS_BUCHI_TYPE = PINS_BUCHI_TYPE_BA;

static const int        TEXTBOOK_INIT = (1UL << 30);


typedef struct ltl_context {
    model_t         parent;
    int             ltl_idx;
    int             sl_idx_accept;
    int             sl_idx_nonaccept;
    int             el_idx_accept_set;
    int             len;
    int             old_len;
    int             groups;
    int             old_groups;
    int             edge_labels;
    int             edge_labels_old;
    ltsmin_buchi_t *ba;
    int            *labels;
} ltl_context_t;

typedef struct cb_context {
    model_t         model;
    TransitionCB    cb;
    void           *user_context;
    int            *src;
    int             ntbtrans; /* number of textbook transitions */
    ltl_context_t  *ctx;
    int             predicate_evals; // assume < 32 predicates..
} cb_context;

static inline int
is_accepting (ltl_context_t *ctx, int *state)
{
    // state[0] must be the buchi automaton, because it's necessarily dependent
    int val = state[ctx->ltl_idx] == TEXTBOOK_INIT ? 0 : state[ctx->ltl_idx];
    Assert(val < ctx->ba->state_count);
    return ctx->ba->states[val]->accept;
}

static int
ltl_sl_short(model_t model, int label, int *state)
{
    ltl_context_t *ctx = GBgetContext(model);
    if (label == ctx->sl_idx_accept) {
        return is_accepting (ctx, state);
    } else if (label == ctx->sl_idx_nonaccept) {
        return !is_accepting (ctx, state);
    } else {
        return GBgetStateLabelShort(ctx->parent, label, state + 1);
    }
}

static int
ltl_sl_long(model_t model, int label, int *state)
{
    ltl_context_t *ctx = GBgetContext(model);
    if (label == ctx->sl_idx_accept) {
        return is_accepting (ctx, state);
    } else if (label == ctx->sl_idx_nonaccept) {
        return !is_accepting (ctx, state);
    } else {
        return GBgetStateLabelLong(ctx->parent, label, state + 1);
    }
}

static void
ltl_sl_all(model_t model, int *state, int *labels)
{
    ltl_context_t *ctx = GBgetContext(model);
    GBgetStateLabelsAll(ctx->parent, state + 1, labels);
    labels[ctx->sl_idx_accept] = is_accepting (ctx, state);
    if (ctx->sl_idx_nonaccept != -1) {
        labels[ctx->sl_idx_nonaccept] = !is_accepting (ctx, state);
    }
}

static inline int
eval (cb_context *infoctx, int *state, int *edge_labels)
{
    ltl_context_t *ctx = infoctx->ctx;
    model_t parent = GBgetParent (infoctx->model);
    int pred_evals = 0;                 // assume < 32 predicates..
    for (int i = 0; i < ctx->ba->predicate_count; i++) {
        if (eval_trans_predicate (parent, ctx->ba->predicates[i], state,
                                  edge_labels, ctx->ba->env)) {
            pred_evals |= (1 << i);
        }
    }
    return pred_evals;
}

void ltl_textbook_cb (void *c, transition_info_t *ti, int *dst, int *cpy) {
    cb_context *infoctx = (cb_context*)c;
    ltl_context_t *ctx = infoctx->ctx;
    // copy dst, append ltl never claim in lockstep
    int dst_buchi[ctx->len];
    memcpy (dst_buchi + 1, dst, ctx->old_len * sizeof(int) );

    int dst_pred = eval (infoctx, dst, ti->labels);

    int i = infoctx->src[ctx->ltl_idx];
    if (i == TEXTBOOK_INIT) { i=0; } /* textbook: extra initial state */
    Assert (i < ctx->ba->state_count );
#ifdef HAVE_SPOT
    if (PINS_BUCHI_TYPE == PINS_BUCHI_TYPE_TGBA) {
        Assert (ctx->edge_labels_old == ctx->el_idx_accept_set);
        memcpy (ctx->labels, ti->labels, sizeof(int[ctx->edge_labels_old]));
        ti->labels = ctx->labels; // inline because por_proviso is passed up
    }
#endif
    for(int j=0; j < ctx->ba->states[i]->transition_count; j++) {
        // check predicates
        if ((dst_pred & ctx->ba->states[i]->transitions[j].pos[0]) == ctx->ba->states[i]->transitions[j].pos[0] &&
            (dst_pred & ctx->ba->states[i]->transitions[j].neg[0]) == 0) {
            // perform transition
            dst_buchi[ctx->ltl_idx] = ctx->ba->states[i]->transitions[j].to_state;

#ifdef HAVE_SPOT
            // allocate the edge labels and write the TGBA acceptance set
            if (PINS_BUCHI_TYPE == PINS_BUCHI_TYPE_TGBA) {
                ti->labels[ctx->el_idx_accept_set] =
                                ctx->ba->states[i]->transitions[j].acc_set;
            }
#endif

            // callback, emit new state, move allowed
            infoctx->cb(infoctx->user_context, ti, dst_buchi,cpy);
            ++infoctx->ntbtrans;
        }
    }
}

static int
ltl_textbook_long (model_t self, int group, int *src, TransitionCB cb,
           void *user_context)
{
    (void)self; (void)group; (void)src; (void)cb; (void)user_context;
    Abort("TODO: LTL + GBgetTransitionsLong"); return 0;
}

static int
ltl_textbook_short (model_t self, int group, int *src, TransitionCB cb,
           void *user_context)
{
    (void)self; (void)group; (void)src; (void)cb; (void)user_context;
    Abort("TODO: LTL + GBgetTransitionsShort"); return 0;
}


static int
ltl_textbook_all (model_t self, int *src, TransitionCB cb, void *user_context)
{
    ltl_context_t *ctx = GBgetContext(self);
    cb_context new_ctx = {self, cb, user_context, src, 0, ctx, 0};
    if (src[ctx->ltl_idx] == TEXTBOOK_INIT) {
        int labels[ctx->edge_labels];
        memset (labels, 0, sizeof(int[ctx->edge_labels]));
        transition_info_t ti = GB_TI(labels, ctx->old_groups);
        ltl_textbook_cb(&new_ctx, &ti, src + 1, NULL);
        return new_ctx.ntbtrans;
    } else {
        GBgetTransitionsAll(ctx->parent, src + 1, ltl_textbook_cb, &new_ctx);
        return new_ctx.ntbtrans;
    }
}


/**
 *
 */
model_t
GBaddLTL (model_t model)
{
    if (ltl_file == NULL) return model;

    //     TODO: add PINS layer to layer communication
    //    if (LTL_info.has_X && PINS_POR) { Abort

    lts_type_t ltstype = GBgetLTStype(model);
    int old_idx = pins_get_accepting_state_label_index (model);
    if (old_idx != -1) {
        Print ("LTL layer: model already has a ``%s'' property, overriding",
               lts_type_get_state_label_name(ltstype, old_idx));
    }

    ltsmin_buchi_t *ba = init_ltsmin_buchi(model, ltl_file);

    model_t         ltlmodel = GBcreateBase();
    ltl_context_t *ctx = RTmalloc(sizeof *ctx);
    ctx->parent = model;
    ctx->ba = ba;
    GBsetContext(ltlmodel, ctx);

    // copy and extend ltstype
    int             len = lts_type_get_state_length (ltstype);
    ctx->old_len = len;

    // We add a state variable (at the beginning) and some transitions for SPIN semantics
    int             new_len = len + 1; // one for buchi state

    // set in context for later use in function
    ctx->ltl_idx = 0;

    /* state variables and their types */
    lts_type_t ltstype_new = lts_type_clone (ltstype);
    // set new length
    lts_type_set_state_length (ltstype_new, new_len);
    // add type
    int type_count = lts_type_get_type_count (ltstype_new);
    int ltl_type = lts_type_add_type (ltstype_new, "buchi", NULL);
    Assert (ltl_type == type_count, "LTL type error");
    lts_type_set_format (ltstype_new, ltl_type, LTStypeDirect);

    // add name (at position 0)
    lts_type_set_state_name(ltstype_new, ctx->ltl_idx, "ltl");
    lts_type_set_state_typeno(ltstype_new, ctx->ltl_idx, ltl_type);

    // copy-move old state names
    for (int i = 0; i < len; i++) {
        lts_type_set_state_name(ltstype_new, i+1, lts_type_get_state_name(ltstype, i));
        lts_type_set_state_type(ltstype_new, i+1, lts_type_get_state_type(ltstype, i));
    }

    /* State labels */
    int bool_type = lts_type_add_type (ltstype_new, "LTL_bool", NULL);
    lts_type_set_format(ltstype_new, bool_type, LTStypeBool);

    matrix_t       *p_sl = GBgetStateLabelInfo (model);
    int             sl_count = dm_nrows (p_sl);

//    ctx->is_weak = is_weak(ba);

    ctx->sl_idx_nonaccept = -1;
    int             new_sl_count = sl_count + 1;
    lts_type_set_state_label_count (ltstype_new, new_sl_count);

    // add buchi label (at end)
    ctx->sl_idx_accept = sl_count;
    lts_type_set_state_label_name (ltstype_new, ctx->sl_idx_accept, LTSMIN_STATE_LABEL_ACCEPTING);
    lts_type_set_state_label_typeno (ltstype_new, ctx->sl_idx_accept, bool_type);


    // copy state labels
    for (int i = 0; i < sl_count; ++i) {
        lts_type_set_state_label_name (ltstype_new, i,
                                       lts_type_get_state_label_name(ltstype,i));
        lts_type_set_state_label_typeno (ltstype_new, i,
                                         lts_type_get_state_label_typeno(ltstype,i));
    }

    if (PINS_BUCHI_TYPE == PINS_BUCHI_TYPE_TGBA) {
        /* Edge labels */
        int acc_set_type = lts_type_add_type (ltstype_new, LTSMIN_EDGE_TYPE_ACCEPTING_SET, NULL);

        int edge_labels = lts_type_get_edge_label_count (ltstype);

        lts_type_set_edge_label_count (ltstype_new, edge_labels + 1);
        lts_type_set_edge_label_name (ltstype_new, edge_labels, LTSMIN_EDGE_LABEL_ACCEPTING_SET);
        lts_type_set_edge_label_type (ltstype_new, edge_labels, LTSMIN_EDGE_TYPE_ACCEPTING_SET);
        lts_type_set_edge_label_typeno (ltstype_new, edge_labels, acc_set_type);
        lts_type_set_format (ltstype_new, acc_set_type, LTStypeDirect);
        HOA_ACCEPTING_SET = ba->acceptance_set;

        ctx->el_idx_accept_set = edge_labels;
    }

    ctx->labels = RTmalloc (sizeof(int[lts_type_get_edge_label_count (ltstype_new)]));

    // This messes up the trace, the chunk maps now is one index short! Fixed below
    GBcopyChunkMaps(ltlmodel, model);

    // set new type
    GBsetLTStype(ltlmodel, ltstype_new);

    // extend the chunk maps
    GBgrowChunkMaps(ltlmodel, type_count);

    /* Fix matrixes */
    matrix_t       *p_new_dm = (matrix_t*) RTmalloc(sizeof(matrix_t));
    matrix_t       *p_new_dm_r = (matrix_t*) RTmalloc(sizeof(matrix_t));
    matrix_t       *p_new_dm_w = (matrix_t*) RTmalloc(sizeof(matrix_t));
    matrix_t       *p_dm = GBgetDMInfo (model);
    matrix_t       *p_dm_r = GBgetDMInfoRead (model);
    matrix_t       *p_dm_w = GBgetDMInfoMayWrite (model);

    int             groups = dm_nrows( GBgetDMInfo(model) );
    int             new_ngroups;

    new_ngroups = groups + 1;
    Assert (ba->state_count < TEXTBOOK_INIT, "Only up to %u Buchi states supported with text-book semantics.",
               TEXTBOOK_INIT - 1);

    bitvector_t formula_state_dep;
    bitvector_create(&formula_state_dep, len);
    
    // mark the parts the buchi automaton uses for reading
    for (int k=0; k < ba->predicate_count; k++) {
        set_pins_semantics(model, ba->predicates[k], ba->env, &formula_state_dep, NULL);
    }

    // add one column to the matrix
    // copy matrix, add buchi automaton
    dm_create(p_new_dm  , new_ngroups, len+1);
    dm_create(p_new_dm_r, new_ngroups, len+1);
    dm_create(p_new_dm_w, new_ngroups, len+1);
    for(int i = 0; i < groups; i++) {
        // copy old matrix rows
        for(int j=0; j < len; j++) {
            if (dm_is_set(p_dm, i, j))
                dm_set(p_new_dm, i, j+1);
            if (dm_is_set(p_dm_r, i, j))
                dm_set(p_new_dm_r, i, j+1);
            if (dm_is_set(p_dm_w, i, j))
                dm_set(p_new_dm_w, i, j+1);
        }

        // add buchi as dependent
        dm_set(p_new_dm, i, ctx->ltl_idx);
        dm_set(p_new_dm_r, i, ctx->ltl_idx);
        dm_set(p_new_dm_w, i, ctx->ltl_idx);

        // add buchi variables as dependent (read)
        for(int j=0; j < len; j++) {
            if (bitvector_is_set(&formula_state_dep, j)) {
                dm_set(p_new_dm, i, j+1);
                dm_set(p_new_dm_r, i, j+1);
            }
        }
    }

    for (int i = groups; i < new_ngroups; i++) {
        // add buchi as dependent
        dm_set(p_new_dm, i, ctx->ltl_idx);
        dm_set(p_new_dm_r, i, ctx->ltl_idx);
        dm_set(p_new_dm_w, i, ctx->ltl_idx);

        // add buchi variables as dependent (read)
        for (int j=0; j < len; j++) {
            if (bitvector_is_set(&formula_state_dep, j)) {
                dm_set(p_new_dm, i, j+1);
                dm_set(p_new_dm_r, i, j+1);
            }
        }
    }

    GBsetDMInfo(ltlmodel, p_new_dm);
    GBsetDMInfoRead(ltlmodel, p_new_dm_r);
    GBsetDMInfoMayWrite(ltlmodel, p_new_dm_w);

    // create new state label matrix
    matrix_t       *p_new_sl = RTmalloc (sizeof *p_new_sl);

    int             sl_len = dm_ncols (p_sl);
    int             new_sl_len = sl_len + 1;
    Assert (new_sl_len == new_len);

    dm_create(p_new_sl, new_sl_count, new_sl_len);
    // copy old matrix
    for (int i=0; i < sl_count; ++i) {
        for (int j=0; j < sl_len; ++j) {
            if (dm_is_set(p_sl, i, j))
                dm_set(p_new_sl, i, j+1);
        }
    }

    // add buchi label dependencies
    dm_set(p_new_sl, ctx->sl_idx_accept, ctx->ltl_idx);
    for (int j=0; j < sl_len; ++j) {
        if (bitvector_is_set(&formula_state_dep, j))
            dm_set(p_new_sl, ctx->sl_idx_accept, j+1);
    }
    
    bitvector_clear(&formula_state_dep);

    GBsetStateLabelInfo(ltlmodel, p_new_sl);

    // Now overwrite the state label functions to catch the new state label
    GBsetStateLabelShort (ltlmodel, ltl_sl_short);
    GBsetStateLabelLong (ltlmodel, ltl_sl_long);
    GBsetStateLabelsAll (ltlmodel, ltl_sl_all);

    lts_type_validate(ltstype_new);

    GBsetNextStateLong  (ltlmodel, ltl_textbook_long);
    GBsetNextStateShort (ltlmodel, ltl_textbook_short);
    GBsetNextStateAll   (ltlmodel, ltl_textbook_all);

    int        *cur_visibility = GBgetPorGroupVisibility  (model);
    if (cur_visibility && new_ngroups != groups) {
        int        *group_visibility = RTmallocZero( new_ngroups * sizeof(int) );
        memcpy (group_visibility, cur_visibility, sizeof(int[groups]));
        GBsetPorGroupVisibility  (ltlmodel, group_visibility);
    }

    GBinitModelDefaults (&ltlmodel, model);

    int             s0[new_len];
    GBgetInitialState (model, s0+1);
    // set buchi initial state
    s0[ctx->ltl_idx] = TEXTBOOK_INIT;

    GBsetInitialState (ltlmodel, s0);

    GBsetExit(ltlmodel, ltl_exit);

    ctx->len = new_len;
    ctx->old_groups = groups;
    ctx->groups = new_ngroups;
    ctx->edge_labels_old = lts_type_get_edge_label_count(ltstype);
    ctx->edge_labels = lts_type_get_edge_label_count(ltstype_new);
    return ltlmodel;
}
