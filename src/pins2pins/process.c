
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#include <aux/options.h>
#include <pins2pins/process.h>
#include <pins/pins.h>
#include <pins/pins-util.h>
#include <syntax/ltsmin-standard.h>
#include <util/list.h>
#include <util/runtime.h>
#include <util/util.h>

static int
pins_slot_with_type_name_is_pc (model_t model, int i, char **res)
{
    lts_type_t          ltstype = GBgetLTStype(model);
    char *name = lts_type_get_state_name (ltstype, i);
    char *type = lts_type_get_state_type (ltstype, i);

    if (has_suffix(SETTINGS.OPTIONS.FNAME, "pr.dylib")) {
        if (!has_suffix(name, "._pc")) return false;

        lts_type_t          ltstype = GBgetLTStype(model);
        char *n = lts_type_get_state_name (ltstype, i);

        char *dot = strchr (n, '.');
        Assert (dot[0] == '.');
        dot[0] = '\0';
        *res = strdup (n);
        dot[0] = '.';//#elif defined(OPAAL)
        return true;
    } else if (has_suffix(SETTINGS.OPTIONS.FNAME, "dve.dylib")) {
        if (strcmp(name, type) == 0) {
            *res = name;
            return true;
        }
    } else {
        Abort("Undefined PC identification criteria for current frontend");
    }
    return false;
}

static char *
prom_group_name (model_t model, int group)
{
    lts_type_t      ltstype = GBgetLTStype (model);
    int             label = lts_type_find_edge_label (ltstype, LTSMIN_EDGE_TYPE_STATEMENT);
    if (label) return NULL;
    int             type = lts_type_get_edge_label_typeno (ltstype, label);
    size_t          count = pins_chunk_count  (model, type);
    if (count < pins_get_group_count(model)) return NULL;
    chunk           c = pins_chunk_get (model, type, group);
    return c.data;
}

static bool
pins_group_is_in_proc_with_name (model_t model, int group, char *name, int pc)
{
    if (has_suffix(SETTINGS.OPTIONS.FNAME, "pr.dylib")) {
        char *gname = prom_group_name (model, group);
        return strncmp (name, strchr(gname, '(') + 1, strlen(name)) == 0;
    } else if (has_suffix(SETTINGS.OPTIONS.FNAME, "dve.dylib")) {
        list_t *gs = (list_t *) GBgetGuard(model, group);
        for (int *g = list_begin(gs); g != list_end(gs); g++) {
            matrix_t *sl = GBgetStateLabelInfo (model);
            if (dm_is_set(sl, *g, pc) && dm_ones_in_row(sl, *g) == 1) {
                return true;
            }
        }
        return false;
    } else {
        Abort("Undefined PC identification criteria for current frontend");
        return false;
    }
}

process_t *
identify_procs (model_t model, size_t *num_procs, int *group2proc)
{
    *num_procs = 0;
    int ngroups = pins_get_group_count(model);
    int nslots = pins_get_state_variable_count (model);
    process_t          *procs = RTmalloc (sizeof(process_t[ngroups]));
    for (int i = 0; i < nslots; i++) {
        if (pins_slot_with_type_name_is_pc (model, i, &procs[*num_procs].name)) {
            procs[*num_procs].pc_slot = i;
            //procs[*num_procs].name;
            procs[*num_procs].id = *num_procs;
            procs[*num_procs].groups = list_create (ngroups);
            procs[*num_procs].en = list_create (ngroups);
            procs[*num_procs].succs = list_create (ngroups);
            (*num_procs)++;
        }
    }

    for (int g = 0; g < ngroups; g++) {
        bool found = false;
        for (size_t i = 0; i < *num_procs; i++) {
            if (pins_group_is_in_proc_with_name(model, g, procs[i].name, procs[i].pc_slot)) {
                if (found) Print ("Group %d doubly assigned to an ample-set process %s (chosing first encountered)", g, procs[i].name);
                list_add (procs[i].groups, g);
                group2proc[g] = i;
                found = true;
            }
        }
        Assert (found, "Group %d not assigned to an ample-set process", g);
    }

    Print0 ("Process --> Groups:\n");
    for (process_t *p = &procs[0]; p != &procs[*num_procs]; p++) {
        Print0 ("%3d: ", p->id);
        for (int *g = list_begin(p->groups); g != list_end(p->groups); g++) {
            Print0 ("%3d,", *g);
        }
        Print0 ("\n");
    }
    return procs;
}
