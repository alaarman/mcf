#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <setjmp.h>

typedef uint64_t ulong_long_int_t;
typedef int64_t slong_long_int_t;
typedef uint32_t ulong_int_t;
typedef int32_t slong_int_t;
typedef union
{
    uint16_t var;
    uint32_t __padding__;
} ushort_int_t;
typedef union
{
    int16_t var;
    uint32_t __padding__;
} sshort_int_t;
typedef union
{
    uint8_t var;
    uint32_t __padding__;
} ubyte_t;
typedef ubyte_t byte_t;
typedef union
{
    int8_t var;
    uint32_t __padding__;
} sbyte_t;
typedef size_t size_int_t;

typedef struct transition_info
{
    int* label;
    int  group;
    int  por_proviso;
} transition_info_t;


struct state_struct_t
{
    byte_t on[10];
    byte_t clear[10];
    byte_t holding;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) Hand;
}
__attribute__((__packed__));
int state_size = sizeof(state_struct_t);

state_struct_t initial_state = { 3,6,4,8,9,254,7,0,254,1,0,0,1,0,0,1,0,0,0,0,253,0 };

extern "C" int get_state_size() {
    return state_size;
}

extern "C" void get_initial_state( void *to )
{
    memcpy(to, &initial_state, state_size);
}

extern "C" int have_property()
{
    return false;
}

extern "C" int get_action( void* model, int t, const state_struct_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_struct_t *out, int *cpy), void *arg ) 
{
    transition_info_t transition_info = { NULL, t, 0 };
    (void)model; // ignore model
    int states_emitted = 0;
    state_struct_t tmp;
    state_struct_t *out = &tmp;
    goto switch_state;
    l0: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 2;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l1: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[0].var = 255);
        cpy[((int*)&((*out).on[0].var) - (int*)&(*out))] = 0;
        ((*out).clear[0].var = 0);
        cpy[((int*)&((*out).clear[0].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 0);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
        // must-write:   1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l2: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[1].var = 255);
        cpy[((int*)&((*out).on[1].var) - (int*)&(*out))] = 0;
        ((*out).clear[1].var = 0);
        cpy[((int*)&((*out).clear[1].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 1);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
        // must-write:   0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l3: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[2].var = 255);
        cpy[((int*)&((*out).on[2].var) - (int*)&(*out))] = 0;
        ((*out).clear[2].var = 0);
        cpy[((int*)&((*out).clear[2].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 2);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
        // must-write:   0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l4: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[3].var = 255);
        cpy[((int*)&((*out).on[3].var) - (int*)&(*out))] = 0;
        ((*out).clear[3].var = 0);
        cpy[((int*)&((*out).clear[3].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 3);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l5: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[4].var = 255);
        cpy[((int*)&((*out).on[4].var) - (int*)&(*out))] = 0;
        ((*out).clear[4].var = 0);
        cpy[((int*)&((*out).clear[4].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 4);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
        // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l6: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[5].var = 255);
        cpy[((int*)&((*out).on[5].var) - (int*)&(*out))] = 0;
        ((*out).clear[5].var = 0);
        cpy[((int*)&((*out).clear[5].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 5);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
        // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l7: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[6].var = 255);
        cpy[((int*)&((*out).on[6].var) - (int*)&(*out))] = 0;
        ((*out).clear[6].var = 0);
        cpy[((int*)&((*out).clear[6].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 6);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l8: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[7].var = 255);
        cpy[((int*)&((*out).on[7].var) - (int*)&(*out))] = 0;
        ((*out).clear[7].var = 0);
        cpy[((int*)&((*out).clear[7].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 7);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l9: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[8].var = 255);
        cpy[((int*)&((*out).on[8].var) - (int*)&(*out))] = 0;
        ((*out).clear[8].var = 0);
        cpy[((int*)&((*out).clear[8].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 8);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l10: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).on[9].var = 255);
        cpy[((int*)&((*out).on[9].var) - (int*)&(*out))] = 0;
        ((*out).clear[9].var = 0);
        cpy[((int*)&((*out).clear[9].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 9);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l11: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[0].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[0].var].var) - (int*)&(*out))] = 0;
        ((*out).on[0].var = 255);
        cpy[((int*)&((*out).on[0].var) - (int*)&(*out))] = 0;
        ((*out).clear[0].var = 0);
        cpy[((int*)&((*out).clear[0].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 0);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l12: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[1].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[1].var].var) - (int*)&(*out))] = 0;
        ((*out).on[1].var = 255);
        cpy[((int*)&((*out).on[1].var) - (int*)&(*out))] = 0;
        ((*out).clear[1].var = 0);
        cpy[((int*)&((*out).clear[1].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 1);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l13: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[2].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[2].var].var) - (int*)&(*out))] = 0;
        ((*out).on[2].var = 255);
        cpy[((int*)&((*out).on[2].var) - (int*)&(*out))] = 0;
        ((*out).clear[2].var = 0);
        cpy[((int*)&((*out).clear[2].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 2);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l14: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[3].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[3].var].var) - (int*)&(*out))] = 0;
        ((*out).on[3].var = 255);
        cpy[((int*)&((*out).on[3].var) - (int*)&(*out))] = 0;
        ((*out).clear[3].var = 0);
        cpy[((int*)&((*out).clear[3].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 3);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l15: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[4].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[4].var].var) - (int*)&(*out))] = 0;
        ((*out).on[4].var = 255);
        cpy[((int*)&((*out).on[4].var) - (int*)&(*out))] = 0;
        ((*out).clear[4].var = 0);
        cpy[((int*)&((*out).clear[4].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 4);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l16: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[5].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[5].var].var) - (int*)&(*out))] = 0;
        ((*out).on[5].var = 255);
        cpy[((int*)&((*out).on[5].var) - (int*)&(*out))] = 0;
        ((*out).clear[5].var = 0);
        cpy[((int*)&((*out).clear[5].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 5);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l17: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[6].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[6].var].var) - (int*)&(*out))] = 0;
        ((*out).on[6].var = 255);
        cpy[((int*)&((*out).on[6].var) - (int*)&(*out))] = 0;
        ((*out).clear[6].var = 0);
        cpy[((int*)&((*out).clear[6].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 6);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l18: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[7].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[7].var].var) - (int*)&(*out))] = 0;
        ((*out).on[7].var = 255);
        cpy[((int*)&((*out).on[7].var) - (int*)&(*out))] = 0;
        ((*out).clear[7].var = 0);
        cpy[((int*)&((*out).clear[7].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 7);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l19: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[8].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[8].var].var) - (int*)&(*out))] = 0;
        ((*out).on[8].var = 255);
        cpy[((int*)&((*out).on[8].var) - (int*)&(*out))] = 0;
        ((*out).clear[8].var = 0);
        cpy[((int*)&((*out).clear[8].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 8);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l20: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 1;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).on[9].var].var = 1);
        cpy[((int*)&((*out).clear[(*out).on[9].var].var) - (int*)&(*out))] = 0;
        ((*out).on[9].var = 255);
        cpy[((int*)&((*out).on[9].var) - (int*)&(*out))] = 0;
        ((*out).clear[9].var = 0);
        cpy[((int*)&((*out).clear[9].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 9);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l21: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[0].var = 0);
        cpy[((int*)&((*out).clear[0].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 0);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l22: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[1].var = 0);
        cpy[((int*)&((*out).clear[1].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l23: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[2].var = 0);
        cpy[((int*)&((*out).clear[2].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 2);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l24: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[3].var = 0);
        cpy[((int*)&((*out).clear[3].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 3);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l25: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[4].var = 0);
        cpy[((int*)&((*out).clear[4].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 4);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l26: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[5].var = 0);
        cpy[((int*)&((*out).clear[5].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 5);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l27: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[6].var = 0);
        cpy[((int*)&((*out).clear[6].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 6);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l28: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[7].var = 0);
        cpy[((int*)&((*out).clear[7].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 7);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l29: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[8].var = 0);
        cpy[((int*)&((*out).clear[8].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 8);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l30: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[9].var = 0);
        cpy[((int*)&((*out).clear[9].var) - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 9);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l31: {
        *out = *in;
        int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Hand.state.var = 0;
        cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
        ((*out).clear[(*out).holding.var].var = 1);
        cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).on[(*out).holding.var].var = 254);
        cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
        ((*out).holding.var = 253);
        cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    switch_state: switch( t )
    {
        case 0: goto l0;
        case 1: goto l1;
        case 2: goto l2;
        case 3: goto l3;
        case 4: goto l4;
        case 5: goto l5;
        case 6: goto l6;
        case 7: goto l7;
        case 8: goto l8;
        case 9: goto l9;
        case 10: goto l10;
        case 11: goto l11;
        case 12: goto l12;
        case 13: goto l13;
        case 14: goto l14;
        case 15: goto l15;
        case 16: goto l16;
        case 17: goto l17;
        case 18: goto l18;
        case 19: goto l19;
        case 20: goto l20;
        case 21: goto l21;
        case 22: goto l22;
        case 23: goto l23;
        case 24: goto l24;
        case 25: goto l25;
        case 26: goto l26;
        case 27: goto l27;
        case 28: goto l28;
        case 29: goto l29;
        case 30: goto l30;
        case 31: goto l31;
        default: printf ("Wrong group! Using greybox/long call + -l (DiVinE LTL semantics)? This combo is not implemented."); exit (-1);
    }
    return 0;
}

extern "C" int get_successor( void* model, int t, const state_struct_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_struct_t *out, int *cpy), void *arg ) 
{
    int states_emitted = 0;
    goto switch_state;
    l0: {
        
        // read:         1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).on[3].var == 2 && (*in).on[2].var == 5 && (*in).on[5].var == 9 && (*in).on[9].var == 4 && (*in).on[4].var == 7 && (*in).on[7].var == 1 && (*in).on[1].var == 0 && (*in).on[0].var == 6 && (*in).on[6].var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l1: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[0].var == 1 && (*in).on[0].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l2: {
        
        // read:         0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[1].var == 1 && (*in).on[1].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l3: {
        
        // read:         0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[2].var == 1 && (*in).on[2].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l4: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[3].var == 1 && (*in).on[3].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l5: {
        
        // read:         0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[4].var == 1 && (*in).on[4].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l6: {
        
        // read:         0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[5].var == 1 && (*in).on[5].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l7: {
        
        // read:         0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[6].var == 1 && (*in).on[6].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l8: {
        
        // read:         0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[7].var == 1 && (*in).on[7].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l9: {
        
        // read:         0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[8].var == 1 && (*in).on[8].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l10: {
        
        // read:         0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[9].var == 1 && (*in).on[9].var == 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l11: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1
        // actions_read: 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[0].var == 1 && (*in).on[0].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l12: {
        
        // read:         0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[1].var == 1 && (*in).on[1].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l13: {
        
        // read:         0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[2].var == 1 && (*in).on[2].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l14: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[3].var == 1 && (*in).on[3].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l15: {
        
        // read:         0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[4].var == 1 && (*in).on[4].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l16: {
        
        // read:         0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[5].var == 1 && (*in).on[5].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l17: {
        
        // read:         0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[6].var == 1 && (*in).on[6].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l18: {
        
        // read:         0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[7].var == 1 && (*in).on[7].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l19: {
        
        // read:         0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[8].var == 1 && (*in).on[8].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l20: {
        
        // read:         0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Hand.state.var == 0) )  &&  ( ((*in).clear[9].var == 1 && (*in).on[9].var != 254) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l21: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[0].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l22: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[1].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l23: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[2].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l24: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[3].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l25: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[4].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l26: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[5].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l27: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[6].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l28: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[7].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l29: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[8].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l30: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) )  &&  ( ((*in).clear[9].var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l31: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).Hand.state.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    switch_state: switch( t )
    {
        case 0: goto l0;
        case 1: goto l1;
        case 2: goto l2;
        case 3: goto l3;
        case 4: goto l4;
        case 5: goto l5;
        case 6: goto l6;
        case 7: goto l7;
        case 8: goto l8;
        case 9: goto l9;
        case 10: goto l10;
        case 11: goto l11;
        case 12: goto l12;
        case 13: goto l13;
        case 14: goto l14;
        case 15: goto l15;
        case 16: goto l16;
        case 17: goto l17;
        case 18: goto l18;
        case 19: goto l19;
        case 20: goto l20;
        case 21: goto l21;
        case 22: goto l22;
        case 23: goto l23;
        case 24: goto l24;
        case 25: goto l25;
        case 26: goto l26;
        case 27: goto l27;
        case 28: goto l28;
        case 29: goto l29;
        case 30: goto l30;
        case 31: goto l31;
        default: printf ("Wrong group! Using greybox/long call + -l (DiVinE LTL semantics)? This combo is not implemented."); exit (-1);
    }
    return 0;
}

extern "C" int get_successors( void *model, const state_struct_t *in, void (*callback)(void *arg, transition_info_t *transition_info, state_struct_t *out, int *cpy), void *arg ) 
{
    (void)model; // ignore model
    bool system_in_deadlock = true;
    transition_info_t transition_info = { NULL, -1, 0 };
    int states_emitted = 0;
    state_struct_t tmp;
    state_struct_t *out = &tmp;
    int cpy[22] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, };
    if ( false )
    {
        ;
    }
    else
    {
        if (  ( ((*in).Hand.state.var == 0) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).on[3].var == 2 && (*in).on[2].var == 5 && (*in).on[5].var == 9 && (*in).on[9].var == 4 && (*in).on[4].var == 7 && (*in).on[7].var == 1 && (*in).on[1].var == 0 && (*in).on[0].var == 6 && (*in).on[6].var == 8) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 2;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 0;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[0].var == 1 && (*in).on[0].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[0].var = 255);
                cpy[((int*)&((*out).on[0].var) - (int*)&(*out))] = 0;
                ((*out).clear[0].var = 0);
                cpy[((int*)&((*out).clear[0].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 0);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
                // must-write:   1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 1;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[1].var == 1 && (*in).on[1].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[1].var = 255);
                cpy[((int*)&((*out).on[1].var) - (int*)&(*out))] = 0;
                ((*out).clear[1].var = 0);
                cpy[((int*)&((*out).clear[1].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 1);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
                // must-write:   0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 2;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[2].var == 1 && (*in).on[2].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[2].var = 255);
                cpy[((int*)&((*out).on[2].var) - (int*)&(*out))] = 0;
                ((*out).clear[2].var = 0);
                cpy[((int*)&((*out).clear[2].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 2);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
                // must-write:   0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 3;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[3].var == 1 && (*in).on[3].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[3].var = 255);
                cpy[((int*)&((*out).on[3].var) - (int*)&(*out))] = 0;
                ((*out).clear[3].var = 0);
                cpy[((int*)&((*out).clear[3].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 3);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 4;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[4].var == 1 && (*in).on[4].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[4].var = 255);
                cpy[((int*)&((*out).on[4].var) - (int*)&(*out))] = 0;
                ((*out).clear[4].var = 0);
                cpy[((int*)&((*out).clear[4].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 4);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
                // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 5;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[5].var == 1 && (*in).on[5].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[5].var = 255);
                cpy[((int*)&((*out).on[5].var) - (int*)&(*out))] = 0;
                ((*out).clear[5].var = 0);
                cpy[((int*)&((*out).clear[5].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 5);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
                // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 6;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[6].var == 1 && (*in).on[6].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[6].var = 255);
                cpy[((int*)&((*out).on[6].var) - (int*)&(*out))] = 0;
                ((*out).clear[6].var = 0);
                cpy[((int*)&((*out).clear[6].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 6);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 7;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[7].var == 1 && (*in).on[7].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[7].var = 255);
                cpy[((int*)&((*out).on[7].var) - (int*)&(*out))] = 0;
                ((*out).clear[7].var = 0);
                cpy[((int*)&((*out).clear[7].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 7);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 8;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[8].var == 1 && (*in).on[8].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[8].var = 255);
                cpy[((int*)&((*out).on[8].var) - (int*)&(*out))] = 0;
                ((*out).clear[8].var = 0);
                cpy[((int*)&((*out).clear[8].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 8);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 9;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[9].var == 1 && (*in).on[9].var == 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).on[9].var = 255);
                cpy[((int*)&((*out).on[9].var) - (int*)&(*out))] = 0;
                ((*out).clear[9].var = 0);
                cpy[((int*)&((*out).clear[9].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 9);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 10;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1
            // actions_read: 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[0].var == 1 && (*in).on[0].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[0].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[0].var].var) - (int*)&(*out))] = 0;
                ((*out).on[0].var = 255);
                cpy[((int*)&((*out).on[0].var) - (int*)&(*out))] = 0;
                ((*out).clear[0].var = 0);
                cpy[((int*)&((*out).clear[0].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 0);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 11;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[1].var == 1 && (*in).on[1].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[1].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[1].var].var) - (int*)&(*out))] = 0;
                ((*out).on[1].var = 255);
                cpy[((int*)&((*out).on[1].var) - (int*)&(*out))] = 0;
                ((*out).clear[1].var = 0);
                cpy[((int*)&((*out).clear[1].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 1);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 12;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[2].var == 1 && (*in).on[2].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[2].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[2].var].var) - (int*)&(*out))] = 0;
                ((*out).on[2].var = 255);
                cpy[((int*)&((*out).on[2].var) - (int*)&(*out))] = 0;
                ((*out).clear[2].var = 0);
                cpy[((int*)&((*out).clear[2].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 2);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 13;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[3].var == 1 && (*in).on[3].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[3].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[3].var].var) - (int*)&(*out))] = 0;
                ((*out).on[3].var = 255);
                cpy[((int*)&((*out).on[3].var) - (int*)&(*out))] = 0;
                ((*out).clear[3].var = 0);
                cpy[((int*)&((*out).clear[3].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 3);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 14;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[4].var == 1 && (*in).on[4].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[4].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[4].var].var) - (int*)&(*out))] = 0;
                ((*out).on[4].var = 255);
                cpy[((int*)&((*out).on[4].var) - (int*)&(*out))] = 0;
                ((*out).clear[4].var = 0);
                cpy[((int*)&((*out).clear[4].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 4);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 15;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[5].var == 1 && (*in).on[5].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[5].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[5].var].var) - (int*)&(*out))] = 0;
                ((*out).on[5].var = 255);
                cpy[((int*)&((*out).on[5].var) - (int*)&(*out))] = 0;
                ((*out).clear[5].var = 0);
                cpy[((int*)&((*out).clear[5].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 5);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 16;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[6].var == 1 && (*in).on[6].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[6].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[6].var].var) - (int*)&(*out))] = 0;
                ((*out).on[6].var = 255);
                cpy[((int*)&((*out).on[6].var) - (int*)&(*out))] = 0;
                ((*out).clear[6].var = 0);
                cpy[((int*)&((*out).clear[6].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 6);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 17;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[7].var == 1 && (*in).on[7].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[7].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[7].var].var) - (int*)&(*out))] = 0;
                ((*out).on[7].var = 255);
                cpy[((int*)&((*out).on[7].var) - (int*)&(*out))] = 0;
                ((*out).clear[7].var = 0);
                cpy[((int*)&((*out).clear[7].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 7);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 18;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[8].var == 1 && (*in).on[8].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[8].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[8].var].var) - (int*)&(*out))] = 0;
                ((*out).on[8].var = 255);
                cpy[((int*)&((*out).on[8].var) - (int*)&(*out))] = 0;
                ((*out).clear[8].var = 0);
                cpy[((int*)&((*out).clear[8].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 8);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 19;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).clear[9].var == 1 && (*in).on[9].var != 254) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 1;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).on[9].var].var = 1);
                cpy[((int*)&((*out).clear[(*out).on[9].var].var) - (int*)&(*out))] = 0;
                ((*out).on[9].var = 255);
                cpy[((int*)&((*out).on[9].var) - (int*)&(*out))] = 0;
                ((*out).clear[9].var = 0);
                cpy[((int*)&((*out).clear[9].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 9);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 20;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Hand.state.var == 1) ) )
        {
            
            // read:         0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[0].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[0].var = 0);
                cpy[((int*)&((*out).clear[0].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 0);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 21;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[1].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[1].var = 0);
                cpy[((int*)&((*out).clear[1].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 22;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[2].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[2].var = 0);
                cpy[((int*)&((*out).clear[2].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 2);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 23;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[3].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[3].var = 0);
                cpy[((int*)&((*out).clear[3].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 3);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 24;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[4].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[4].var = 0);
                cpy[((int*)&((*out).clear[4].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 4);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 25;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[5].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[5].var = 0);
                cpy[((int*)&((*out).clear[5].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 5);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 26;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[6].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[6].var = 0);
                cpy[((int*)&((*out).clear[6].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 6);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 27;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[7].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[7].var = 0);
                cpy[((int*)&((*out).clear[7].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 7);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 28;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[8].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[8].var = 0);
                cpy[((int*)&((*out).clear[8].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 8);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 29;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ((*in).clear[9].var == 1) ) )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[9].var = 0);
                cpy[((int*)&((*out).clear[9].var) - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 9);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 30;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if ( true )
            {
                *out = *in;
                int cpy[22] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Hand.state.var = 0;
                cpy[((int*)&(*out).Hand.state.var - (int*)&(*out))] = 0;
                ((*out).clear[(*out).holding.var].var = 1);
                cpy[((int*)&((*out).clear[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).on[(*out).holding.var].var = 254);
                cpy[((int*)&((*out).on[(*out).holding.var].var) - (int*)&(*out))] = 0;
                ((*out).holding.var = 253);
                cpy[((int*)&((*out).holding.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 31;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
    }
    if (  ( system_in_deadlock ) )
    {
    }
    return states_emitted;
}

extern "C" int get_state_variable_count() 
{
    return 22;
}

extern "C" const char* get_state_variable_name(int var)
{
    switch (var)
    {
        case 0:
            return "on[0]";
        case 1:
            return "on[1]";
        case 2:
            return "on[2]";
        case 3:
            return "on[3]";
        case 4:
            return "on[4]";
        case 5:
            return "on[5]";
        case 6:
            return "on[6]";
        case 7:
            return "on[7]";
        case 8:
            return "on[8]";
        case 9:
            return "on[9]";
        case 10:
            return "clear[0]";
        case 11:
            return "clear[1]";
        case 12:
            return "clear[2]";
        case 13:
            return "clear[3]";
        case 14:
            return "clear[4]";
        case 15:
            return "clear[5]";
        case 16:
            return "clear[6]";
        case 17:
            return "clear[7]";
        case 18:
            return "clear[8]";
        case 19:
            return "clear[9]";
        case 20:
            return "holding";
        case 21:
            return "Hand";
        default:
            return NULL;
    }
}

extern "C" int get_state_variable_type(int var)
{
    switch (var)
    {
        case 0:
            return 0;
        case 1:
            return 0;
        case 2:
            return 0;
        case 3:
            return 0;
        case 4:
            return 0;
        case 5:
            return 0;
        case 6:
            return 0;
        case 7:
            return 0;
        case 8:
            return 0;
        case 9:
            return 0;
        case 10:
            return 0;
        case 11:
            return 0;
        case 12:
            return 0;
        case 13:
            return 0;
        case 14:
            return 0;
        case 15:
            return 0;
        case 16:
            return 0;
        case 17:
            return 0;
        case 18:
            return 0;
        case 19:
            return 0;
        case 20:
            return 0;
        case 21:
            return 1;
        default:
            return -1;
    }
}

extern "C" int get_state_variable_type_count() 
{
    return 2;
}

extern "C" const char* get_state_variable_type_name(int type) 
{
    switch (type)
    {
        case 1:
            return "Hand";
        case 0:
            return "byte";
        default:
            return NULL;
    }
}

extern "C" int get_state_variable_type_value_count(int type)
{
    switch (type)
    {
        case 1: // Hand
            return 3;
        case 0: // byte
            return 0;
        default:
            return -1;
    }
}

extern "C" const char* get_state_variable_type_value(int type, int value) 
{
    switch (type)
    {
        case 1:
        {
            switch (value)
            {
                case 0:
                    return "emptyhand";
                case 1:
                    return "fullhand";
                case 2:
                    return "done";
            }
        }
    }
    return NULL;
}

int transition_dependency[][3][22] = 
{
    // { ... read ...}, { ... may-write ...}, { ... must-write ...}
    {{1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}},
    {{1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1},{1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},{0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1},{0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1},{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1},{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1}},
    {{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1}},
    {{1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},{0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1},{0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},{0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1}},
    {{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1},{0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},{0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1},{0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1},{0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}}
}
;

int actions_read[][22] = 
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}
}
;

extern "C" int get_transition_count() 
{
    return 32;
}

extern "C" const int* get_transition_read_dependencies(int t) 
{
    if (t>=0 && t < 32) return transition_dependency[t][0];
    return NULL;
}

extern "C" const int* get_transition_actions_read_dependencies(int t) 
{
    if (t>=0 && t < 32) return actions_read[t];
    return NULL;
}

extern "C" const int* get_transition_may_write_dependencies(int t) 
{
    if (t>=0 && t < 32) return transition_dependency[t][1];
    return NULL;
}

extern "C" const int* get_transition_write_dependencies(int t) 
{
    return get_transition_may_write_dependencies(t);
}

extern "C" const int* get_transition_must_write_dependencies(int t) 
{
    if (t>=0 && t < 32) return transition_dependency[t][2];
    return NULL;
}

extern "C" int get_active( state_struct_t *in, int t ) 
{
    switch(t)
    {
        case 0: return (((*in).Hand.state.var == 0));
        case 1: return (((*in).Hand.state.var == 0));
        case 2: return (((*in).Hand.state.var == 0));
        case 3: return (((*in).Hand.state.var == 0));
        case 4: return (((*in).Hand.state.var == 0));
        case 5: return (((*in).Hand.state.var == 0));
        case 6: return (((*in).Hand.state.var == 0));
        case 7: return (((*in).Hand.state.var == 0));
        case 8: return (((*in).Hand.state.var == 0));
        case 9: return (((*in).Hand.state.var == 0));
        case 10: return (((*in).Hand.state.var == 0));
        case 11: return (((*in).Hand.state.var == 0));
        case 12: return (((*in).Hand.state.var == 0));
        case 13: return (((*in).Hand.state.var == 0));
        case 14: return (((*in).Hand.state.var == 0));
        case 15: return (((*in).Hand.state.var == 0));
        case 16: return (((*in).Hand.state.var == 0));
        case 17: return (((*in).Hand.state.var == 0));
        case 18: return (((*in).Hand.state.var == 0));
        case 19: return (((*in).Hand.state.var == 0));
        case 20: return (((*in).Hand.state.var == 0));
        case 21: return (((*in).Hand.state.var == 1));
        case 22: return (((*in).Hand.state.var == 1));
        case 23: return (((*in).Hand.state.var == 1));
        case 24: return (((*in).Hand.state.var == 1));
        case 25: return (((*in).Hand.state.var == 1));
        case 26: return (((*in).Hand.state.var == 1));
        case 27: return (((*in).Hand.state.var == 1));
        case 28: return (((*in).Hand.state.var == 1));
        case 29: return (((*in).Hand.state.var == 1));
        case 30: return (((*in).Hand.state.var == 1));
        case 31: return (((*in).Hand.state.var == 1));
    }
    return false;
}

extern "C" void get_group_pid_lid( int t, int* pid0, int* lid0, int* pid1, int* lid1 ) 
{
    switch(t)
    {
        case 0: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 1: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 2: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 3: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 4: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 5: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 6: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 7: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 8: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 9: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 10: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 11: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 12: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 13: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 14: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 15: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 16: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 17: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 18: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 19: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 20: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 21: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 22: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 23: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 24: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 25: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 26: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 27: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 28: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 29: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 30: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 31: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
    }
    *pid0 = *lid0 = -1;
    *pid1 = *lid0 = -1;
    return;
}

static int wrapped_div(int denom, jmp_buf* jbuf)
{
    if(denom == 0) longjmp(*jbuf, 1);
    return denom;
}

static int wrapped_index(int index, int size, jmp_buf* jbuf)
{
    if(index < 0 || index >= size) longjmp(*jbuf, 1);
    return index;
}

extern "C" int get_guard(void* model, int g, state_struct_t* src) 
{
    (void)model;
    jmp_buf jbuf;
    if(!setjmp(jbuf))
    {
        switch(g)
        {
            case 0: return (((*src).Hand.state.var == 0));
            case 1: return (((*src).on[wrapped_index(3, 10, &jbuf)].var == 2));
            case 2: return (((*src).on[wrapped_index(2, 10, &jbuf)].var == 5));
            case 3: return (((*src).on[wrapped_index(5, 10, &jbuf)].var == 9));
            case 4: return (((*src).on[wrapped_index(9, 10, &jbuf)].var == 4));
            case 5: return (((*src).on[wrapped_index(4, 10, &jbuf)].var == 7));
            case 6: return (((*src).on[wrapped_index(7, 10, &jbuf)].var == 1));
            case 7: return (((*src).on[wrapped_index(1, 10, &jbuf)].var == 0));
            case 8: return (((*src).on[wrapped_index(0, 10, &jbuf)].var == 6));
            case 9: return (((*src).on[wrapped_index(6, 10, &jbuf)].var == 8));
            case 10: return (((*src).clear[wrapped_index(0, 10, &jbuf)].var == 1));
            case 11: return (((*src).on[wrapped_index(0, 10, &jbuf)].var == 254));
            case 12: return (((*src).clear[wrapped_index(1, 10, &jbuf)].var == 1));
            case 13: return (((*src).on[wrapped_index(1, 10, &jbuf)].var == 254));
            case 14: return (((*src).clear[wrapped_index(2, 10, &jbuf)].var == 1));
            case 15: return (((*src).on[wrapped_index(2, 10, &jbuf)].var == 254));
            case 16: return (((*src).clear[wrapped_index(3, 10, &jbuf)].var == 1));
            case 17: return (((*src).on[wrapped_index(3, 10, &jbuf)].var == 254));
            case 18: return (((*src).clear[wrapped_index(4, 10, &jbuf)].var == 1));
            case 19: return (((*src).on[wrapped_index(4, 10, &jbuf)].var == 254));
            case 20: return (((*src).clear[wrapped_index(5, 10, &jbuf)].var == 1));
            case 21: return (((*src).on[wrapped_index(5, 10, &jbuf)].var == 254));
            case 22: return (((*src).clear[wrapped_index(6, 10, &jbuf)].var == 1));
            case 23: return (((*src).on[wrapped_index(6, 10, &jbuf)].var == 254));
            case 24: return (((*src).clear[wrapped_index(7, 10, &jbuf)].var == 1));
            case 25: return (((*src).on[wrapped_index(7, 10, &jbuf)].var == 254));
            case 26: return (((*src).clear[wrapped_index(8, 10, &jbuf)].var == 1));
            case 27: return (((*src).on[wrapped_index(8, 10, &jbuf)].var == 254));
            case 28: return (((*src).clear[wrapped_index(9, 10, &jbuf)].var == 1));
            case 29: return (((*src).on[wrapped_index(9, 10, &jbuf)].var == 254));
            case 30: return (((*src).on[wrapped_index(0, 10, &jbuf)].var != 254));
            case 31: return (((*src).on[wrapped_index(1, 10, &jbuf)].var != 254));
            case 32: return (((*src).on[wrapped_index(2, 10, &jbuf)].var != 254));
            case 33: return (((*src).on[wrapped_index(3, 10, &jbuf)].var != 254));
            case 34: return (((*src).on[wrapped_index(4, 10, &jbuf)].var != 254));
            case 35: return (((*src).on[wrapped_index(5, 10, &jbuf)].var != 254));
            case 36: return (((*src).on[wrapped_index(6, 10, &jbuf)].var != 254));
            case 37: return (((*src).on[wrapped_index(7, 10, &jbuf)].var != 254));
            case 38: return (((*src).on[wrapped_index(8, 10, &jbuf)].var != 254));
            case 39: return (((*src).on[wrapped_index(9, 10, &jbuf)].var != 254));
            case 40: return (((*src).Hand.state.var == 1));
        }
    }
    else return 2;
    return false;
}

extern "C" void get_guard_all(void* model, state_struct_t* src, int* guard) 
{
    guard[0] = get_guard(model, 0, src);
    guard[1] = get_guard(model, 1, src);
    guard[2] = get_guard(model, 2, src);
    guard[3] = get_guard(model, 3, src);
    guard[4] = get_guard(model, 4, src);
    guard[5] = get_guard(model, 5, src);
    guard[6] = get_guard(model, 6, src);
    guard[7] = get_guard(model, 7, src);
    guard[8] = get_guard(model, 8, src);
    guard[9] = get_guard(model, 9, src);
    guard[10] = get_guard(model, 10, src);
    guard[11] = get_guard(model, 11, src);
    guard[12] = get_guard(model, 12, src);
    guard[13] = get_guard(model, 13, src);
    guard[14] = get_guard(model, 14, src);
    guard[15] = get_guard(model, 15, src);
    guard[16] = get_guard(model, 16, src);
    guard[17] = get_guard(model, 17, src);
    guard[18] = get_guard(model, 18, src);
    guard[19] = get_guard(model, 19, src);
    guard[20] = get_guard(model, 20, src);
    guard[21] = get_guard(model, 21, src);
    guard[22] = get_guard(model, 22, src);
    guard[23] = get_guard(model, 23, src);
    guard[24] = get_guard(model, 24, src);
    guard[25] = get_guard(model, 25, src);
    guard[26] = get_guard(model, 26, src);
    guard[27] = get_guard(model, 27, src);
    guard[28] = get_guard(model, 28, src);
    guard[29] = get_guard(model, 29, src);
    guard[30] = get_guard(model, 30, src);
    guard[31] = get_guard(model, 31, src);
    guard[32] = get_guard(model, 32, src);
    guard[33] = get_guard(model, 33, src);
    guard[34] = get_guard(model, 34, src);
    guard[35] = get_guard(model, 35, src);
    guard[36] = get_guard(model, 36, src);
    guard[37] = get_guard(model, 37, src);
    guard[38] = get_guard(model, 38, src);
    guard[39] = get_guard(model, 39, src);
    guard[40] = get_guard(model, 40, src);
}

extern "C" const int get_guard_count() 
{
    return 41;
}

int* guards_per_transition[32] = 
{
    ((int[]){10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}), // 0
    ((int[]){3, 0, 10, 11}), // 1
    ((int[]){3, 0, 12, 13}), // 2
    ((int[]){3, 0, 14, 15}), // 3
    ((int[]){3, 0, 16, 17}), // 4
    ((int[]){3, 0, 18, 19}), // 5
    ((int[]){3, 0, 20, 21}), // 6
    ((int[]){3, 0, 22, 23}), // 7
    ((int[]){3, 0, 24, 25}), // 8
    ((int[]){3, 0, 26, 27}), // 9
    ((int[]){3, 0, 28, 29}), // 10
    ((int[]){3, 0, 10, 30}), // 11
    ((int[]){3, 0, 12, 31}), // 12
    ((int[]){3, 0, 14, 32}), // 13
    ((int[]){3, 0, 16, 33}), // 14
    ((int[]){3, 0, 18, 34}), // 15
    ((int[]){3, 0, 20, 35}), // 16
    ((int[]){3, 0, 22, 36}), // 17
    ((int[]){3, 0, 24, 37}), // 18
    ((int[]){3, 0, 26, 38}), // 19
    ((int[]){3, 0, 28, 39}), // 20
    ((int[]){2, 40, 10}), // 21
    ((int[]){2, 40, 12}), // 22
    ((int[]){2, 40, 14}), // 23
    ((int[]){2, 40, 16}), // 24
    ((int[]){2, 40, 18}), // 25
    ((int[]){2, 40, 20}), // 26
    ((int[]){2, 40, 22}), // 27
    ((int[]){2, 40, 24}), // 28
    ((int[]){2, 40, 26}), // 29
    ((int[]){2, 40, 28}), // 30
    ((int[]){1, 40}), // 31
}
;

extern "C" const int* get_guards(int t) 
{
    if (t>=0 && t < 32) return guards_per_transition[t];
    return NULL;
}

extern "C" const int** get_all_guards() 
{
    return (const int**)&guards_per_transition;
}

int guard[][22] = 
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}
}
;

extern "C" const int* get_guard_matrix(int g) 
{
    if (g>=0 && g < 41) return guard[g];
    return NULL;
}

int guardmaybecoenabled[41][41] = 
{
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_may_be_coenabled_matrix(int g) 
{
    if (g>=0 && g < 41) return guardmaybecoenabled[g];
    return NULL;
}

int guard_nes[41][32] = 
{
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
}
;

extern "C" const int* get_guard_nes_matrix(int g) 
{
    if (g>=0 && g < 41) return guard_nes[g];
    return NULL;
}

int guard_nds[41][32] = 
{
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_nds_matrix(int g) 
{
    if (g>=0 && g < 41) return guard_nds[g];
    return NULL;
}

int dna[32][32] = 
{
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_dna_matrix(int t) 
{
    if (t >= 0 && t < 32) return dna[t];
    return NULL;
}

