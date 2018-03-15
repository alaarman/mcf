
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

typedef struct sym_seach_s {
    model_t model;              // PINS model

    vdom_t domain;              // variable domain for decision diagrams

    vrel_t *group_next;         // queue per group (projected to read&write vars)
    vset_t *group_explored;     // visited set per group (projected to read vars)
    vset_t *group_tmp;          // tmp set per group (projected to read vars)
    list_t **r_proj;            // r_proj[i] is a list of READ variables for group i
    list_t **w_proj;            // w_proj[i] is a list of WRITE variables for group i
} sym_search_t;

/**
 * Created BDDs projected to READ / WRITE vars
 */
static void
init_domain(model_t model, sym_search_t *sym) {
    int N = pins_get_state_variable_count(model);
    int K = pins_get_group_count(model);

    sym->domain = vdom_create_domain(N, VSET_Sylvan);
    Assert (vdom_separates_rw(sym->domain), "VSET should support reads /writes");

    for (int i = 0; i < dm_ncols(GBgetDMInfo(model)); i++) {
        vdom_set_name(sym->domain, i, pins_get_state_name(model, i));
    }

    sym->group_next     = (vrel_t *)RTmalloc(K * sizeof(vrel_t));
    sym->group_explored = (vset_t *)RTmalloc(K * sizeof(vset_t));
    sym->group_tmp      = (vset_t *)RTmalloc(K * sizeof(vset_t));

    matrix_t *read_matrix = GBgetDMInfoRead(model);
    matrix_t *write_matrix = GBgetDMInfoMayWrite(model);
    sym->r_proj = (list_t **) dm_rows_to_idx_table(read_matrix);
    sym->w_proj = (list_t **) dm_rows_to_idx_table(write_matrix);

    for (int i = 0; i < K; i++) {
        sym->group_next[i]     = vrel_create_rw(sym->domain, sym->r_proj[i]->count, sym->r_proj[i]->data,
                                                             sym->w_proj[i]->count, sym->w_proj[i]->data);
        sym->group_explored[i] = vset_create(sym->domain, sym->r_proj[i]->count, sym->r_proj[i]->data);
        sym->group_tmp[i]      = vset_create(sym->domain, sym->r_proj[i]->count, sym->r_proj[i]->data);
    }
}

static void
stats_and_progress_report(vset_t current, vset_t visited, int level)
{
    long   n_count;
    double e_count;

    Print("level %d is finished", level);
    vset_count (visited, &n_count, &e_count);
    Print("visited %d has %.0f states ( %ld nodes )", level, e_count, n_count);
}

typedef struct group_iterate_s {
    vset_t          set;           // source set
    int             group;         // which transition group
    sym_search_t   *sym;
} group_iterate_t;

typedef struct group_add_s {
    vrel_t              rel;        // target relation
    int                 *src;       // state vector
    group_iterate_t     *iterator;
} group_add_t;

static void
group_add(void *context, transition_info_t *ti, int *dst, int *cpy)
{
    group_add_t *ctx = (group_add_t *) context;
    vrel_add_cpy(ctx->rel, ctx->src, dst, cpy);
}

static void
explore_cb(vrel_t rel, void *context, int *src)
{
    group_iterate_t *it = (group_iterate_t *) context;
    group_add_t ctx;
    ctx.iterator = it;
    ctx.rel = rel;
    ctx.src = src;

    model_t model = it->sym->model;
    GBgetTransitionsShortR2W (model, it->group, src, group_add, &ctx);
}

static void
expand_group_next(sym_search_t *sym, int group, vset_t set)
{
    group_iterate_t ctx;
    ctx.group = group;
    ctx.set = set;
    ctx.sym = sym;

    vset_project_minus(sym->group_tmp[group], set, sym->group_explored[group]);
    vset_union(sym->group_explored[group], sym->group_tmp[group]);

    vrel_update(sym->group_next[group], sym->group_tmp[group], explore_cb, &ctx);
    vset_clear(sym->group_tmp[group]);
}

/**
 * Perform search
 */
void search(sym_search_t *sym, vset_t visited) {
    vset_t old_vis = vset_create(sym->domain, -1, NULL);

    for (int level = 0; !vset_equal(visited, old_vis); level++) {
        vset_copy(old_vis, visited);

        stats_and_progress_report(NULL, visited, level);

        for (int i = 0; i < pins_get_group_count(sym->model); i++) {
            expand_group_next(sym, i, visited);
        }
    }
    vset_destroy(old_vis);
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
    init_domain (model, &sym);

    int *initial = malloc(sizeof(int[l]));
    GBgetInitialState (model, initial);             // place initial state on stack

    vset_t visited = vset_create(sym.domain, -1, NULL);
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
    Print("state space has %.0f states, %ld nodes", e_count, n_count);
    RTdeleteTimer(timer);
}
