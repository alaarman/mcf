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
    sshort_int_t cage_safe;
    sshort_int_t actual_resistance;
    sshort_int_t voltage;
    sshort_int_t range;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) Measuring_0;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) Measuring_1;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) Algorithm;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) Device_state;
}
__attribute__((__packed__));
int state_size = sizeof(state_struct_t);

state_struct_t initial_state = { 0,0,0,0,3,3,7,3 };

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
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_0.state.var = 0;
        cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
        ((*out).actual_resistance.var = (*out).actual_resistance.var + 1);
        cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0
        // may-write:    0,1,0,0,1,0,0,0
        // must-write:   0,1,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l1: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_0.state.var = 2;
        cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
        ((*out).cage_safe.var = 0);
        cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
        ((*out).actual_resistance.var = (*out).actual_resistance.var - 1);
        cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0
        // may-write:    1,1,0,0,1,0,0,0
        // must-write:   1,1,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l2: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_0.state.var = 0;
        cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,0,0
        // must-write:   0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l3: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_0.state.var = 2;
        cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,0,0
        // must-write:   0,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l4: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_0.state.var = 0;
        cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
        ((*out).cage_safe.var = 1);
        cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
        ((*out).actual_resistance.var = (*out).actual_resistance.var - 1);
        cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0
        // may-write:    1,1,0,0,1,0,0,0
        // must-write:   1,1,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l5: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_0.state.var = 0;
        cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
        ((*out).cage_safe.var = 1);
        cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,1,0,0,0
        // must-write:   1,0,0,0,1,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l6: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_1.state.var = 0;
        cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
        ((*out).actual_resistance.var = (*out).actual_resistance.var + 1);
        cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0
        // may-write:    0,1,0,0,0,1,0,0
        // must-write:   0,1,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l7: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_1.state.var = 2;
        cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
        ((*out).cage_safe.var = 0);
        cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
        ((*out).actual_resistance.var = (*out).actual_resistance.var - 1);
        cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l8: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_1.state.var = 0;
        cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,0,0
        // must-write:   0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l9: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_1.state.var = 2;
        cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,0,0
        // must-write:   0,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l10: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_1.state.var = 0;
        cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
        ((*out).cage_safe.var = 1);
        cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
        ((*out).actual_resistance.var = (*out).actual_resistance.var - 1);
        cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,1,0,0
        // must-write:   1,1,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l11: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Measuring_1.state.var = 0;
        cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
        ((*out).cage_safe.var = 1);
        cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,1,0,0
        // must-write:   1,0,0,0,0,1,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l12: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 3;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        ((*out).actual_resistance.var = 0);
        cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,1,0,0,0,0,1,0
        // must-write:   0,1,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l13: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 2;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        ((*out).actual_resistance.var = 0);
        cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,1,0,0,0,0,1,0
        // must-write:   0,1,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l14: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 4;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        ((*out).actual_resistance.var = 0);
        cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,1,0,0,0,0,1,0
        // must-write:   0,1,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l15: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 9;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        (*out).Measuring_0.state.var = 1;
        cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,1,0
        // must-write:   0,0,0,0,1,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l16: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 9;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        (*out).Measuring_1.state.var = 1;
        cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,1,0
        // must-write:   0,0,0,0,0,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l17: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 1;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        ((*out).range.var = (*out).range.var - 1);
        cpy[((int*)&((*out).range.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,1,0,0,0,0
        // may-write:    0,0,0,1,0,0,1,0
        // must-write:   0,0,0,1,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l18: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 5;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0
        // must-write:   0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l19: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 8;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0
        // must-write:   0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l20: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 1;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        ((*out).range.var = (*out).range.var + 1);
        cpy[((int*)&((*out).range.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,1,0,0,0,0
        // may-write:    0,0,0,1,0,0,1,0
        // must-write:   0,0,0,1,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l21: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 6;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0
        // must-write:   0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l22: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 8;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0
        // must-write:   0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l23: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 8;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0
        // must-write:   0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l24: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 1;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        ((*out).range.var = 3);
        cpy[((int*)&((*out).range.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,1,0
        // must-write:   0,0,0,1,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l25: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 7;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0
        // must-write:   0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l26: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 0;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        (*out).Device_state.state.var = 3;
        cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l27: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Algorithm.state.var = 4;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        (*out).Device_state.state.var = 3;
        cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l28: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Device_state.state.var = 1;
        cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1
        // must-write:   0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l29: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Device_state.state.var = 2;
        cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1
        // must-write:   0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l30: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Device_state.state.var = 4;
        cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
        ((*out).cage_safe.var = 1);
        cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,0,1
        // must-write:   1,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l31: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Device_state.state.var = 2;
        cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1
        // must-write:   0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l32: {
        *out = *in;
        int cpy[8] = { 1,1,1,1,1,1,1,1,};
        (*out).Device_state.state.var = 0;
        cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
        (*out).Algorithm.state.var = 10;
        cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,1,1
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
        default: printf ("Wrong group! Using greybox/long call + -l (DiVinE LTL semantics)? This combo is not implemented."); exit (-1);
    }
    return 0;
}

extern "C" int get_successor( void* model, int t, const state_struct_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_struct_t *out, int *cpy), void *arg ) 
{
    int states_emitted = 0;
    goto switch_state;
    l0: {
        
        // read:         1,1,0,0,1,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0
        if (  ( ((*in).Measuring_0.state.var == 0) )  &&  ( ((*in).actual_resistance.var < 6200 && (*in).cage_safe.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l1: {
        
        // read:         0,1,0,0,1,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0
        if (  ( ((*in).Measuring_0.state.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l2: {
        
        // read:         1,0,0,0,1,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Measuring_0.state.var == 1) )  &&  ( ((*in).cage_safe.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l3: {
        
        // read:         1,0,0,0,1,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Measuring_0.state.var == 1) )  &&  ( ((*in).cage_safe.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l4: {
        
        // read:         0,1,0,0,1,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0
        if (  ( ((*in).Measuring_0.state.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l5: {
        
        // read:         0,0,0,0,1,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Measuring_0.state.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l6: {
        
        // read:         1,1,0,0,0,1,0,0
        // actions_read: 0,1,0,0,0,0,0,0
        if (  ( ((*in).Measuring_1.state.var == 0) )  &&  ( ((*in).actual_resistance.var < 6200 && (*in).cage_safe.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l7: {
        
        // read:         0,1,0,0,0,1,0,0
        // actions_read: 0,1,0,0,0,0,0,0
        if (  ( ((*in).Measuring_1.state.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l8: {
        
        // read:         1,0,0,0,0,1,0,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Measuring_1.state.var == 1) )  &&  ( ((*in).cage_safe.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l9: {
        
        // read:         1,0,0,0,0,1,0,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Measuring_1.state.var == 1) )  &&  ( ((*in).cage_safe.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l10: {
        
        // read:         0,1,0,0,0,1,0,0
        // actions_read: 0,1,0,0,0,0,0,0
        if (  ( ((*in).Measuring_1.state.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l11: {
        
        // read:         0,0,0,0,0,1,0,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Measuring_1.state.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l12: {
        
        // read:         0,1,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 0) )  &&  ( ((*in).actual_resistance.var > 999 && (*in).actual_resistance.var < 5999) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l13: {
        
        // read:         0,1,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 0) )  &&  ( ((*in).actual_resistance.var < 1000) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l14: {
        
        // read:         0,1,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 0) )  &&  ( ((*in).actual_resistance.var > 5800) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l15: {
        
        // read:         1,0,0,0,1,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 1) )  &&  ( ((*in).Measuring_0.state.var == 0) )  &&  ( ((*in).cage_safe.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l16: {
        
        // read:         1,0,0,0,0,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 1) )  &&  ( ((*in).Measuring_1.state.var == 0) )  &&  ( ((*in).cage_safe.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l17: {
        
        // read:         0,0,0,1,0,0,1,0
        // actions_read: 0,0,0,1,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 2) )  &&  ( ((*in).range.var > 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l18: {
        
        // read:         0,0,0,1,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 2) )  &&  ( ((*in).range.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l19: {
        
        // read:         0,0,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l20: {
        
        // read:         0,0,0,1,0,0,1,0
        // actions_read: 0,0,0,1,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 4) )  &&  ( ((*in).range.var < 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l21: {
        
        // read:         0,0,0,1,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 4) )  &&  ( ((*in).range.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l22: {
        
        // read:         0,0,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l23: {
        
        // read:         0,0,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 6) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l24: {
        
        // read:         0,0,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 7) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l25: {
        
        // read:         0,0,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 8) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l26: {
        
        // read:         0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 10) )  &&  ( ((*in).Device_state.state.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l27: {
        
        // read:         0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Algorithm.state.var == 10) )  &&  ( ((*in).Device_state.state.var == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l28: {
        
        // read:         0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Device_state.state.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l29: {
        
        // read:         0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Device_state.state.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l30: {
        
        // read:         0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Device_state.state.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l31: {
        
        // read:         0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Device_state.state.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l32: {
        
        // read:         0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0
        if (  ( ((*in).Device_state.state.var == 3) )  &&  ( ((*in).Algorithm.state.var == 9) ) )
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
    int cpy[8] = { 1, 1, 1, 1, 1, 1, 1, 1, };
    if ( false )
    {
        ;
    }
    else
    {
        if (  ( ((*in).Measuring_0.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,1,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0
            if (  ( ((*in).actual_resistance.var < 6200 && (*in).cage_safe.var == 1) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_0.state.var = 0;
                cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
                ((*out).actual_resistance.var = (*out).actual_resistance.var + 1);
                cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0
                // may-write:    0,1,0,0,1,0,0,0
                // must-write:   0,1,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 0;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,1,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_0.state.var = 2;
                cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
                ((*out).cage_safe.var = 0);
                cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
                ((*out).actual_resistance.var = (*out).actual_resistance.var - 1);
                cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0
                // may-write:    1,1,0,0,1,0,0,0
                // must-write:   1,1,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 1;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Measuring_0.state.var == 1) ) )
        {
            
            // read:         1,0,0,0,1,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).cage_safe.var == 1) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_0.state.var = 0;
                cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,0,0
                // must-write:   0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 2;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,1,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).cage_safe.var == 0) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_0.state.var = 2;
                cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,0,0
                // must-write:   0,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 3;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Measuring_0.state.var == 2) ) )
        {
            
            // read:         0,1,0,0,1,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_0.state.var = 0;
                cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
                ((*out).cage_safe.var = 1);
                cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
                ((*out).actual_resistance.var = (*out).actual_resistance.var - 1);
                cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0
                // may-write:    1,1,0,0,1,0,0,0
                // must-write:   1,1,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 4;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Measuring_0.state.var == 3) ) )
        {
            
            // read:         0,0,0,0,1,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_0.state.var = 0;
                cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
                ((*out).cage_safe.var = 1);
                cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,1,0,0,0
                // must-write:   1,0,0,0,1,0,0,0
                system_in_deadlock = false;
                transition_info.group = 5;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Measuring_1.state.var == 0) ) )
        {
            
            // read:         1,1,0,0,0,1,0,0
            // actions_read: 0,1,0,0,0,0,0,0
            if (  ( ((*in).actual_resistance.var < 6200 && (*in).cage_safe.var == 1) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_1.state.var = 0;
                cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
                ((*out).actual_resistance.var = (*out).actual_resistance.var + 1);
                cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0
                // may-write:    0,1,0,0,0,1,0,0
                // must-write:   0,1,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 6;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,1,0,0
            // actions_read: 0,1,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_1.state.var = 2;
                cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
                ((*out).cage_safe.var = 0);
                cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
                ((*out).actual_resistance.var = (*out).actual_resistance.var - 1);
                cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 7;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Measuring_1.state.var == 1) ) )
        {
            
            // read:         1,0,0,0,0,1,0,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).cage_safe.var == 1) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_1.state.var = 0;
                cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,0,0
                // must-write:   0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 8;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,1,0,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).cage_safe.var == 0) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_1.state.var = 2;
                cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,0,0
                // must-write:   0,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 9;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Measuring_1.state.var == 2) ) )
        {
            
            // read:         0,1,0,0,0,1,0,0
            // actions_read: 0,1,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_1.state.var = 0;
                cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
                ((*out).cage_safe.var = 1);
                cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
                ((*out).actual_resistance.var = (*out).actual_resistance.var - 1);
                cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,1,0,0
                // must-write:   1,1,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 10;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Measuring_1.state.var == 3) ) )
        {
            
            // read:         0,0,0,0,0,1,0,0
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Measuring_1.state.var = 0;
                cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
                ((*out).cage_safe.var = 1);
                cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,1,0,0
                // must-write:   1,0,0,0,0,1,0,0
                system_in_deadlock = false;
                transition_info.group = 11;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 0) ) )
        {
            
            // read:         0,1,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).actual_resistance.var > 999 && (*in).actual_resistance.var < 5999) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 3;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                ((*out).actual_resistance.var = 0);
                cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,1,0,0,0,0,1,0
                // must-write:   0,1,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 12;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).actual_resistance.var < 1000) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 2;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                ((*out).actual_resistance.var = 0);
                cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,1,0,0,0,0,1,0
                // must-write:   0,1,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 13;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).actual_resistance.var > 5800) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 4;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                ((*out).actual_resistance.var = 0);
                cpy[((int*)&((*out).actual_resistance.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,1,0,0,0,0,1,0
                // must-write:   0,1,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 14;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 1) ) )
        {
            
            // read:         1,0,0,0,1,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).Measuring_0.state.var == 0) )  &&  ( ((*in).cage_safe.var == 1) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 9;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                (*out).Measuring_0.state.var = 1;
                cpy[((int*)&(*out).Measuring_0.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,1,0
                // must-write:   0,0,0,0,1,0,1,0
                system_in_deadlock = false;
                transition_info.group = 15;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).Measuring_1.state.var == 0) )  &&  ( ((*in).cage_safe.var == 1) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 9;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                (*out).Measuring_1.state.var = 1;
                cpy[((int*)&(*out).Measuring_1.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,1,0
                // must-write:   0,0,0,0,0,1,1,0
                system_in_deadlock = false;
                transition_info.group = 16;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 2) ) )
        {
            
            // read:         0,0,0,1,0,0,1,0
            // actions_read: 0,0,0,1,0,0,0,0
            if (  ( ((*in).range.var > 0) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 1;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                ((*out).range.var = (*out).range.var - 1);
                cpy[((int*)&((*out).range.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,1,0,0,0,0
                // may-write:    0,0,0,1,0,0,1,0
                // must-write:   0,0,0,1,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 17;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).range.var == 0) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 5;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0
                // must-write:   0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 18;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 3) ) )
        {
            
            // read:         0,0,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 8;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0
                // must-write:   0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 19;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 4) ) )
        {
            
            // read:         0,0,0,1,0,0,1,0
            // actions_read: 0,0,0,1,0,0,0,0
            if (  ( ((*in).range.var < 5) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 1;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                ((*out).range.var = (*out).range.var + 1);
                cpy[((int*)&((*out).range.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,1,0,0,0,0
                // may-write:    0,0,0,1,0,0,1,0
                // must-write:   0,0,0,1,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 20;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).range.var == 5) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 6;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0
                // must-write:   0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 21;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 5) ) )
        {
            
            // read:         0,0,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 8;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0
                // must-write:   0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 22;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 6) ) )
        {
            
            // read:         0,0,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 8;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0
                // must-write:   0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 23;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 7) ) )
        {
            
            // read:         0,0,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 1;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                ((*out).range.var = 3);
                cpy[((int*)&((*out).range.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,1,0
                // must-write:   0,0,0,1,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 24;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 8) ) )
        {
            
            // read:         0,0,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 7;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0
                // must-write:   0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 25;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Algorithm.state.var == 10) ) )
        {
            
            // read:         0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).Device_state.state.var == 4) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 0;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                (*out).Device_state.state.var = 3;
                cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 26;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).Device_state.state.var == 2) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Algorithm.state.var = 4;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                (*out).Device_state.state.var = 3;
                cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 27;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Device_state.state.var == 0) ) )
        {
            
            // read:         0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Device_state.state.var = 1;
                cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1
                // must-write:   0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 28;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Device_state.state.var = 2;
                cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1
                // must-write:   0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 29;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Device_state.state.var == 1) ) )
        {
            
            // read:         0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Device_state.state.var = 4;
                cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
                ((*out).cage_safe.var = 1);
                cpy[((int*)&((*out).cage_safe.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,0,1
                // must-write:   1,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 30;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0
            if ( true )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Device_state.state.var = 2;
                cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1
                // must-write:   0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 31;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Device_state.state.var == 3) ) )
        {
            
            // read:         0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0
            if (  ( ((*in).Algorithm.state.var == 9) ) )
            {
                *out = *in;
                int cpy[8] = { 1,1,1,1,1,1,1,1,};
                (*out).Device_state.state.var = 0;
                cpy[((int*)&(*out).Device_state.state.var - (int*)&(*out))] = 0;
                (*out).Algorithm.state.var = 10;
                cpy[((int*)&(*out).Algorithm.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 32;
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
    return 8;
}

extern "C" const char* get_state_variable_name(int var)
{
    switch (var)
    {
        case 0:
            return "cage_safe";
        case 1:
            return "actual_resistance";
        case 2:
            return "voltage";
        case 3:
            return "range";
        case 4:
            return "Measuring_0";
        case 5:
            return "Measuring_1";
        case 6:
            return "Algorithm";
        case 7:
            return "Device_state";
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
            return 1;
        case 5:
            return 2;
        case 6:
            return 3;
        case 7:
            return 4;
        default:
            return -1;
    }
}

extern "C" int get_state_variable_type_count() 
{
    return 5;
}

extern "C" const char* get_state_variable_type_name(int type) 
{
    switch (type)
    {
        case 3:
            return "Algorithm";
        case 4:
            return "Device_state";
        case 1:
            return "Measuring_0";
        case 2:
            return "Measuring_1";
        case 0:
            return "int";
        default:
            return NULL;
    }
}

extern "C" int get_state_variable_type_value_count(int type)
{
    switch (type)
    {
        case 3: // Algorithm
            return 11;
        case 4: // Device_state
            return 5;
        case 1: // Measuring_0
            return 4;
        case 2: // Measuring_1
            return 4;
        case 0: // int
            return 0;
        default:
            return -1;
    }
}

extern "C" const char* get_state_variable_type_value(int type, int value) 
{
    switch (type)
    {
        case 3:
        {
            switch (value)
            {
                case 0:
                    return "measured";
                case 1:
                    return "new_range";
                case 2:
                    return "small_resistance";
                case 3:
                    return "correct_value";
                case 4:
                    return "large_resistance";
                case 5:
                    return "too_small_resistance";
                case 6:
                    return "too_large_resistance";
                case 7:
                    return "start";
                case 8:
                    return "finished_measuring";
                case 9:
                    return "S1";
                case 10:
                    return "S2";
            }
        }
        case 4:
        {
            switch (value)
            {
                case 0:
                    return "state_request";
                case 1:
                    return "state0";
                case 2:
                    return "err7";
                case 3:
                    return "initial";
                case 4:
                    return "state1";
            }
        }
        case 1:
        {
            switch (value)
            {
                case 0:
                    return "measure_in_progress";
                case 1:
                    return "measure_done";
                case 2:
                    return "cage_opened";
                case 3:
                    return "initial";
            }
        }
        case 2:
        {
            switch (value)
            {
                case 0:
                    return "measure_in_progress";
                case 1:
                    return "measure_done";
                case 2:
                    return "cage_opened";
                case 3:
                    return "initial";
            }
        }
    }
    return NULL;
}

int transition_dependency[][3][8] = 
{
    // { ... read ...}, { ... may-write ...}, { ... must-write ...}
    {{1,1,0,0,1,0,0,0},{0,1,0,0,1,0,0,0},{0,1,0,0,1,0,0,0}},
    {{0,1,0,0,1,0,0,0},{1,1,0,0,1,0,0,0},{1,1,0,0,1,0,0,0}},
    {{1,0,0,0,1,0,0,0},{0,0,0,0,1,0,0,0},{0,0,0,0,1,0,0,0}},
    {{1,0,0,0,1,0,0,0},{0,0,0,0,1,0,0,0},{0,0,0,0,1,0,0,0}},
    {{0,1,0,0,1,0,0,0},{1,1,0,0,1,0,0,0},{1,1,0,0,1,0,0,0}},
    {{0,0,0,0,1,0,0,0},{1,0,0,0,1,0,0,0},{1,0,0,0,1,0,0,0}},
    {{1,1,0,0,0,1,0,0},{0,1,0,0,0,1,0,0},{0,1,0,0,0,1,0,0}},
    {{0,1,0,0,0,1,0,0},{1,1,0,0,0,1,0,0},{1,1,0,0,0,1,0,0}},
    {{1,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0}},
    {{1,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,0}},
    {{0,1,0,0,0,1,0,0},{1,1,0,0,0,1,0,0},{1,1,0,0,0,1,0,0}},
    {{0,0,0,0,0,1,0,0},{1,0,0,0,0,1,0,0},{1,0,0,0,0,1,0,0}},
    {{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0}},
    {{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0}},
    {{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0},{0,1,0,0,0,0,1,0}},
    {{1,0,0,0,1,0,1,0},{0,0,0,0,1,0,1,0},{0,0,0,0,1,0,1,0}},
    {{1,0,0,0,0,1,1,0},{0,0,0,0,0,1,1,0},{0,0,0,0,0,1,1,0}},
    {{0,0,0,1,0,0,1,0},{0,0,0,1,0,0,1,0},{0,0,0,1,0,0,1,0}},
    {{0,0,0,1,0,0,1,0},{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0}},
    {{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0}},
    {{0,0,0,1,0,0,1,0},{0,0,0,1,0,0,1,0},{0,0,0,1,0,0,1,0}},
    {{0,0,0,1,0,0,1,0},{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0}},
    {{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0}},
    {{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0}},
    {{0,0,0,0,0,0,1,0},{0,0,0,1,0,0,1,0},{0,0,0,1,0,0,1,0}},
    {{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0},{0,0,0,0,0,0,1,0}},
    {{0,0,0,0,0,0,1,1},{0,0,0,0,0,0,1,1},{0,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,1,1},{0,0,0,0,0,0,1,1},{0,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,1}},
    {{0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,1}},
    {{0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,1}},
    {{0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,1}},
    {{0,0,0,0,0,0,1,1},{0,0,0,0,0,0,1,1},{0,0,0,0,0,0,1,1}}
}
;

int actions_read[][8] = 
{
    {0,1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
}
;

extern "C" int get_transition_count() 
{
    return 33;
}

extern "C" const int* get_transition_read_dependencies(int t) 
{
    if (t>=0 && t < 33) return transition_dependency[t][0];
    return NULL;
}

extern "C" const int* get_transition_actions_read_dependencies(int t) 
{
    if (t>=0 && t < 33) return actions_read[t];
    return NULL;
}

extern "C" const int* get_transition_may_write_dependencies(int t) 
{
    if (t>=0 && t < 33) return transition_dependency[t][1];
    return NULL;
}

extern "C" const int* get_transition_write_dependencies(int t) 
{
    return get_transition_may_write_dependencies(t);
}

extern "C" const int* get_transition_must_write_dependencies(int t) 
{
    if (t>=0 && t < 33) return transition_dependency[t][2];
    return NULL;
}

extern "C" int get_active( state_struct_t *in, int t ) 
{
    switch(t)
    {
        case 0: return (((*in).Measuring_0.state.var == 0));
        case 1: return (((*in).Measuring_0.state.var == 0));
        case 2: return (((*in).Measuring_0.state.var == 1));
        case 3: return (((*in).Measuring_0.state.var == 1));
        case 4: return (((*in).Measuring_0.state.var == 2));
        case 5: return (((*in).Measuring_0.state.var == 3));
        case 6: return (((*in).Measuring_1.state.var == 0));
        case 7: return (((*in).Measuring_1.state.var == 0));
        case 8: return (((*in).Measuring_1.state.var == 1));
        case 9: return (((*in).Measuring_1.state.var == 1));
        case 10: return (((*in).Measuring_1.state.var == 2));
        case 11: return (((*in).Measuring_1.state.var == 3));
        case 12: return (((*in).Algorithm.state.var == 0));
        case 13: return (((*in).Algorithm.state.var == 0));
        case 14: return (((*in).Algorithm.state.var == 0));
        case 15: return ((((*in).Algorithm.state.var == 1)) && (((*in).Measuring_0.state.var == 0)));
        case 16: return ((((*in).Algorithm.state.var == 1)) && (((*in).Measuring_1.state.var == 0)));
        case 17: return (((*in).Algorithm.state.var == 2));
        case 18: return (((*in).Algorithm.state.var == 2));
        case 19: return (((*in).Algorithm.state.var == 3));
        case 20: return (((*in).Algorithm.state.var == 4));
        case 21: return (((*in).Algorithm.state.var == 4));
        case 22: return (((*in).Algorithm.state.var == 5));
        case 23: return (((*in).Algorithm.state.var == 6));
        case 24: return (((*in).Algorithm.state.var == 7));
        case 25: return (((*in).Algorithm.state.var == 8));
        case 26: return ((((*in).Algorithm.state.var == 10)) && (((*in).Device_state.state.var == 4)));
        case 27: return ((((*in).Algorithm.state.var == 10)) && (((*in).Device_state.state.var == 2)));
        case 28: return (((*in).Device_state.state.var == 0));
        case 29: return (((*in).Device_state.state.var == 0));
        case 30: return (((*in).Device_state.state.var == 1));
        case 31: return (((*in).Device_state.state.var == 1));
        case 32: return ((((*in).Device_state.state.var == 3)) && (((*in).Algorithm.state.var == 9)));
    }
    return false;
}

extern "C" void get_group_pid_lid( int t, int* pid0, int* lid0, int* pid1, int* lid1 ) 
{
    switch(t)
    {
        case 0: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 1: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 2: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 3: *pid0 = 0; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 4: *pid0 = 0; *lid0 = 2; *pid1 = -1; *lid1 = -1; return;
        case 5: *pid0 = 0; *lid0 = 3; *pid1 = -1; *lid1 = -1; return;
        case 6: *pid0 = 1; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 7: *pid0 = 1; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 8: *pid0 = 1; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 9: *pid0 = 1; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 10: *pid0 = 1; *lid0 = 2; *pid1 = -1; *lid1 = -1; return;
        case 11: *pid0 = 1; *lid0 = 3; *pid1 = -1; *lid1 = -1; return;
        case 12: *pid0 = 2; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 13: *pid0 = 2; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 14: *pid0 = 2; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 15: *pid0 = 2; *lid0=1; *pid1 = 0; *lid1 = 0; return;
        case 16: *pid0 = 2; *lid0=1; *pid1 = 1; *lid1 = 0; return;
        case 17: *pid0 = 2; *lid0 = 2; *pid1 = -1; *lid1 = -1; return;
        case 18: *pid0 = 2; *lid0 = 2; *pid1 = -1; *lid1 = -1; return;
        case 19: *pid0 = 2; *lid0 = 3; *pid1 = -1; *lid1 = -1; return;
        case 20: *pid0 = 2; *lid0 = 4; *pid1 = -1; *lid1 = -1; return;
        case 21: *pid0 = 2; *lid0 = 4; *pid1 = -1; *lid1 = -1; return;
        case 22: *pid0 = 2; *lid0 = 5; *pid1 = -1; *lid1 = -1; return;
        case 23: *pid0 = 2; *lid0 = 6; *pid1 = -1; *lid1 = -1; return;
        case 24: *pid0 = 2; *lid0 = 7; *pid1 = -1; *lid1 = -1; return;
        case 25: *pid0 = 2; *lid0 = 8; *pid1 = -1; *lid1 = -1; return;
        case 26: *pid0 = 2; *lid0=10; *pid1 = 3; *lid1 = 4; return;
        case 27: *pid0 = 2; *lid0=10; *pid1 = 3; *lid1 = 2; return;
        case 28: *pid0 = 3; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 29: *pid0 = 3; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 30: *pid0 = 3; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 31: *pid0 = 3; *lid0 = 1; *pid1 = -1; *lid1 = -1; return;
        case 32: *pid0 = 3; *lid0=3; *pid1 = 2; *lid1 = 9; return;
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
            case 0: return (((*src).Measuring_0.state.var == 0));
            case 1: return (((*src).actual_resistance.var < 6200));
            case 2: return (((*src).cage_safe.var == 1));
            case 3: return (((*src).Measuring_0.state.var == 1));
            case 4: return (((*src).cage_safe.var == 0));
            case 5: return (((*src).Measuring_0.state.var == 2));
            case 6: return (((*src).Measuring_0.state.var == 3));
            case 7: return (((*src).Measuring_1.state.var == 0));
            case 8: return (((*src).Measuring_1.state.var == 1));
            case 9: return (((*src).Measuring_1.state.var == 2));
            case 10: return (((*src).Measuring_1.state.var == 3));
            case 11: return (((*src).Algorithm.state.var == 0));
            case 12: return (((*src).actual_resistance.var > 999));
            case 13: return (((*src).actual_resistance.var < 5999));
            case 14: return (((*src).actual_resistance.var < 1000));
            case 15: return (((*src).actual_resistance.var > 5800));
            case 16: return (((*src).Algorithm.state.var == 1));
            case 17: return (((*src).Algorithm.state.var == 2));
            case 18: return (((*src).range.var > 0));
            case 19: return (((*src).range.var == 0));
            case 20: return (((*src).Algorithm.state.var == 3));
            case 21: return (((*src).Algorithm.state.var == 4));
            case 22: return (((*src).range.var < 5));
            case 23: return (((*src).range.var == 5));
            case 24: return (((*src).Algorithm.state.var == 5));
            case 25: return (((*src).Algorithm.state.var == 6));
            case 26: return (((*src).Algorithm.state.var == 7));
            case 27: return (((*src).Algorithm.state.var == 8));
            case 28: return (((*src).Algorithm.state.var == 10));
            case 29: return (((*src).Device_state.state.var == 4));
            case 30: return (((*src).Device_state.state.var == 2));
            case 31: return (((*src).Device_state.state.var == 0));
            case 32: return (((*src).Device_state.state.var == 1));
            case 33: return (((*src).Device_state.state.var == 3));
            case 34: return (((*src).Algorithm.state.var == 9));
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
}

extern "C" const int get_guard_count() 
{
    return 35;
}

int* guards_per_transition[33] = 
{
    ((int[]){3, 0, 1, 2}), // 0
    ((int[]){1, 0}), // 1
    ((int[]){2, 3, 2}), // 2
    ((int[]){2, 3, 4}), // 3
    ((int[]){1, 5}), // 4
    ((int[]){1, 6}), // 5
    ((int[]){3, 7, 1, 2}), // 6
    ((int[]){1, 7}), // 7
    ((int[]){2, 8, 2}), // 8
    ((int[]){2, 8, 4}), // 9
    ((int[]){1, 9}), // 10
    ((int[]){1, 10}), // 11
    ((int[]){3, 11, 12, 13}), // 12
    ((int[]){2, 11, 14}), // 13
    ((int[]){2, 11, 15}), // 14
    ((int[]){3, 16, 0, 2}), // 15
    ((int[]){3, 16, 7, 2}), // 16
    ((int[]){2, 17, 18}), // 17
    ((int[]){2, 17, 19}), // 18
    ((int[]){1, 20}), // 19
    ((int[]){2, 21, 22}), // 20
    ((int[]){2, 21, 23}), // 21
    ((int[]){1, 24}), // 22
    ((int[]){1, 25}), // 23
    ((int[]){1, 26}), // 24
    ((int[]){1, 27}), // 25
    ((int[]){2, 28, 29}), // 26
    ((int[]){2, 28, 30}), // 27
    ((int[]){1, 31}), // 28
    ((int[]){1, 31}), // 29
    ((int[]){1, 32}), // 30
    ((int[]){1, 32}), // 31
    ((int[]){2, 33, 34}), // 32
}
;

extern "C" const int* get_guards(int t) 
{
    if (t>=0 && t < 33) return guards_per_transition[t];
    return NULL;
}

extern "C" const int** get_all_guards() 
{
    return (const int**)&guards_per_transition;
}

int guard[][8] = 
{
    {0,0,0,0,1,0,0,0},
    {0,1,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0},
    {1,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,1,0},
    {0,1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,1,0,0,0,0},
    {0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,1,0,0,0,0},
    {0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,1,0}
}
;

extern "C" const int* get_guard_matrix(int g) 
{
    if (g>=0 && g < 35) return guard[g];
    return NULL;
}

int guardmaybecoenabled[35][35] = 
{
    {1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_may_be_coenabled_matrix(int g) 
{
    if (g>=0 && g < 35) return guardmaybecoenabled[g];
    return NULL;
}

int guard_nes[35][33] = 
{
    {1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
}
;

extern "C" const int* get_guard_nes_matrix(int g) 
{
    if (g>=0 && g < 35) return guard_nes[g];
    return NULL;
}

int guard_nds[35][33] = 
{
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}
}
;

extern "C" const int* get_guard_nds_matrix(int g) 
{
    if (g>=0 && g < 35) return guard_nds[g];
    return NULL;
}

int dna[33][33] = 
{
    {1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1},
    {0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0},
    {1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}
}
;

extern "C" const int* get_dna_matrix(int t) 
{
    if (t >= 0 && t < 33) return dna[t];
    return NULL;
}

