#ifndef PROC_POR
#define PROC_POR


#include <pins/pins.h>
#include <pins2pins/por.h>
#include <util/dfs-stack.h>
#include <util/list.h>


typedef struct process_s {
    char               *name;
    int                 id;
    int                 pc_slot;
    list_t            *groups;

    list_t            *en;
    list_t            *succs;
    size_t              conflicts;
    size_t              depth;
    bool                visible;
} process_t;

extern process_t *identify_procs(model_t model, size_t *num_procs,
                                 int *group2proc);

#endif
