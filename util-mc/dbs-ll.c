#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

#include <util/runtime.h>
#include <util/util.h>
#include "util-mc/atomics.h"
#include "util-mc/dbs-ll.h"

static const int        TABLE_SIZE = 24;
static const mem_hash_t EMPTY = 0;
static mem_hash_t       WRITE_BIT = 1;
static mem_hash_t       WRITE_BIT_R = ~((mem_hash_t)1);
static const uint64_t   CL_MASK = -(1UL << CACHE_LINE);

struct table_ll_s {
    size_t              length;
    size_t              sat_bits;
    size_t              bytes;
    size_t              size;
    size_t              threshold;
    uint64_t            mask;
    int                *data;
    mem_hash_t         *table;
    mem_hash_t          sat_mask;
    hash64_f            hash64;
    int                 full;
    pthread_key_t       local_key;
};

typedef struct local_s {
    stats_t             stat;
} local_t;

local_t *
get_local (table_ll_t *dbs)
{
    local_t            *loc = pthread_getspecific(dbs->local_key);
    if (loc == NULL) {
        loc = RTalign (CACHE_LINE_SIZE, sizeof (local_t));
        memset (loc, 0, sizeof (local_t));
        pthread_setspecific (dbs->local_key, loc);
    }
    return loc;
}

mem_hash_t
table_get_sat_bits (table_ll_t *dbs, const dbs_ref_t ref)
{
    return atomic_read (dbs->table+ref) & dbs->sat_mask;
}

int
table_try_set_sat_bits (table_ll_t *dbs, const ref_t ref,
                       size_t bits, size_t offs,
                       uint64_t exp, uint64_t new_val)
{
    mem_hash_t         old_val, new_v;
    mem_hash_t         mask = (1UL << bits) - 1;
    Assert (new_val < (1UL << dbs->sat_bits), "new_val too high");
    Assert ((new_val & mask) == new_val, "new_val too high wrt bits");

    mask <<= offs;
    new_val <<= offs;
    exp <<= offs;
    mem_hash_t      hash_and_sat = atomic_read (dbs->table+ref);
    old_val = hash_and_sat & dbs->sat_mask;
    if ((old_val & mask) != exp) return false;

    new_v = (hash_and_sat & ~mask) | new_val;
    return cas(dbs->table + ref, hash_and_sat, new_v);
}

int
table_get_sat_bit (table_ll_t *dbs, const dbs_ref_t ref, int index)
{
    mem_hash_t      bit = 1U << index;
    mem_hash_t      hash_and_sat = atomic_read (dbs->table+ref);
    mem_hash_t      val = hash_and_sat & bit;
    return val >> index;
}

void
table_unset_sat_bit (table_ll_t *dbs, const dbs_ref_t ref, int index)
{
    mem_hash_t      bit = 1U << index;
    mem_hash_t      hash_and_sat = atomic_read (dbs->table+ref);
    mem_hash_t      val = hash_and_sat & ~bit;
    atomic_write (dbs->table+ref, val);
}

int
table_try_set_sat_bit (table_ll_t *dbs, const dbs_ref_t ref, int index)
{
    mem_hash_t      bit = 1U << index;
    do {
        mem_hash_t      hash_and_sat = atomic_read (dbs->table+ref);
        mem_hash_t      val = hash_and_sat & bit;
        if (val)
            return 0; // bit was already set
        if (cas(dbs->table+ref, hash_and_sat, hash_and_sat | bit))
            return 1; // success
    } while ( 1 ); // another bit was set
}

int
table_try_unset_sat_bit (table_ll_t *dbs, const dbs_ref_t ref, int index)
{
    mem_hash_t      bit = (1U << index);
    do {
        mem_hash_t      hash_and_sat = atomic_read (dbs->table+ref);
        mem_hash_t      val = hash_and_sat & bit;
        if (!val)
            return 0; // bit was already set
        if (cas(dbs->table+ref, hash_and_sat, hash_and_sat & ~bit))
            return 1; // success
    } while ( 1 ); // another bit was set
}

mem_hash_t
table_inc_sat_bits (table_ll_t *dbs, const dbs_ref_t ref)
{
    mem_hash_t      val, newval;
    do {
        val = atomic_read (dbs->table+ref);
        Assert ((val & dbs->sat_mask) != dbs->sat_mask, "Too many incs");
        newval = val + 1;
    } while ( ! cas (dbs->table+ref, val, newval) );
    return newval;
}

mem_hash_t
table_dec_sat_bits (table_ll_t *dbs, const dbs_ref_t ref)
{
    mem_hash_t      val, newval;
    do {
        val = atomic_read (dbs->table+ref);
        Assert ((val & dbs->sat_mask) != 0, "Too many decs");
        newval = val - 1;
    } while ( ! cas (dbs->table+ref, val, newval) );
    return newval;
}

void
table_set_sat_bits (table_ll_t *dbs, const dbs_ref_t ref, mem_hash_t value)
{
    mem_hash_t      hash = dbs->table[ref] & ~dbs->sat_mask;
    atomic_write (dbs->table+ref, hash | (value & dbs->sat_mask));
}

mem_hash_t
table_memoized_hash (table_ll_t *dbs, const dbs_ref_t ref)
{
    return dbs->table[ref] & ~dbs->sat_mask;
}

int
table_fop_hash (table_ll_t *dbs, const int *v, dbs_ref_t *ret, hash64_t *hash, bool insert)
{
    local_t            *loc = get_local (dbs);
    stats_t            *stat = &loc->stat;
    size_t              seed = 0;
    size_t              l = dbs->length;
    size_t              b = dbs->bytes;
    hash64_t            hash_rehash = hash ? *hash : dbs->hash64 ((char *)v, b, 0);
    mem_hash_t          hash_memo = hash_rehash >> 32;
    if (2 == sizeof(mem_hash_t))
        hash_memo = ((hash_rehash >> 48) ^ hash_memo);
    mem_hash_t          lost = hash_memo & (WRITE_BIT | dbs->sat_mask);
    hash_memo = (hash_memo + (lost << (dbs->sat_bits+1))) & ~dbs->sat_mask;
    uint32_t            prime = odd_primes[hash_rehash & PRIME_MASK];
    //avoid collision of memoized hash with reserved values EMPTY and WRITE_BIT
    while (EMPTY == hash_memo || WRITE_BIT == hash_memo)
        hash_memo = (hash_memo + (prime << (dbs->sat_bits+1))) & ~dbs->sat_mask;
    mem_hash_t          WAIT = hash_memo & WRITE_BIT_R;
    mem_hash_t          DONE = hash_memo | WRITE_BIT;
    while (seed < dbs->threshold && !atomic_read(&dbs->full)) {
        size_t              ref = hash_rehash & dbs->mask;
        size_t              line_end = (ref & CL_MASK) + CACHE_LINE_SIZE;
        for (size_t i = 0; i < CACHE_LINE_SIZE; i++) {
            mem_hash_t         *bucket = &dbs->table[ref];
            if (EMPTY == *bucket) {
                if (!insert) return DB_NOT_FOUND;
                if (cas (bucket, EMPTY, WAIT)) {
                    memcpy (&dbs->data[ref * l], v, b);
                    atomic_write (bucket, DONE);
                    stat->elts++;
                    *ret = ref;
                    return 0;
                }
            }
            if (DONE == ((atomic_read(bucket) | WRITE_BIT) & ~dbs->sat_mask)) {
                while (WAIT == (atomic_read(bucket) & ~dbs->sat_mask)) {}
                if (0 == memcmp (&dbs->data[ref * l], v, b)) {
                    *ret = ref;
                    return 1;
                }
                stat->misses++;
            }
            ref += 1;
            ref = ref == line_end ? line_end - CACHE_LINE_SIZE : ref;
        }
        hash_rehash += prime << CACHE_LINE; seed++;
        stat->rehashes++;
    }
    *ret = 0; //incorrect, but does not matter anymore
    atomic_write (&dbs->full, 1);
    return DB_FULL;
}

int *
table_get (table_ll_t *dbs, const dbs_ref_t ref, int *dst)
{
    return &dbs->data[ref * dbs->length];
    (void) dst;
}

table_ll_t *
table_create (int length)
{
    return table_create_sized (length, TABLE_SIZE, (hash64_f)MurmurHash64, 0);
}

table_ll_t *
table_create_sized (int length, int size, hash64_f hash64, int satellite_bits)
{
    table_ll_t *           dbs = RTalign (CACHE_LINE_SIZE, sizeof (table_ll_t));
    dbs->length = length;
    dbs->hash64 = hash64;
    dbs->full = 0;
    Assert (satellite_bits < 8, "To many satellite bits for good DBS performance");
    dbs->sat_bits = satellite_bits;
    dbs->sat_mask = satellite_bits ? (1UL<<satellite_bits) - 1 : 0;
    WRITE_BIT <<= satellite_bits;
    WRITE_BIT_R <<= satellite_bits;
    dbs->bytes = length * sizeof (int);
    dbs->size = 1UL << size;
    dbs->threshold = dbs->size / 100;
    dbs->threshold = min (dbs->threshold, 1ULL << 16);
    dbs->mask = ((uint64_t)dbs->size) - 1;
    dbs->table = RTalignZero (CACHE_LINE_SIZE, sizeof (mem_hash_t[dbs->size]));
    dbs->data = RTalign (CACHE_LINE_SIZE, dbs->size * dbs->bytes);
    pthread_key_create (&dbs->local_key, RTfree);
    return dbs;
}

void
table_free (table_ll_t *dbs)
{
    RTfree (dbs->data);
    RTfree (dbs->table);
    RTfree (dbs);
}

stats_t *
table_stats (table_ll_t *dbs)
{
    stats_t            *res = RTmallocZero (sizeof (*res));
    stats_t            *stat = &get_local (dbs)->stat;
    memcpy (res, stat, sizeof (*res));
    return res;
}
