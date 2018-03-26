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
    struct
    {
        ushort_int_t state;
        byte_t time;
    }
    __attribute__((__packed__)) Timer;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup0;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup1;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup2;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup3;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup4;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup5;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup6;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup7;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup8;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) lup9;
}
__attribute__((__packed__));
int state_size = sizeof(state_struct_t);

state_struct_t initial_state = { 0,0,0,1,1,1,1,1,1,1,1,1 };

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
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 0;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l1: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 2;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l2: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 1;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l3: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 1;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l4: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 2;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l5: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 3;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l6: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 4;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l7: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 5;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l8: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 5;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l9: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 0;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l10: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 2;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l11: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup0.state.var = 1;
        cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l12: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 3;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l13: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 1;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l14: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 0;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l15: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 2;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l16: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 2;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l17: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 0;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l18: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 4;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l19: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 5;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l20: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 5;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l21: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 1;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l22: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 0;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l23: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup1.state.var = 2;
        cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l24: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 3;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l25: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 1;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l26: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 0;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l27: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 2;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l28: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 2;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l29: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 0;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l30: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 4;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l31: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 5;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l32: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 5;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l33: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 1;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l34: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 0;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l35: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup2.state.var = 2;
        cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l36: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 3;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l37: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 1;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l38: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 0;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l39: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 2;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l40: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 2;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l41: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 0;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l42: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 4;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l43: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 5;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l44: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 5;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l45: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 1;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l46: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 0;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l47: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup3.state.var = 2;
        cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l48: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 3;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l49: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 1;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l50: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 0;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l51: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 2;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l52: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 2;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l53: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 0;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l54: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 4;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l55: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 5;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l56: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 5;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l57: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 1;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l58: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 0;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l59: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup4.state.var = 2;
        cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l60: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 3;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l61: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 1;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l62: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 0;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l63: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 2;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l64: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 2;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l65: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 0;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l66: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 4;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l67: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 5;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l68: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 5;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l69: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 1;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l70: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 0;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l71: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup5.state.var = 2;
        cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l72: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 3;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l73: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 1;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l74: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 0;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l75: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 2;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l76: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 2;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l77: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 0;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l78: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 4;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l79: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 5;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l80: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 5;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l81: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 1;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l82: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 0;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l83: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup6.state.var = 2;
        cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l84: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 3;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l85: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 1;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l86: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 0;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l87: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 2;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l88: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 2;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l89: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 0;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l90: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 4;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l91: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 5;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l92: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 5;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l93: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 1;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l94: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 0;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l95: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup7.state.var = 2;
        cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l96: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 3;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l97: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 1;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l98: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 0;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l99: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 2;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l100: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 2;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l101: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 0;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l102: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 4;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l103: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 5;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l104: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 5;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l105: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 1;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l106: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 0;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l107: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup8.state.var = 2;
        cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = (*out).Timer.time.var + 1);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l108: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 3;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l109: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 1;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l110: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 0;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l111: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 2;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l112: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 2;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l113: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 0;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l114: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 4;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l115: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 5;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l116: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 5;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l117: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 1;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l118: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 0;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l119: {
        *out = *in;
        int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).lup9.state.var = 2;
        cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
        (*out).Timer.state.var = 0;
        cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
        ((*out).Timer.time.var = 0);
        cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
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
        case 32: goto l32;
        case 33: goto l33;
        case 34: goto l34;
        case 35: goto l35;
        case 36: goto l36;
        case 37: goto l37;
        case 38: goto l38;
        case 39: goto l39;
        case 40: goto l40;
        case 41: goto l41;
        case 42: goto l42;
        case 43: goto l43;
        case 44: goto l44;
        case 45: goto l45;
        case 46: goto l46;
        case 47: goto l47;
        case 48: goto l48;
        case 49: goto l49;
        case 50: goto l50;
        case 51: goto l51;
        case 52: goto l52;
        case 53: goto l53;
        case 54: goto l54;
        case 55: goto l55;
        case 56: goto l56;
        case 57: goto l57;
        case 58: goto l58;
        case 59: goto l59;
        case 60: goto l60;
        case 61: goto l61;
        case 62: goto l62;
        case 63: goto l63;
        case 64: goto l64;
        case 65: goto l65;
        case 66: goto l66;
        case 67: goto l67;
        case 68: goto l68;
        case 69: goto l69;
        case 70: goto l70;
        case 71: goto l71;
        case 72: goto l72;
        case 73: goto l73;
        case 74: goto l74;
        case 75: goto l75;
        case 76: goto l76;
        case 77: goto l77;
        case 78: goto l78;
        case 79: goto l79;
        case 80: goto l80;
        case 81: goto l81;
        case 82: goto l82;
        case 83: goto l83;
        case 84: goto l84;
        case 85: goto l85;
        case 86: goto l86;
        case 87: goto l87;
        case 88: goto l88;
        case 89: goto l89;
        case 90: goto l90;
        case 91: goto l91;
        case 92: goto l92;
        case 93: goto l93;
        case 94: goto l94;
        case 95: goto l95;
        case 96: goto l96;
        case 97: goto l97;
        case 98: goto l98;
        case 99: goto l99;
        case 100: goto l100;
        case 101: goto l101;
        case 102: goto l102;
        case 103: goto l103;
        case 104: goto l104;
        case 105: goto l105;
        case 106: goto l106;
        case 107: goto l107;
        case 108: goto l108;
        case 109: goto l109;
        case 110: goto l110;
        case 111: goto l111;
        case 112: goto l112;
        case 113: goto l113;
        case 114: goto l114;
        case 115: goto l115;
        case 116: goto l116;
        case 117: goto l117;
        case 118: goto l118;
        case 119: goto l119;
        default: printf ("Wrong group! Using greybox/long call + -l (DiVinE LTL semantics)? This combo is not implemented."); exit (-1);
    }
    return 0;
}

extern "C" int get_successor( void* model, int t, const state_struct_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_struct_t *out, int *cpy), void *arg ) 
{
    int states_emitted = 0;
    goto switch_state;
    l0: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup0.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l1: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup0.state.var == 0) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l2: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup0.state.var == 0) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l3: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup0.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l4: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup0.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l5: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup0.state.var == 2) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l6: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup0.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l7: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup0.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l8: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup0.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l9: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup0.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l10: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup0.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l11: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup0.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l12: {
        
        // read:         1,1,0,1,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup1.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l13: {
        
        // read:         1,1,0,1,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup1.state.var == 1) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l14: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup1.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l15: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup1.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l16: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup1.state.var == 2) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l17: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup1.state.var == 2) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l18: {
        
        // read:         1,1,0,1,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup1.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l19: {
        
        // read:         1,1,0,1,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup1.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l20: {
        
        // read:         1,1,0,1,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup1.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l21: {
        
        // read:         1,1,0,1,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup1.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l22: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup1.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l23: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup1.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l24: {
        
        // read:         1,1,0,0,1,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup2.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l25: {
        
        // read:         1,1,0,0,1,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup2.state.var == 1) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l26: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup2.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l27: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup2.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l28: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup2.state.var == 2) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l29: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup2.state.var == 2) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l30: {
        
        // read:         1,1,0,0,1,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup2.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l31: {
        
        // read:         1,1,0,0,1,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup2.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l32: {
        
        // read:         1,1,0,0,1,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup2.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l33: {
        
        // read:         1,1,0,0,1,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup2.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l34: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup2.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l35: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup2.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l36: {
        
        // read:         1,1,0,0,0,1,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup3.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l37: {
        
        // read:         1,1,0,0,0,1,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup3.state.var == 1) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l38: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup3.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l39: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup3.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l40: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup3.state.var == 2) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l41: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup3.state.var == 2) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l42: {
        
        // read:         1,1,0,0,0,1,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup3.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l43: {
        
        // read:         1,1,0,0,0,1,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup3.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l44: {
        
        // read:         1,1,0,0,0,1,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup3.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l45: {
        
        // read:         1,1,0,0,0,1,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup3.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l46: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup3.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l47: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup3.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l48: {
        
        // read:         1,1,0,0,0,0,1,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup4.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l49: {
        
        // read:         1,1,0,0,0,0,1,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup4.state.var == 1) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l50: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup4.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l51: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup4.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l52: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup4.state.var == 2) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l53: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup4.state.var == 2) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l54: {
        
        // read:         1,1,0,0,0,0,1,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup4.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l55: {
        
        // read:         1,1,0,0,0,0,1,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup4.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l56: {
        
        // read:         1,1,0,0,0,0,1,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup4.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l57: {
        
        // read:         1,1,0,0,0,0,1,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup4.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l58: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup4.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l59: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup4.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l60: {
        
        // read:         1,1,0,0,0,0,0,1,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup5.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l61: {
        
        // read:         1,1,0,0,0,0,0,1,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup5.state.var == 1) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l62: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup5.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l63: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup5.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l64: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup5.state.var == 2) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l65: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup5.state.var == 2) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l66: {
        
        // read:         1,1,0,0,0,0,0,1,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup5.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l67: {
        
        // read:         1,1,0,0,0,0,0,1,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup5.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l68: {
        
        // read:         1,1,0,0,0,0,0,1,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup5.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l69: {
        
        // read:         1,1,0,0,0,0,0,1,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup5.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l70: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup5.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l71: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup5.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l72: {
        
        // read:         1,1,0,0,0,0,0,0,1,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup6.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l73: {
        
        // read:         1,1,0,0,0,0,0,0,1,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup6.state.var == 1) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l74: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup6.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l75: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup6.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l76: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup6.state.var == 2) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l77: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup6.state.var == 2) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l78: {
        
        // read:         1,1,0,0,0,0,0,0,1,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup6.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l79: {
        
        // read:         1,1,0,0,0,0,0,0,1,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup6.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l80: {
        
        // read:         1,1,0,0,0,0,0,0,1,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup6.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l81: {
        
        // read:         1,1,0,0,0,0,0,0,1,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup6.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l82: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup6.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l83: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup6.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l84: {
        
        // read:         1,1,0,0,0,0,0,0,0,1,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup7.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l85: {
        
        // read:         1,1,0,0,0,0,0,0,0,1,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup7.state.var == 1) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l86: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup7.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l87: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup7.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l88: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup7.state.var == 2) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l89: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup7.state.var == 2) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l90: {
        
        // read:         1,1,0,0,0,0,0,0,0,1,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup7.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l91: {
        
        // read:         1,1,0,0,0,0,0,0,0,1,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup7.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l92: {
        
        // read:         1,1,0,0,0,0,0,0,0,1,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup7.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l93: {
        
        // read:         1,1,0,0,0,0,0,0,0,1,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup7.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l94: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup7.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l95: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup7.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l96: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup8.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l97: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup8.state.var == 1) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l98: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup8.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l99: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup8.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l100: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup8.state.var == 2) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l101: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup8.state.var == 2) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l102: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup8.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l103: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup8.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l104: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup8.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l105: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup8.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l106: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup8.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l107: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup8.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l108: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup9.state.var == 0) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l109: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup9.state.var == 1) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l110: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup9.state.var == 1) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l111: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup9.state.var == 1) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l112: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup9.state.var == 2) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l113: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup9.state.var == 2) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l114: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup9.state.var == 3) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l115: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup9.state.var == 4) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l116: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup9.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l117: {
        
        // read:         1,1,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).lup9.state.var == 5) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l118: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup9.state.var == 5) )  &&  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l119: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1
        // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
        if (  ( ((*in).lup9.state.var == 5) )  &&  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
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
        case 32: goto l32;
        case 33: goto l33;
        case 34: goto l34;
        case 35: goto l35;
        case 36: goto l36;
        case 37: goto l37;
        case 38: goto l38;
        case 39: goto l39;
        case 40: goto l40;
        case 41: goto l41;
        case 42: goto l42;
        case 43: goto l43;
        case 44: goto l44;
        case 45: goto l45;
        case 46: goto l46;
        case 47: goto l47;
        case 48: goto l48;
        case 49: goto l49;
        case 50: goto l50;
        case 51: goto l51;
        case 52: goto l52;
        case 53: goto l53;
        case 54: goto l54;
        case 55: goto l55;
        case 56: goto l56;
        case 57: goto l57;
        case 58: goto l58;
        case 59: goto l59;
        case 60: goto l60;
        case 61: goto l61;
        case 62: goto l62;
        case 63: goto l63;
        case 64: goto l64;
        case 65: goto l65;
        case 66: goto l66;
        case 67: goto l67;
        case 68: goto l68;
        case 69: goto l69;
        case 70: goto l70;
        case 71: goto l71;
        case 72: goto l72;
        case 73: goto l73;
        case 74: goto l74;
        case 75: goto l75;
        case 76: goto l76;
        case 77: goto l77;
        case 78: goto l78;
        case 79: goto l79;
        case 80: goto l80;
        case 81: goto l81;
        case 82: goto l82;
        case 83: goto l83;
        case 84: goto l84;
        case 85: goto l85;
        case 86: goto l86;
        case 87: goto l87;
        case 88: goto l88;
        case 89: goto l89;
        case 90: goto l90;
        case 91: goto l91;
        case 92: goto l92;
        case 93: goto l93;
        case 94: goto l94;
        case 95: goto l95;
        case 96: goto l96;
        case 97: goto l97;
        case 98: goto l98;
        case 99: goto l99;
        case 100: goto l100;
        case 101: goto l101;
        case 102: goto l102;
        case 103: goto l103;
        case 104: goto l104;
        case 105: goto l105;
        case 106: goto l106;
        case 107: goto l107;
        case 108: goto l108;
        case 109: goto l109;
        case 110: goto l110;
        case 111: goto l111;
        case 112: goto l112;
        case 113: goto l113;
        case 114: goto l114;
        case 115: goto l115;
        case 116: goto l116;
        case 117: goto l117;
        case 118: goto l118;
        case 119: goto l119;
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
    int cpy[12] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, };
    if ( false )
    {
        ;
    }
    else
    {
        if (  ( ((*in).lup0.state.var == 0) ) )
        {
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 0;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 0;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 2;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 1;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 1;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 2;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup0.state.var == 1) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 1;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 3;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 2;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 4;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup0.state.var == 2) ) )
        {
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 3;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 5;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup0.state.var == 3) ) )
        {
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 4;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 6;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup0.state.var == 4) ) )
        {
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 5;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 7;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup0.state.var == 5) ) )
        {
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 5;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 8;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 0;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 9;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 2;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 10;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 0) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup0.state.var = 1;
                cpy[((int*)&(*out).lup0.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,1,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,1,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 11;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup1.state.var == 0) ) )
        {
            
            // read:         1,1,0,1,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 3;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 12;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup1.state.var == 1) ) )
        {
            
            // read:         1,1,0,1,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 1;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 13;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 0;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 14;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 2;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 15;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup1.state.var == 2) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 2;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 16;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 0;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 17;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup1.state.var == 3) ) )
        {
            
            // read:         1,1,0,1,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 4;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 18;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup1.state.var == 4) ) )
        {
            
            // read:         1,1,0,1,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 5;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 19;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup1.state.var == 5) ) )
        {
            
            // read:         1,1,0,1,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 5;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 20;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,1,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 1;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 21;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 0;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 22;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 1) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup1.state.var = 2;
                cpy[((int*)&(*out).lup1.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,1,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,1,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 23;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup2.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,1,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 3;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 24;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup2.state.var == 1) ) )
        {
            
            // read:         1,1,0,0,1,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 1;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 25;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 0;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 26;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 2;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 27;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup2.state.var == 2) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 2;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 28;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 0;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 29;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup2.state.var == 3) ) )
        {
            
            // read:         1,1,0,0,1,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 4;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 30;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup2.state.var == 4) ) )
        {
            
            // read:         1,1,0,0,1,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 5;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 31;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup2.state.var == 5) ) )
        {
            
            // read:         1,1,0,0,1,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 5;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 32;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,1,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 1;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 33;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 0;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 34;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 2) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup2.state.var = 2;
                cpy[((int*)&(*out).lup2.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,1,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,1,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 35;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup3.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,0,1,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 3;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 36;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup3.state.var == 1) ) )
        {
            
            // read:         1,1,0,0,0,1,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 1;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 37;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 0;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 38;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 2;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 39;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup3.state.var == 2) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 2;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 40;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 0;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 41;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup3.state.var == 3) ) )
        {
            
            // read:         1,1,0,0,0,1,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 4;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 42;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup3.state.var == 4) ) )
        {
            
            // read:         1,1,0,0,0,1,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 5;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 43;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup3.state.var == 5) ) )
        {
            
            // read:         1,1,0,0,0,1,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 5;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 44;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,1,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 1;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 45;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 0;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 46;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 3) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup3.state.var = 2;
                cpy[((int*)&(*out).lup3.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,1,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,1,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 47;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup4.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,0,0,1,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 3;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 48;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup4.state.var == 1) ) )
        {
            
            // read:         1,1,0,0,0,0,1,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 1;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 49;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 0;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 50;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 2;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 51;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup4.state.var == 2) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 2;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 52;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 0;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 53;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup4.state.var == 3) ) )
        {
            
            // read:         1,1,0,0,0,0,1,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 4;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 54;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup4.state.var == 4) ) )
        {
            
            // read:         1,1,0,0,0,0,1,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 5;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 55;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup4.state.var == 5) ) )
        {
            
            // read:         1,1,0,0,0,0,1,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 5;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 56;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,0,1,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 1;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 57;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 0;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 58;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 4) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup4.state.var = 2;
                cpy[((int*)&(*out).lup4.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,1,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 59;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup5.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,0,0,0,1,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 3;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 60;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup5.state.var == 1) ) )
        {
            
            // read:         1,1,0,0,0,0,0,1,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 1;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 61;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 0;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 62;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 2;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 63;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup5.state.var == 2) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 2;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 64;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 0;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 65;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup5.state.var == 3) ) )
        {
            
            // read:         1,1,0,0,0,0,0,1,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 4;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 66;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup5.state.var == 4) ) )
        {
            
            // read:         1,1,0,0,0,0,0,1,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 5;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 67;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup5.state.var == 5) ) )
        {
            
            // read:         1,1,0,0,0,0,0,1,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 5;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 68;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,0,0,1,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 1;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 69;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 0;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 70;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 5) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup5.state.var = 2;
                cpy[((int*)&(*out).lup5.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,1,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,1,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 71;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup6.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,1,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 3;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 72;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup6.state.var == 1) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,1,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 1;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 73;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 0;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 74;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 2;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 75;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup6.state.var == 2) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 2;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 76;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 0;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 77;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup6.state.var == 3) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,1,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 4;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 78;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup6.state.var == 4) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,1,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 5;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 79;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup6.state.var == 5) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,1,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 5;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 80;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,0,0,0,1,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 1;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 81;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 0;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 82;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 6) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup6.state.var = 2;
                cpy[((int*)&(*out).lup6.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,1,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 83;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup7.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,1,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 3;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 84;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup7.state.var == 1) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,1,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 1;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 85;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 0;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 86;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 2;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 87;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup7.state.var == 2) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 2;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 88;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 0;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 89;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup7.state.var == 3) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,1,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 4;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 90;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup7.state.var == 4) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,1,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 5;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 91;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup7.state.var == 5) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,1,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 5;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 92;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,0,0,0,0,1,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 1;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 93;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 0;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 94;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 7) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup7.state.var = 2;
                cpy[((int*)&(*out).lup7.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 95;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup8.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 3;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 96;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup8.state.var == 1) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 1;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 97;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 0;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 98;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 2;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 99;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup8.state.var == 2) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 2;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 100;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 0;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 101;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup8.state.var == 3) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 4;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 102;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup8.state.var == 4) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 5;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 103;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup8.state.var == 5) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 5;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 104;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 1;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 105;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 0;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 106;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 8) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup8.state.var = 2;
                cpy[((int*)&(*out).lup8.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = (*out).Timer.time.var + 1);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 107;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup9.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 3;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 108;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup9.state.var == 1) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 1;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 109;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 0;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 110;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 2;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 111;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup9.state.var == 2) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 2;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 112;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 0;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 113;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup9.state.var == 3) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 4;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 114;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup9.state.var == 4) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 5;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 115;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).lup9.state.var == 5) ) )
        {
            
            // read:         1,1,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 5;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 116;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 1;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 117;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
            if (  ( ( ! ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0)) )) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 0;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 118;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1
            // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
            if (  ( ((((*in).lup0.state.var == 2) | ((*in).lup1.state.var == 0) | ((*in).lup2.state.var == 0) | ((*in).lup3.state.var == 0) | ((*in).lup4.state.var == 0) | ((*in).lup5.state.var == 0) | ((*in).lup6.state.var == 0) | ((*in).lup7.state.var == 0) | ((*in).lup8.state.var == 0) | ((*in).lup9.state.var == 0))) )  &&  ( ((*in).Timer.state.var == 0) )  &&  ( ((*in).Timer.time.var == 9) ) )
            {
                *out = *in;
                int cpy[12] = { 1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).lup9.state.var = 2;
                cpy[((int*)&(*out).lup9.state.var - (int*)&(*out))] = 0;
                (*out).Timer.state.var = 0;
                cpy[((int*)&(*out).Timer.state.var - (int*)&(*out))] = 0;
                ((*out).Timer.time.var = 0);
                cpy[((int*)&((*out).Timer.time.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,1,1,1,1,1,1,1,1,1,1
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,1
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 119;
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
    return 12;
}

extern "C" const char* get_state_variable_name(int var)
{
    switch (var)
    {
        case 0:
            return "Timer";
        case 1:
            return "Timer.time";
        case 2:
            return "lup0";
        case 3:
            return "lup1";
        case 4:
            return "lup2";
        case 5:
            return "lup3";
        case 6:
            return "lup4";
        case 7:
            return "lup5";
        case 8:
            return "lup6";
        case 9:
            return "lup7";
        case 10:
            return "lup8";
        case 11:
            return "lup9";
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
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 7;
        case 8:
            return 8;
        case 9:
            return 9;
        case 10:
            return 10;
        case 11:
            return 11;
        default:
            return -1;
    }
}

extern "C" int get_state_variable_type_count() 
{
    return 12;
}

extern "C" const char* get_state_variable_type_name(int type) 
{
    switch (type)
    {
        case 0:
            return "Timer";
        case 1:
            return "byte";
        case 2:
            return "lup0";
        case 3:
            return "lup1";
        case 4:
            return "lup2";
        case 5:
            return "lup3";
        case 6:
            return "lup4";
        case 7:
            return "lup5";
        case 8:
            return "lup6";
        case 9:
            return "lup7";
        case 10:
            return "lup8";
        case 11:
            return "lup9";
        default:
            return NULL;
    }
}

extern "C" int get_state_variable_type_value_count(int type)
{
    switch (type)
    {
        case 0: // Timer
            return 1;
        case 1: // byte
            return 0;
        case 2: // lup0
            return 6;
        case 3: // lup1
            return 6;
        case 4: // lup2
            return 6;
        case 5: // lup3
            return 6;
        case 6: // lup4
            return 6;
        case 7: // lup5
            return 6;
        case 8: // lup6
            return 6;
        case 9: // lup7
            return 6;
        case 10: // lup8
            return 6;
        case 11: // lup9
            return 6;
        default:
            return -1;
    }
}

extern "C" const char* get_state_variable_type_value(int type, int value) 
{
    switch (type)
    {
        case 0:
        {
            switch (value)
            {
                case 0:
                    return "ready";
            }
        }
        case 2:
        {
            switch (value)
            {
                case 0:
                    return "sleep";
                case 1:
                    return "wait";
                case 2:
                    return "load_data";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
        case 3:
        {
            switch (value)
            {
                case 0:
                    return "load_data";
                case 1:
                    return "sleep";
                case 2:
                    return "wait";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
        case 4:
        {
            switch (value)
            {
                case 0:
                    return "load_data";
                case 1:
                    return "sleep";
                case 2:
                    return "wait";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
        case 5:
        {
            switch (value)
            {
                case 0:
                    return "load_data";
                case 1:
                    return "sleep";
                case 2:
                    return "wait";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
        case 6:
        {
            switch (value)
            {
                case 0:
                    return "load_data";
                case 1:
                    return "sleep";
                case 2:
                    return "wait";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
        case 7:
        {
            switch (value)
            {
                case 0:
                    return "load_data";
                case 1:
                    return "sleep";
                case 2:
                    return "wait";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
        case 8:
        {
            switch (value)
            {
                case 0:
                    return "load_data";
                case 1:
                    return "sleep";
                case 2:
                    return "wait";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
        case 9:
        {
            switch (value)
            {
                case 0:
                    return "load_data";
                case 1:
                    return "sleep";
                case 2:
                    return "wait";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
        case 10:
        {
            switch (value)
            {
                case 0:
                    return "load_data";
                case 1:
                    return "sleep";
                case 2:
                    return "wait";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
        case 11:
        {
            switch (value)
            {
                case 0:
                    return "load_data";
                case 1:
                    return "sleep";
                case 2:
                    return "wait";
                case 3:
                    return "latency1";
                case 4:
                    return "latency2";
                case 5:
                    return "comp";
            }
        }
    }
    return NULL;
}

int transition_dependency[][3][12] = 
{
    // { ... read ...}, { ... may-write ...}, { ... must-write ...}
    {{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,0,0,0,0,0,0,0,0,0},{1,1,1,0,0,0,0,0,0,0,0,0}},
    {{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,1,0,0,0,0,0,0,0,0},{1,1,0,1,0,0,0,0,0,0,0,0}},
    {{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,1,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0}},
    {{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,1,0,0,0,0,0,0},{1,1,0,0,0,1,0,0,0,0,0,0}},
    {{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,1,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0}},
    {{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,1,0,0,0,0},{1,1,0,0,0,0,0,1,0,0,0,0}},
    {{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,1,0,0,0},{1,1,0,0,0,0,0,0,1,0,0,0}},
    {{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,1,0,0},{1,1,0,0,0,0,0,0,0,1,0,0}},
    {{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,1,0},{1,1,0,0,0,0,0,0,0,0,1,0}},
    {{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}},
    {{1,1,1,1,1,1,1,1,1,1,1,1},{1,1,0,0,0,0,0,0,0,0,0,1},{1,1,0,0,0,0,0,0,0,0,0,1}}
}
;

int actions_read[][12] = 
{
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,1,1,1,1,1,1,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,1,1,1,1,1,1,1,1,1,1},
    {0,0,1,1,1,1,1,1,1,1,1,1},
    {0,0,1,1,1,1,1,1,1,1,1,1},
    {0,0,1,1,1,1,1,1,1,1,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,1,1,1,1,1,1,1,1,1,1},
    {0,0,1,1,1,1,1,1,1,1,1,1}
}
;

extern "C" int get_transition_count() 
{
    return 120;
}

extern "C" const int* get_transition_read_dependencies(int t) 
{
    if (t>=0 && t < 120) return transition_dependency[t][0];
    return NULL;
}

extern "C" const int* get_transition_actions_read_dependencies(int t) 
{
    if (t>=0 && t < 120) return actions_read[t];
    return NULL;
}

extern "C" const int* get_transition_may_write_dependencies(int t) 
{
    if (t>=0 && t < 120) return transition_dependency[t][1];
    return NULL;
}

extern "C" const int* get_transition_write_dependencies(int t) 
{
    return get_transition_may_write_dependencies(t);
}

extern "C" const int* get_transition_must_write_dependencies(int t) 
{
    if (t>=0 && t < 120) return transition_dependency[t][2];
    return NULL;
}

extern "C" int get_active( state_struct_t *in, int t ) 
{
    switch(t)
    {
        case 0: return ((((*in).lup0.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 1: return ((((*in).lup0.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 2: return ((((*in).lup0.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 3: return ((((*in).lup0.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 4: return ((((*in).lup0.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 5: return ((((*in).lup0.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 6: return ((((*in).lup0.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 7: return ((((*in).lup0.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 8: return ((((*in).lup0.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 9: return ((((*in).lup0.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 10: return ((((*in).lup0.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 11: return ((((*in).lup0.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 12: return ((((*in).lup1.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 13: return ((((*in).lup1.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 14: return ((((*in).lup1.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 15: return ((((*in).lup1.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 16: return ((((*in).lup1.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 17: return ((((*in).lup1.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 18: return ((((*in).lup1.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 19: return ((((*in).lup1.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 20: return ((((*in).lup1.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 21: return ((((*in).lup1.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 22: return ((((*in).lup1.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 23: return ((((*in).lup1.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 24: return ((((*in).lup2.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 25: return ((((*in).lup2.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 26: return ((((*in).lup2.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 27: return ((((*in).lup2.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 28: return ((((*in).lup2.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 29: return ((((*in).lup2.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 30: return ((((*in).lup2.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 31: return ((((*in).lup2.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 32: return ((((*in).lup2.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 33: return ((((*in).lup2.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 34: return ((((*in).lup2.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 35: return ((((*in).lup2.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 36: return ((((*in).lup3.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 37: return ((((*in).lup3.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 38: return ((((*in).lup3.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 39: return ((((*in).lup3.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 40: return ((((*in).lup3.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 41: return ((((*in).lup3.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 42: return ((((*in).lup3.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 43: return ((((*in).lup3.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 44: return ((((*in).lup3.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 45: return ((((*in).lup3.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 46: return ((((*in).lup3.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 47: return ((((*in).lup3.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 48: return ((((*in).lup4.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 49: return ((((*in).lup4.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 50: return ((((*in).lup4.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 51: return ((((*in).lup4.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 52: return ((((*in).lup4.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 53: return ((((*in).lup4.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 54: return ((((*in).lup4.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 55: return ((((*in).lup4.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 56: return ((((*in).lup4.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 57: return ((((*in).lup4.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 58: return ((((*in).lup4.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 59: return ((((*in).lup4.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 60: return ((((*in).lup5.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 61: return ((((*in).lup5.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 62: return ((((*in).lup5.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 63: return ((((*in).lup5.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 64: return ((((*in).lup5.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 65: return ((((*in).lup5.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 66: return ((((*in).lup5.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 67: return ((((*in).lup5.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 68: return ((((*in).lup5.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 69: return ((((*in).lup5.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 70: return ((((*in).lup5.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 71: return ((((*in).lup5.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 72: return ((((*in).lup6.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 73: return ((((*in).lup6.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 74: return ((((*in).lup6.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 75: return ((((*in).lup6.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 76: return ((((*in).lup6.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 77: return ((((*in).lup6.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 78: return ((((*in).lup6.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 79: return ((((*in).lup6.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 80: return ((((*in).lup6.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 81: return ((((*in).lup6.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 82: return ((((*in).lup6.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 83: return ((((*in).lup6.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 84: return ((((*in).lup7.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 85: return ((((*in).lup7.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 86: return ((((*in).lup7.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 87: return ((((*in).lup7.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 88: return ((((*in).lup7.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 89: return ((((*in).lup7.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 90: return ((((*in).lup7.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 91: return ((((*in).lup7.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 92: return ((((*in).lup7.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 93: return ((((*in).lup7.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 94: return ((((*in).lup7.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 95: return ((((*in).lup7.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 96: return ((((*in).lup8.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 97: return ((((*in).lup8.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 98: return ((((*in).lup8.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 99: return ((((*in).lup8.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 100: return ((((*in).lup8.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 101: return ((((*in).lup8.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 102: return ((((*in).lup8.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 103: return ((((*in).lup8.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 104: return ((((*in).lup8.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 105: return ((((*in).lup8.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 106: return ((((*in).lup8.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 107: return ((((*in).lup8.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 108: return ((((*in).lup9.state.var == 0)) && (((*in).Timer.state.var == 0)));
        case 109: return ((((*in).lup9.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 110: return ((((*in).lup9.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 111: return ((((*in).lup9.state.var == 1)) && (((*in).Timer.state.var == 0)));
        case 112: return ((((*in).lup9.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 113: return ((((*in).lup9.state.var == 2)) && (((*in).Timer.state.var == 0)));
        case 114: return ((((*in).lup9.state.var == 3)) && (((*in).Timer.state.var == 0)));
        case 115: return ((((*in).lup9.state.var == 4)) && (((*in).Timer.state.var == 0)));
        case 116: return ((((*in).lup9.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 117: return ((((*in).lup9.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 118: return ((((*in).lup9.state.var == 5)) && (((*in).Timer.state.var == 0)));
        case 119: return ((((*in).lup9.state.var == 5)) && (((*in).Timer.state.var == 0)));
    }
    return false;
}

extern "C" void get_group_pid_lid( int t, int* pid0, int* lid0, int* pid1, int* lid1 ) 
{
    switch(t)
    {
        case 0: *pid0 = 1; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 1: *pid0 = 1; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 2: *pid0 = 1; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 3: *pid0 = 1; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 4: *pid0 = 1; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 5: *pid0 = 1; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 6: *pid0 = 1; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 7: *pid0 = 1; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 8: *pid0 = 1; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 9: *pid0 = 1; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 10: *pid0 = 1; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 11: *pid0 = 1; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 12: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 13: *pid0 = 2; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 14: *pid0 = 2; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 15: *pid0 = 2; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 16: *pid0 = 2; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 17: *pid0 = 2; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 18: *pid0 = 2; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 19: *pid0 = 2; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 20: *pid0 = 2; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 21: *pid0 = 2; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 22: *pid0 = 2; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 23: *pid0 = 2; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 24: *pid0 = 3; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 25: *pid0 = 3; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 26: *pid0 = 3; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 27: *pid0 = 3; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 28: *pid0 = 3; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 29: *pid0 = 3; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 30: *pid0 = 3; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 31: *pid0 = 3; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 32: *pid0 = 3; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 33: *pid0 = 3; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 34: *pid0 = 3; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 35: *pid0 = 3; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 36: *pid0 = 4; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 37: *pid0 = 4; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 38: *pid0 = 4; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 39: *pid0 = 4; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 40: *pid0 = 4; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 41: *pid0 = 4; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 42: *pid0 = 4; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 43: *pid0 = 4; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 44: *pid0 = 4; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 45: *pid0 = 4; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 46: *pid0 = 4; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 47: *pid0 = 4; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 48: *pid0 = 5; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 49: *pid0 = 5; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 50: *pid0 = 5; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 51: *pid0 = 5; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 52: *pid0 = 5; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 53: *pid0 = 5; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 54: *pid0 = 5; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 55: *pid0 = 5; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 56: *pid0 = 5; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 57: *pid0 = 5; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 58: *pid0 = 5; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 59: *pid0 = 5; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 60: *pid0 = 6; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 61: *pid0 = 6; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 62: *pid0 = 6; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 63: *pid0 = 6; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 64: *pid0 = 6; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 65: *pid0 = 6; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 66: *pid0 = 6; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 67: *pid0 = 6; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 68: *pid0 = 6; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 69: *pid0 = 6; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 70: *pid0 = 6; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 71: *pid0 = 6; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 72: *pid0 = 7; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 73: *pid0 = 7; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 74: *pid0 = 7; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 75: *pid0 = 7; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 76: *pid0 = 7; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 77: *pid0 = 7; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 78: *pid0 = 7; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 79: *pid0 = 7; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 80: *pid0 = 7; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 81: *pid0 = 7; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 82: *pid0 = 7; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 83: *pid0 = 7; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 84: *pid0 = 8; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 85: *pid0 = 8; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 86: *pid0 = 8; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 87: *pid0 = 8; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 88: *pid0 = 8; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 89: *pid0 = 8; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 90: *pid0 = 8; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 91: *pid0 = 8; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 92: *pid0 = 8; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 93: *pid0 = 8; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 94: *pid0 = 8; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 95: *pid0 = 8; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 96: *pid0 = 9; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 97: *pid0 = 9; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 98: *pid0 = 9; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 99: *pid0 = 9; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 100: *pid0 = 9; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 101: *pid0 = 9; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 102: *pid0 = 9; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 103: *pid0 = 9; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 104: *pid0 = 9; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 105: *pid0 = 9; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 106: *pid0 = 9; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 107: *pid0 = 9; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 108: *pid0 = 10; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 109: *pid0 = 10; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 110: *pid0 = 10; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 111: *pid0 = 10; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 112: *pid0 = 10; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 113: *pid0 = 10; *lid0=2; *pid1 = 0; *lid1 = 0; return;
        case 114: *pid0 = 10; *lid0=3; *pid1 = 0; *lid1 = 0; return;
        case 115: *pid0 = 10; *lid0=4; *pid1 = 0; *lid1 = 0; return;
        case 116: *pid0 = 10; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 117: *pid0 = 10; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 118: *pid0 = 10; *lid0=5; *pid1 = 0; *lid1 = 0; return;
        case 119: *pid0 = 10; *lid0=5; *pid1 = 0; *lid1 = 0; return;
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
            case 0: return (((*src).lup0.state.var == 0));
            case 1: return (((*src).Timer.state.var == 0));
            case 2: return (((*src).Timer.time.var == 0));
            case 3: return (( ! ((((*src).lup0.state.var == 2) | ((*src).lup1.state.var == 0) | ((*src).lup2.state.var == 0) | ((*src).lup3.state.var == 0) | ((*src).lup4.state.var == 0) | ((*src).lup5.state.var == 0) | ((*src).lup6.state.var == 0) | ((*src).lup7.state.var == 0) | ((*src).lup8.state.var == 0) | ((*src).lup9.state.var == 0)) )));
            case 4: return (((((*src).lup0.state.var == 2) | ((*src).lup1.state.var == 0) | ((*src).lup2.state.var == 0) | ((*src).lup3.state.var == 0) | ((*src).lup4.state.var == 0) | ((*src).lup5.state.var == 0) | ((*src).lup6.state.var == 0) | ((*src).lup7.state.var == 0) | ((*src).lup8.state.var == 0) | ((*src).lup9.state.var == 0))));
            case 5: return (((*src).lup0.state.var == 1));
            case 6: return (((*src).lup0.state.var == 2));
            case 7: return (((*src).lup0.state.var == 3));
            case 8: return (((*src).lup0.state.var == 4));
            case 9: return (((*src).lup0.state.var == 5));
            case 10: return (((*src).lup1.state.var == 0));
            case 11: return (((*src).Timer.time.var == 1));
            case 12: return (((*src).lup1.state.var == 1));
            case 13: return (((*src).lup1.state.var == 2));
            case 14: return (((*src).lup1.state.var == 3));
            case 15: return (((*src).lup1.state.var == 4));
            case 16: return (((*src).lup1.state.var == 5));
            case 17: return (((*src).lup2.state.var == 0));
            case 18: return (((*src).Timer.time.var == 2));
            case 19: return (((*src).lup2.state.var == 1));
            case 20: return (((*src).lup2.state.var == 2));
            case 21: return (((*src).lup2.state.var == 3));
            case 22: return (((*src).lup2.state.var == 4));
            case 23: return (((*src).lup2.state.var == 5));
            case 24: return (((*src).lup3.state.var == 0));
            case 25: return (((*src).Timer.time.var == 3));
            case 26: return (((*src).lup3.state.var == 1));
            case 27: return (((*src).lup3.state.var == 2));
            case 28: return (((*src).lup3.state.var == 3));
            case 29: return (((*src).lup3.state.var == 4));
            case 30: return (((*src).lup3.state.var == 5));
            case 31: return (((*src).lup4.state.var == 0));
            case 32: return (((*src).Timer.time.var == 4));
            case 33: return (((*src).lup4.state.var == 1));
            case 34: return (((*src).lup4.state.var == 2));
            case 35: return (((*src).lup4.state.var == 3));
            case 36: return (((*src).lup4.state.var == 4));
            case 37: return (((*src).lup4.state.var == 5));
            case 38: return (((*src).lup5.state.var == 0));
            case 39: return (((*src).Timer.time.var == 5));
            case 40: return (((*src).lup5.state.var == 1));
            case 41: return (((*src).lup5.state.var == 2));
            case 42: return (((*src).lup5.state.var == 3));
            case 43: return (((*src).lup5.state.var == 4));
            case 44: return (((*src).lup5.state.var == 5));
            case 45: return (((*src).lup6.state.var == 0));
            case 46: return (((*src).Timer.time.var == 6));
            case 47: return (((*src).lup6.state.var == 1));
            case 48: return (((*src).lup6.state.var == 2));
            case 49: return (((*src).lup6.state.var == 3));
            case 50: return (((*src).lup6.state.var == 4));
            case 51: return (((*src).lup6.state.var == 5));
            case 52: return (((*src).lup7.state.var == 0));
            case 53: return (((*src).Timer.time.var == 7));
            case 54: return (((*src).lup7.state.var == 1));
            case 55: return (((*src).lup7.state.var == 2));
            case 56: return (((*src).lup7.state.var == 3));
            case 57: return (((*src).lup7.state.var == 4));
            case 58: return (((*src).lup7.state.var == 5));
            case 59: return (((*src).lup8.state.var == 0));
            case 60: return (((*src).Timer.time.var == 8));
            case 61: return (((*src).lup8.state.var == 1));
            case 62: return (((*src).lup8.state.var == 2));
            case 63: return (((*src).lup8.state.var == 3));
            case 64: return (((*src).lup8.state.var == 4));
            case 65: return (((*src).lup8.state.var == 5));
            case 66: return (((*src).lup9.state.var == 0));
            case 67: return (((*src).Timer.time.var == 9));
            case 68: return (((*src).lup9.state.var == 1));
            case 69: return (((*src).lup9.state.var == 2));
            case 70: return (((*src).lup9.state.var == 3));
            case 71: return (((*src).lup9.state.var == 4));
            case 72: return (((*src).lup9.state.var == 5));
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
    guard[41] = get_guard(model, 41, src);
    guard[42] = get_guard(model, 42, src);
    guard[43] = get_guard(model, 43, src);
    guard[44] = get_guard(model, 44, src);
    guard[45] = get_guard(model, 45, src);
    guard[46] = get_guard(model, 46, src);
    guard[47] = get_guard(model, 47, src);
    guard[48] = get_guard(model, 48, src);
    guard[49] = get_guard(model, 49, src);
    guard[50] = get_guard(model, 50, src);
    guard[51] = get_guard(model, 51, src);
    guard[52] = get_guard(model, 52, src);
    guard[53] = get_guard(model, 53, src);
    guard[54] = get_guard(model, 54, src);
    guard[55] = get_guard(model, 55, src);
    guard[56] = get_guard(model, 56, src);
    guard[57] = get_guard(model, 57, src);
    guard[58] = get_guard(model, 58, src);
    guard[59] = get_guard(model, 59, src);
    guard[60] = get_guard(model, 60, src);
    guard[61] = get_guard(model, 61, src);
    guard[62] = get_guard(model, 62, src);
    guard[63] = get_guard(model, 63, src);
    guard[64] = get_guard(model, 64, src);
    guard[65] = get_guard(model, 65, src);
    guard[66] = get_guard(model, 66, src);
    guard[67] = get_guard(model, 67, src);
    guard[68] = get_guard(model, 68, src);
    guard[69] = get_guard(model, 69, src);
    guard[70] = get_guard(model, 70, src);
    guard[71] = get_guard(model, 71, src);
    guard[72] = get_guard(model, 72, src);
}

extern "C" const int get_guard_count() 
{
    return 73;
}

int* guards_per_transition[120] = 
{
    ((int[]){3, 0, 1, 2}), // 0
    ((int[]){4, 0, 3, 1, 2}), // 1
    ((int[]){4, 0, 4, 1, 2}), // 2
    ((int[]){4, 5, 4, 1, 2}), // 3
    ((int[]){4, 5, 3, 1, 2}), // 4
    ((int[]){3, 6, 1, 2}), // 5
    ((int[]){3, 7, 1, 2}), // 6
    ((int[]){3, 8, 1, 2}), // 7
    ((int[]){3, 9, 1, 2}), // 8
    ((int[]){3, 9, 1, 2}), // 9
    ((int[]){4, 9, 3, 1, 2}), // 10
    ((int[]){4, 9, 4, 1, 2}), // 11
    ((int[]){3, 10, 1, 11}), // 12
    ((int[]){3, 12, 1, 11}), // 13
    ((int[]){4, 12, 3, 1, 11}), // 14
    ((int[]){4, 12, 4, 1, 11}), // 15
    ((int[]){4, 13, 4, 1, 11}), // 16
    ((int[]){4, 13, 3, 1, 11}), // 17
    ((int[]){3, 14, 1, 11}), // 18
    ((int[]){3, 15, 1, 11}), // 19
    ((int[]){3, 16, 1, 11}), // 20
    ((int[]){3, 16, 1, 11}), // 21
    ((int[]){4, 16, 3, 1, 11}), // 22
    ((int[]){4, 16, 4, 1, 11}), // 23
    ((int[]){3, 17, 1, 18}), // 24
    ((int[]){3, 19, 1, 18}), // 25
    ((int[]){4, 19, 3, 1, 18}), // 26
    ((int[]){4, 19, 4, 1, 18}), // 27
    ((int[]){4, 20, 4, 1, 18}), // 28
    ((int[]){4, 20, 3, 1, 18}), // 29
    ((int[]){3, 21, 1, 18}), // 30
    ((int[]){3, 22, 1, 18}), // 31
    ((int[]){3, 23, 1, 18}), // 32
    ((int[]){3, 23, 1, 18}), // 33
    ((int[]){4, 23, 3, 1, 18}), // 34
    ((int[]){4, 23, 4, 1, 18}), // 35
    ((int[]){3, 24, 1, 25}), // 36
    ((int[]){3, 26, 1, 25}), // 37
    ((int[]){4, 26, 3, 1, 25}), // 38
    ((int[]){4, 26, 4, 1, 25}), // 39
    ((int[]){4, 27, 4, 1, 25}), // 40
    ((int[]){4, 27, 3, 1, 25}), // 41
    ((int[]){3, 28, 1, 25}), // 42
    ((int[]){3, 29, 1, 25}), // 43
    ((int[]){3, 30, 1, 25}), // 44
    ((int[]){3, 30, 1, 25}), // 45
    ((int[]){4, 30, 3, 1, 25}), // 46
    ((int[]){4, 30, 4, 1, 25}), // 47
    ((int[]){3, 31, 1, 32}), // 48
    ((int[]){3, 33, 1, 32}), // 49
    ((int[]){4, 33, 3, 1, 32}), // 50
    ((int[]){4, 33, 4, 1, 32}), // 51
    ((int[]){4, 34, 4, 1, 32}), // 52
    ((int[]){4, 34, 3, 1, 32}), // 53
    ((int[]){3, 35, 1, 32}), // 54
    ((int[]){3, 36, 1, 32}), // 55
    ((int[]){3, 37, 1, 32}), // 56
    ((int[]){3, 37, 1, 32}), // 57
    ((int[]){4, 37, 3, 1, 32}), // 58
    ((int[]){4, 37, 4, 1, 32}), // 59
    ((int[]){3, 38, 1, 39}), // 60
    ((int[]){3, 40, 1, 39}), // 61
    ((int[]){4, 40, 3, 1, 39}), // 62
    ((int[]){4, 40, 4, 1, 39}), // 63
    ((int[]){4, 41, 4, 1, 39}), // 64
    ((int[]){4, 41, 3, 1, 39}), // 65
    ((int[]){3, 42, 1, 39}), // 66
    ((int[]){3, 43, 1, 39}), // 67
    ((int[]){3, 44, 1, 39}), // 68
    ((int[]){3, 44, 1, 39}), // 69
    ((int[]){4, 44, 3, 1, 39}), // 70
    ((int[]){4, 44, 4, 1, 39}), // 71
    ((int[]){3, 45, 1, 46}), // 72
    ((int[]){3, 47, 1, 46}), // 73
    ((int[]){4, 47, 3, 1, 46}), // 74
    ((int[]){4, 47, 4, 1, 46}), // 75
    ((int[]){4, 48, 4, 1, 46}), // 76
    ((int[]){4, 48, 3, 1, 46}), // 77
    ((int[]){3, 49, 1, 46}), // 78
    ((int[]){3, 50, 1, 46}), // 79
    ((int[]){3, 51, 1, 46}), // 80
    ((int[]){3, 51, 1, 46}), // 81
    ((int[]){4, 51, 3, 1, 46}), // 82
    ((int[]){4, 51, 4, 1, 46}), // 83
    ((int[]){3, 52, 1, 53}), // 84
    ((int[]){3, 54, 1, 53}), // 85
    ((int[]){4, 54, 3, 1, 53}), // 86
    ((int[]){4, 54, 4, 1, 53}), // 87
    ((int[]){4, 55, 4, 1, 53}), // 88
    ((int[]){4, 55, 3, 1, 53}), // 89
    ((int[]){3, 56, 1, 53}), // 90
    ((int[]){3, 57, 1, 53}), // 91
    ((int[]){3, 58, 1, 53}), // 92
    ((int[]){3, 58, 1, 53}), // 93
    ((int[]){4, 58, 3, 1, 53}), // 94
    ((int[]){4, 58, 4, 1, 53}), // 95
    ((int[]){3, 59, 1, 60}), // 96
    ((int[]){3, 61, 1, 60}), // 97
    ((int[]){4, 61, 3, 1, 60}), // 98
    ((int[]){4, 61, 4, 1, 60}), // 99
    ((int[]){4, 62, 4, 1, 60}), // 100
    ((int[]){4, 62, 3, 1, 60}), // 101
    ((int[]){3, 63, 1, 60}), // 102
    ((int[]){3, 64, 1, 60}), // 103
    ((int[]){3, 65, 1, 60}), // 104
    ((int[]){3, 65, 1, 60}), // 105
    ((int[]){4, 65, 3, 1, 60}), // 106
    ((int[]){4, 65, 4, 1, 60}), // 107
    ((int[]){3, 66, 1, 67}), // 108
    ((int[]){3, 68, 1, 67}), // 109
    ((int[]){4, 68, 3, 1, 67}), // 110
    ((int[]){4, 68, 4, 1, 67}), // 111
    ((int[]){4, 69, 4, 1, 67}), // 112
    ((int[]){4, 69, 3, 1, 67}), // 113
    ((int[]){3, 70, 1, 67}), // 114
    ((int[]){3, 71, 1, 67}), // 115
    ((int[]){3, 72, 1, 67}), // 116
    ((int[]){3, 72, 1, 67}), // 117
    ((int[]){4, 72, 3, 1, 67}), // 118
    ((int[]){4, 72, 4, 1, 67}), // 119
}
;

extern "C" const int* get_guards(int t) 
{
    if (t>=0 && t < 120) return guards_per_transition[t];
    return NULL;
}

extern "C" const int** get_all_guards() 
{
    return (const int**)&guards_per_transition;
}

int guard[][12] = 
{
    {0,0,1,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,1,1,1,1,1,1,1,1,1,1},
    {0,0,1,1,1,1,1,1,1,1,1,1},
    {0,0,1,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,1,0},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,1},
    {0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,1}
}
;

extern "C" const int* get_guard_matrix(int g) 
{
    if (g>=0 && g < 73) return guard[g];
    return NULL;
}

int guardmaybecoenabled[73][73] = 
{
    {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1}
}
;

extern "C" const int* get_guard_may_be_coenabled_matrix(int g) 
{
    if (g>=0 && g < 73) return guardmaybecoenabled[g];
    return NULL;
}

int guard_nes[73][120] = 
{
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0}
}
;

extern "C" const int* get_guard_nes_matrix(int g) 
{
    if (g>=0 && g < 73) return guard_nes[g];
    return NULL;
}

int guard_nds[73][120] = 
{
    {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1}
}
;

extern "C" const int* get_guard_nds_matrix(int g) 
{
    if (g>=0 && g < 73) return guard_nds[g];
    return NULL;
}

int dna[120][120] = 
{
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1}
}
;

extern "C" const int* get_dna_matrix(int t) 
{
    if (t >= 0 && t < 120) return dna[t];
    return NULL;
}

