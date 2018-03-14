
#ifndef TREEDBS_LL_H
#define TREEDBS_LL_H

#include <stdbool.h>

#include <dm/dm.h>
#include "table-ll.h"

/**
 * \file treedbs-ll.h
 * \brief
 * A tree DB stores fixed-length vectors by inserting their slots
 * pairwise in a non-resizing hash table. Indices to the nodes in the table are
 * recursively paired up again and stored in the same table enabling sharing.
 * Like in a BDD, a single tree is a reference to a node in the hash table.
 * The vectors can be reconstructed by recursively following the two references
 * (pointers) to the child nodes. Unlike a BDD implementation, a tree represents
 * a single inserted vector.
 * This tree DB also supports incremental updates: given a related vector p the
 * insert of v updates only parts of the tree that cover the difference between
 * v and p. To this end, a local tree_t representation is returned (see next and
 * prev arguments of tree_ll_lookup_incr) to be stored by the client.
 * The original vector and a unique reference can be extracted from a local
 * tree using tree_ll_data and tree_ll_index.
 *
 * For details refer to:
 * @incollection {springerlink:10.1007/978-3-642-22306-8_4,
     author = {Laarman, Alfons and van de Pol, Jaco and Weber, Michael},
     affiliation = {Formal Methods and Tools, University of Twente, The Netherlands},
     title = {{Parallel Recursive State Compression for Free}},
     booktitle = {Model Checking Software},
     series = {Lecture Notes in Computer Science},
     editor = {Groce, Alex and Musuvathi, Madanlal},
     publisher = {Springer Berlin / Heidelberg},
     isbn = {978-3-642-22305-1},
     keyword = {Computer Science},
     pages = {38-56},
     volume = {6823},
     url = {http://eprints.eemcs.utwente.nl/20146/},
     note = {10.1007/978-3-642-22306-8_4},
     year = {2011}
   }
 *
 * In this implementation, the storage of tree root nodes is separated from
 * the internal nodes. Internal nodes are stored in the data table which
 * has a maximum size of 2^32 elements. This way, references to the internal
 * nodes fit in 32 bit. Since root nodes have no parents, the table can be
 * larger than 2^32 elements and could even be resizing. Note that the number
 * of roots can be quadratic in the number of internal nodes. Here we also use
 * a parallel Cleary table for the root nodes halving its memory usage.
 * Note that the Cleary table does not have stable indices.
 *
 * Satellite bits are encoded inside the roots nodes, to accommodate global
 * (MCNDFS) color and lock count information [1].
 *
 * [1] Laarman, Langerak, vdPol, Weber and Wijs - Multi-Core Nested Depth-First
 * Search - ATVA 2011
 */

#define             DB_SIZE_MAX 40
#define             DB_ROOTS_FULL -2
#define             DB_LEAFS_FULL -3

#define             R_BITS 28      // related to cleary table key size

/**
Abstract type tree database.
*/
typedef struct treedbs_ll_s tree_ll_t;

typedef size_t tree_ref_t;

typedef int *tree_t;

extern tree_ll_t *tree_ll_create (int len, int ratio, int satellite_bits,
                                     int slim, int indexing);
extern tree_ll_t *tree_ll_create_sized (int len, int size, int ratio,
                                           int satellite_bits, int slim,
                                           int indexing);

/**
\brief Create a tree DB
\param len the vector length
\param size the log2 size of the tree table
\param ratio the log2 ratio of roots/leafs
\param m the dependency matrix
\param satellite_bits the number of satellite bits  (>0 implies indexing)
\param slim use cleary table for roots (implies !indexing)
\param indexing ensure dense references (0 <= ref < 2^size) via tree_ll_index
       (!indexing is faster)
\return the created tree DB
*/
extern tree_ll_t *tree_ll_create_dm (int len, int size, int ratio,
                                        matrix_t *m, int satellite_bits,
                                        int slim, int indexing);

extern int          tree_ll_try_set_sat_bit (tree_ll_t *dbs,
                                              const tree_ref_t ref, int index);
extern int          tree_ll_try_unset_sat_bit (tree_ll_t *dbs,
                                                const tree_ref_t ref, int index);
extern int          tree_ll_get_sat_bit (tree_ll_t *dbs, const tree_ref_t ref,
                                          int index);
extern void         tree_ll_unset_sat_bit (tree_ll_t *dbs, const tree_ref_t ref,
                                            int index);
extern uint32_t     tree_ll_get_sat_bits (tree_ll_t *dbs, const tree_ref_t ref);
extern uint32_t     tree_ll_inc_sat_bits (tree_ll_t *dbs, const tree_ref_t ref);
extern uint32_t     tree_ll_dec_sat_bits (tree_ll_t *dbs, const tree_ref_t ref);
extern int          tree_ll_try_set_sat_bits (tree_ll_t *dbs,
                                               const tree_ref_t ref,
                                               size_t bits, size_t offs,
                                               uint64_t exp, uint64_t new_val);

extern int          tree_ll_fop (tree_ll_t *dbs, const int *v, bool insert);
extern int          tree_ll_fop_incr (tree_ll_t *dbs, const int *v,
                                          tree_t prev, tree_t next, bool insert);

/**
\brief Find a vector with respect to a database and insert it if it cannot be
found.
\param dbs The dbs
\param vector The int vector
\param prev the input of the previous tree data
\retval next the output of the next tree data
\param group the group to do incremental lookup for (-1 unknown)
\return 1 if the vector was present, 0 if it was added
*/
extern int          tree_ll_fop_dm (tree_ll_t *dbs, const int *v,
                                        tree_t prev, tree_t next, int group, bool insert);


static inline int
tree_ll_lookup (tree_ll_t *dbs, const int *v)
{
    return tree_ll_fop (dbs, v, true);
}
static inline int
tree_ll_lookup_incr (tree_ll_t *dbs, const int *v, tree_t prev, tree_t next)
{
    return tree_ll_fop_incr (dbs, v, prev, next, true);
}
static inline int
tree_ll_lookup_dm (tree_ll_t *dbs, const int *v,
                    tree_t prev, tree_t next, int group)
{
    return tree_ll_fop_dm (dbs, v, prev, next, group, true);
}
static inline int
tree_ll_find (tree_ll_t *dbs, const int *v)
{
    return tree_ll_fop (dbs, v, false);
}
static inline int
tree_ll_find_incr (tree_ll_t *dbs, const int *v, tree_t prev, tree_t next)
{
    return tree_ll_fop_incr (dbs, v, prev, next, false);
}
static inline int
tree_ll_find_dm (tree_ll_t *dbs, const int *v,
                    tree_t prev, tree_t next, int group)
{
    return tree_ll_fop_dm (dbs, v, prev, next, group, false);
}


extern tree_t       tree_ll_get (tree_ll_t *dbs, const tree_ref_t ref,
                                  int *dst);

typedef struct treedbs_ll_inlined_s {
    size_t          nNodes;
    int             slim;
    int             indexing;
} treedbs_ll_inlined_t;

static inline tree_t
tree_ll_data (tree_ll_t *dbs, tree_t data) {
    return data + ((treedbs_ll_inlined_t *)dbs)->nNodes;
}

static inline tree_ref_t
tree_ll_index (tree_ll_t *dbs, tree_t data) {
    int64_t            *d64 = (int64_t *)data;
    treedbs_ll_inlined_t *d = (treedbs_ll_inlined_t *)dbs;
    return d64[!d->indexing];
}

/**
\brief Free the memory used by a tree dbs.
*/
extern void         tree_ll_free (tree_ll_t *dbs);

extern void         tree_ll_cache (tree_ll_t *dbs, size_t size);

/**
\brief return internal statistics
\see stats.h
\param dbs The dbs
*/
extern stats_t     *tree_ll_stats (tree_ll_t *dbs);

#endif
