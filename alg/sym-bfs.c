
/**
 * An symbolic BFS algorithm
 */

#include <stdbool.h>
#include <unistd.h>

#include "pins/pins.h"
#include "sylvan/lace.h"
#include "util/dfs-stack.h"
#include "util/list.h"
#include "util/runtime.h"
#include "util/util.h"
#include "util-mc/tree-ll.h"
#include "vset/vector_set.h"


typedef struct sym_search_s {
    // PINS model
    model_t model;
    // variable domain for decision diagrams
    vdom_t domain;

    // queue per group (projected to read&write vars)
    vrel_t *group_next;

    // visited set per group (projected to read vars)
    vset_t *group_explored;
    // tmp set per group (projected to read vars)
    vset_t *group_tmp;

    // r_proj[i] is a list of READ variables for group i
    list_t **r_proj;
    // w_proj[i] is a list of WRITE variables for group i
    list_t **w_proj;

    // the largest BDD size encountered (for stats)
    long   peak_nodes;
} sym_search_t;

/**
 * Create BDDs projected to READ / WRITE vars
 *
 * BDDs for long vectors will be created on demand
 */
static void
init_domain(model_t model, sym_search_t *sym) {
    int N = pins_get_state_variable_count(model);
    int K = pins_get_group_count(model);

    sym->domain = vdom_create_domain(N, VSET_LDDmc);

    for (int i = 0; i < dm_ncols(GBgetDMInfo(model)); i++) {
        vdom_set_name(sym->domain, i, pins_get_state_name(model, i));
    }

    sym->group_next     = (vrel_t *)RTmalloc(K * sizeof(vrel_t));
    sym->group_explored = (vset_t *)RTmalloc(K * sizeof(vset_t));
    sym->group_tmp      = (vset_t *)RTmalloc(K * sizeof(vset_t));

    if (false && vdom_separates_rw(sym->domain)) {
        matrix_t *read_matrix = GBgetDMInfoRead(model);
        matrix_t *write_matrix = GBgetDMInfoMayWrite(model);
        sym->r_proj = (list_t **) dm_rows_to_idx_table(read_matrix);
        sym->w_proj = (list_t **) dm_rows_to_idx_table(write_matrix);
    } else {
        matrix_t *m = GBgetDMInfo(model);
        sym->r_proj = (list_t **) dm_rows_to_idx_table(m);
        sym->w_proj = sym->r_proj;
    }

    for (int i = 0; i < K; i++) {
        if (vdom_separates_rw(sym->domain)) {
            sym->group_next[i] = vrel_create_rw(sym->domain,
                                                sym->r_proj[i]->count,
                                                sym->r_proj[i]->data,
                                                sym->w_proj[i]->count,
                                                sym->w_proj[i]->data);
        } else {
            sym->group_next[i] = vrel_create(sym->domain,
                                             sym->r_proj[i]->count,
                                             sym->r_proj[i]->data);
        }
        sym->group_explored[i] = vset_create(sym->domain, sym->r_proj[i]->count,
                                             sym->r_proj[i]->data);
        sym->group_tmp[i] = vset_create(sym->domain, sym->r_proj[i]->count,
                                        sym->r_proj[i]->data);
    }
}

static void
stats_count_and_progress_report(sym_search_t *sym, int level,
                                vset_t V, vset_t L)
{
    long   V_nodes;
    double V_states;
    vset_count (V, &V_nodes, &V_states);
    long   L_nodes;
    double L_states;
    vset_count (L, &L_nodes, &L_states);

    Print("Level %d has %.0f states, visited %.0f (%ld nodes)",
              level, L_states, V_states, V_nodes + L_nodes);
    sym->peak_nodes = max(sym->peak_nodes, V_nodes + L_nodes);
}

typedef struct rel_add_s {
    vrel_t              rel;        // target relation
    int                *src;        // state vector
} rel_add_t;

static void
rel_add_cb(void *context, transition_info_t *ti, int *dst, int *cpy)
{
    rel_add_t *ctx = (rel_add_t *) context;
    vrel_add(ctx->rel, ctx->src, dst);
}

typedef struct rel_expand_s {
    int             group;         // which transition group
    sym_search_t   *sym;
} rel_expand_t;

static void
rel_expand_cb(vrel_t rel, void *context, int *src)
{
    rel_expand_t *expand = (rel_expand_t *) context;
    model_t model = expand->sym->model;

    rel_add_t ctx;
    ctx.rel = rel;
    ctx.src = src;
    GBgetTransitionsShort (model, expand->group, src, rel_add_cb, &ctx);
}

/**
 * Learn the transition relation by:
 * 1. identifying new inputs
 *    (short vectors not yet in group_exploured[group]),
 * 2. putting the new short vectors in the relation
 *    (this is what vrel_update does).
 * 3. using PINS to compute sucessors for the new short vector
 *    (see GBgetTransitionsShortR2W call in rel_expand_cb)
 * 4. completing the paths in the relation DD by addings the short successors
 *    (see rel_add_cb)
 */
static void
expand_group_next(sym_search_t *sym, int group)
{
    rel_expand_t ctx;
    ctx.group = group;
    ctx.sym = sym;
    vrel_update(sym->group_next[group], sym->group_tmp[group], rel_expand_cb, &ctx);
}

/**
 * Perform search
 */
void search(sym_search_t *sym, vset_t visited) {
    vset_t old_vis = vset_create(sym->domain, -1, NULL); // long vectors (all vars)
    vset_t next_level = vset_create(sym->domain, -1, NULL); // long vectors (all vars)

    for (int level = 1; !vset_equal(visited, old_vis); level++) {
        vset_copy(old_vis, visited);

        for (int i = 0; i < pins_get_group_count(sym->model); i++) {
            vset_clear(sym->group_tmp[i]);
            vset_project_minus(sym->group_tmp[i], visited, sym->group_explored[i]);
            vset_union(sym->group_explored[i], sym->group_tmp[i]);

            expand_group_next(sym, i);
        }

        for (int i = 0; i < pins_get_group_count(sym->model); i++) {
            vset_next_union(visited, visited, sym->group_next[i], visited);
        }

        stats_count_and_progress_report(sym, level, visited, next_level);
    }

    vset_destroy(old_vis);
    vset_destroy(next_level);
}


/**
 * Perform search
 */
void search2(sym_search_t *sym, vset_t visited) {
    int K = pins_get_group_count(sym->model);

    // long vectors (all vars)
    vset_t level = vset_create(sym->domain, -1, NULL);
    vset_t tmpA = vset_create(sym->domain, -1, NULL),
           tmpB = vset_create(sym->domain, -1, NULL);
    vset_copy(level, visited);

    int count = 0;
    while(!vset_is_empty(level)){

        for(int i = 0; i < K; i++){
            // 0. implement relation learning per group i by projecting
            //    the DD level using vset_project(group_tmp[i], level)
            vset_project(sym->group_tmp[i], level);
            vset_minus(sym->group_tmp[i], sym->group_explored[i]);

            // 1. implement relation learning per group i using
            //    vrel_update(group_next[i], group_tmp[i], ...)
            //    (a callback needs to be implemented passing the group and sym)
            expand_group_next(sym, i);

            vset_union(sym->group_explored[i], sym->group_tmp[i]);
        }

        vset_clear(tmpB);
        for(int i = 0; i < K; i++){
            // 2. apply learned transition relation on long vectors
            //    using vset_next(tmp, level, group_next[i])
            vset_next(tmpA, level, sym->group_next[i]);
            vset_union(tmpB, tmpA);
        }

        // 4. Combine contents of level, visited, tmp, etc using
        //    vset_union, vset_minus, vset_clear, vset_copy, etc
        vset_copy(level, tmpB);
        vset_minus(level, visited);

        vset_union(visited, tmpB);

        stats_count_and_progress_report(sym, ++count, visited, level);
    }

    vset_destroy(level);
    vset_destroy(tmpA);
    vset_destroy(tmpB);
}


/**
 * Load model & Setup the search
 */
void alg_sym_bfs(model_t model) {
    lace_init(1, 0);
    lace_startup(0, NULL, NULL);

    // setup search:
    size_t l = pins_get_state_variable_count(model);
    sym_search_t sym;
    sym.model = model;
    sym.peak_nodes = 0;
    init_domain (model, &sym);

    int *initial = malloc(sizeof(int[l]));
    GBgetInitialState (model, initial);             // place initial state on stack

    vset_t visited = vset_create(sym.domain, -1, NULL); // long vectors (all vars)
    vset_add(visited, initial);
    free (initial);

    // Start search:
    rt_timer_t timer = RTcreateTimer();
    RTstartTimer(timer);
    search(&sym, visited);
    RTstopTimer(timer);

    // Print final statistics:
    RTprintTimer(timer, "\nTotal exploration time");
    Print("counting visited states...");
    RTresetTimer(timer);
    RTstartTimer(timer);
    long n_count;
    double e_count;
    vset_count(visited, &n_count, &e_count);
    RTstopTimer(timer);
    RTprintTimer(timer, "counting took");
    RTdeleteTimer(timer);
    Print(" ");
    Print("state space has %.0f states, %ld DD peak nodes (%ld final nodes)",
          e_count, sym.peak_nodes, n_count);
    Print(" ");
    size_t tree_m = sizeof(char[16][sym.peak_nodes]);
    size_t table_m = sizeof(int[l]) * (size_t)e_count;
    Print("DD memory used %zu KB (%.2f%% of %zu KB uncompressed)",
          tree_m / 1024, (double)tree_m/table_m*100, table_m / 1024);
    Print("Compressed size: %.2f B/state", (double)tree_m / e_count);

}
