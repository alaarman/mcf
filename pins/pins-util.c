#include <limits.h>
#include <stdlib.h>

#include "dm/dm.h"
#include "pins/ltsmin-standard.h"
#include "pins/pins-util.h"
#include "util/runtime.h"
#include "util/stringindex.h"
#include "util/util.h"

int pins_allow_undefined_edges = 0;
int pins_allow_undefined_values = 0;


size_t
pins_get_state_label_count (model_t model)
{
    lts_type_t          ltstype = GBgetLTStype (model);
    return lts_type_get_state_label_count (ltstype);
}

size_t
pins_get_edge_label_count (model_t model)
{
    lts_type_t          ltstype = GBgetLTStype (model);
    return lts_type_get_edge_label_count (ltstype);
}

size_t
pins_get_state_variable_count (model_t model)
{
    lts_type_t          ltstype = GBgetLTStype (model);
    return lts_type_get_state_length (ltstype);
}

size_t
pins_get_group_count (model_t model)
{
    matrix_t           *write_info = GBgetDMInfo (model);
    return dm_nrows (write_info);
}

char *
pins_get_state_name(model_t model, int idx)
{
    return lts_type_get_state_name(GBgetLTStype(model), idx);
}

char *
pins_get_state_label_name(model_t model, int idx)
{
    return lts_type_get_state_label_name(GBgetLTStype(model), idx);
}

char *
pins_get_edge_label_name(model_t model, int idx)
{
    return lts_type_get_edge_label_name(GBgetLTStype(model), idx);
}

void
pins_add_group_visible (model_t model, int group)
{
    int *visibles = GBgetPorGroupVisibility (model);
    Assert (visibles != NULL, "pins_add_edge_label_visible: No (lower) PINS layer uses POR visibility.");
    
    visibles[group] = 1;
}

void
pins_add_edge_label_visible (model_t model, int edge, int label)
{
    int *visibles = GBgetPorGroupVisibility (model);
    Assert (visibles != NULL, "pins_add_edge_label_visible: No (lower) PINS layer uses POR visibility.");

    lts_type_t      ltstype = GBgetLTStype (model);
    int             typeno = lts_type_get_edge_label_typeno (ltstype, edge);
    chunk           c = pins_chunk_get (model, typeno, label);
    int             sl_size = pins_get_state_label_count (model);
    int             count = 0;
    for (int i = 0; i < sl_size; i++) {
        char *name = lts_type_get_state_label_name (ltstype, i);
        if (strncmp(name, c.data, c.len) == 0) {
            pins_add_state_label_visible (model, i);
            count++;
        }
    }
    //if (count > 0) return; // we still need to add the group in case it has multiple guards

    const int *groups_of_edge = NULL;
    const int n = GBgroupsOfEdge(model, edge, label, &groups_of_edge);
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            visibles[groups_of_edge[i]] = 1;
        }
    } else {
        chunk c = pins_chunk_get(model, typeno, label);
        char s[c.len * 2 + 6];
        chunk2string(c, sizeof(s), s);
        if (pins_allow_undefined_edges) {
            Print ("There is no group that can produce edge \"%s\"", s);
        } else {
            Abort("There is no group that can produce edge \"%s\"", s);
        }
    }
}

void
pins_add_state_variable_visible (model_t model, int index)
{
    int                *visible = GBgetPorGroupVisibility(model);
    Assert (visible != NULL, "pins_add_state_variable_visible: No (lower) PINS layer uses POR visibility.");
    matrix_t           *wr_info = GBgetDMInfoMayWrite (model);
    int                 ngroups = dm_nrows (wr_info);
    for (int i = 0; i < ngroups; i++) {
        if (dm_is_set(wr_info, i, index)) {
            visible[i] = 1;
        }
    }
}

void
pins_add_state_label_visible (model_t model, int index)
{
    int                *visible = GBgetPorStateLabelVisibility(model);
    Assert (visible != NULL, "pins_add_state_label_visible: No (lower) PINS layer uses POR visibility.");
    visible[index] = 1;
}

int
pins_get_accepting_set_edge_label_index (model_t model)
{
    lts_type_t          ltstype = GBgetLTStype (model);
    return lts_type_find_edge_label (ltstype, LTSMIN_EDGE_LABEL_ACCEPTING_SET);
}

int
pins_get_accepting_state_label_index (model_t model)
{
    lts_type_t          ltstype = GBgetLTStype (model);
    return lts_type_find_state_label (ltstype, LTSMIN_STATE_LABEL_ACCEPTING);
}

int
pins_get_weak_ltl_progress_state_label_index (model_t model)
{
    lts_type_t          ltstype = GBgetLTStype (model);
    return lts_type_find_state_label (ltstype, LTSMIN_STATE_LABEL_WEAK_LTL_PROGRESS);
}

int
pins_get_progress_state_label_index (model_t model)
{
    lts_type_t          ltstype = GBgetLTStype (model);
    return lts_type_find_state_label (ltstype, LTSMIN_STATE_LABEL_PROGRESS);
}

int
pins_get_valid_end_state_label_index (model_t model)
{
    lts_type_t          ltstype = GBgetLTStype (model);
    return lts_type_find_state_label (ltstype, LTSMIN_STATE_LABEL_VALID_END);
}

static inline int
evalBoolGuard (int label, model_t model, int *src)
{
    if (label == -1) return 0;
    int val = GBgetStateLabelLong (model, label, src);
    Assert (val == 0 || val == 1, "Boolean state label expected, found: %d", val);
    return val;
}

int
pins_state_is_accepting (model_t model, int *src)
{
    int label = pins_get_accepting_state_label_index (model);
    return evalBoolGuard (label, model, src);
}

int
pins_state_is_progress (model_t model, int *src)
{
    int label = pins_get_progress_state_label_index (model);
    return evalBoolGuard (label, model, src);
}

int
pins_state_is_weak_ltl_progress (model_t model, int *src)
{
    int label = pins_get_weak_ltl_progress_state_label_index (model);
    return evalBoolGuard (label, model, src);
}

int
pins_state_is_valid_end (model_t model, int *src)
{
    int label = pins_get_valid_end_state_label_index (model);
    return evalBoolGuard (label, model, src);
}

void
pins_chunk_put_at (model_t model,int type_no,const chunk c,int pos)
{
    value_table_t map = GBgetChunkMap (model, type_no);
    VTputAtChunk (map, c, pos);
}

int
pins_chunk_put (model_t model,int type_no,const chunk c)
{
    value_table_t map = GBgetChunkMap (model, type_no);
    return VTputChunk (map, c);
}

chunk
pins_chunk_get (model_t model,int type_no,int chunk_no)
{
    value_table_t map = GBgetChunkMap (model, type_no);
    return VTgetChunk (map, chunk_no);
}

int
pins_chunk_count (model_t model,int type_no)
{
    value_table_t map = GBgetChunkMap (model, type_no);
    return VTgetCount (map);
}

table_iterator_t
pins_chunk_iterator (model_t model,int type_no)
{
    value_table_t map = GBgetChunkMap (model, type_no);
    return VTiterator (map);
}

int
pins_has_guards (model_t model)
{
    return GBgetGuardsInfo(model) != NULL;
}


void GBprintDependencyMatrix(FILE* file, model_t model) {
    Print ("\nDependency matrix (combined read/write):\n");
    dm_print(file, GBgetDMInfo(model));
}

void GBprintDependencyMatrixRead(FILE* file, model_t model) {
    Print ("\nRead dependencies:\n");
    dm_print(file, GBgetDMInfoRead(model));
}

void GBprintDependencyMatrixMayWrite(FILE* file, model_t model) {
    Print ("\nMay-write dependencies:\n");
    dm_print(file, GBgetDMInfoMayWrite(model));
}

void GBprintDependencyMatrixMustWrite(FILE* file, model_t model) {
    Print ("\nMust-write dependencies:\n");
    dm_print(file, GBgetDMInfoMustWrite(model));
}

void GBprintDependencyMatrixCombined(FILE* file, model_t model) {
    matrix_t *dm_r = GBgetDMInfoRead(model);
    matrix_t *dm_may_w = GBgetDMInfoMayWrite(model);
    matrix_t *dm_must_w = GBgetDMInfoMustWrite(model);

    Print ("\nRead/write dependencies:\n");
    dm_print_combined(file, dm_r, dm_may_w, dm_must_w);
}

void GBprintPORMatrix(FILE* file, model_t model) {
    if (GBgetDoNotAccordInfo(model) != NULL) {
        Print ("\nDo Not Accord matrix:\n");
        dm_print(file, GBgetDoNotAccordInfo(model));
    }

    if (GBgetCommutesInfo(model) != NULL) {
        Print ("\nCommutes matrix:\n");
        dm_print(file, GBgetCommutesInfo(model));
    }

    if (GBgetGuardCoEnabledInfo(model) != NULL) {
        Print ("\nMaybe coenabled matrix:\n");
        dm_print(file, GBgetGuardCoEnabledInfo(model));
    }

    if (GBgetGuardNESInfo(model) != NULL) {
        Print ("\nNecessary enabling matrix:\n");
        dm_print(file, GBgetGuardNESInfo(model));
    }

    if (GBgetGuardNDSInfo(model) != NULL) {
        Print ("\nNecessary disabling matrix:\n");
        dm_print(file, GBgetGuardNDSInfo(model));
    }

    for (int i = 0; i < GBgetMatrixCount(model); i++) {
        matrix_t *m = GBgetMatrix(model, i);
        const char *name = GBgetMatrixName(model, i);
        //index_class_t k = GBgetMatrixRowInfo(model, i);
        //index_class_t n = GBgetMatrixColumnInfo(model, i);
        pins_strictness_t s = GBgetMatrixStrictness(model, i);
        char *S = (s == PINS_MAY_CLEAR ? "may_clear" :
                   (s == PINS_MAY_SET ? "may_set" : "strict"));
        Print ("\n%s : %s (%d X %d):\n", name, S, dm_nrows(m), dm_ncols(m));
        dm_print(file, m);
    }
}

void GBprintStateLabelInfo(FILE* file, model_t model) {
    Print ("\nState labeling dependencies:\n");
    dm_print(file, GBgetStateLabelInfo(model));
}

void GBprintStateLabelGroupInfo(FILE* file, model_t model) {
    if (pins_has_guards(model))
    {
        int nGroups = dm_nrows (GBgetDMInfo (model));
        Print ("State label group info:\n");
        for (int i = 0; i < nGroups; i++) {
            guard_t* guards = GBgetGuard (model, i);
            fprintf (file, "%d (%d): ", i, guards->count);
            for (int j = 0; j < guards->count; j++) {
                fprintf (file, "%d,", guards->guard[j]);
            }
            fprintf (file, "\n");
        }
    }
}

void
GBchunkPut (model_t model, int type_no, const chunk c)
{
    pins_chunk_put (model, type_no, c);
}

void
GBchunkPutAt (model_t model, int type_no, const chunk c, int index)
{
    pins_chunk_put_at (model, type_no, c, index);
}

chunk
GBchunkGet (model_t model,int type_no,int chunk_no)
{
    return pins_chunk_get (model, type_no, chunk_no);
}

int
GBchunkCount(model_t model,int type_no)
{
    return pins_chunk_count (model, type_no);
}
