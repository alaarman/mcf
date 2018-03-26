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
    byte_t temperature[4];
    byte_t surface[4];
    byte_t shape[4];
    byte_t painted[4];
    byte_t hashole[4];
    byte_t busy[8];
    byte_t scheduled[4];
    byte_t objscheduled;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) P;
}
__attribute__((__packed__));
int state_size = sizeof(state_struct_t);

state_struct_t initial_state = { 0,0,0,0,0,0,1,2,0,1,1,1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

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
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 1;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l1: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[0].var = 1);
        cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).surface[0].var = 0);
        cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l2: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[0].var = 1);
        cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).surface[1].var = 0);
        cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l3: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[0].var = 1);
        cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).surface[2].var = 0);
        cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l4: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[0].var = 1);
        cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).surface[3].var = 0);
        cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l5: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[1].var = 1);
        cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).shape[0].var = 0);
        cpy[((int*)&((*out).shape[0].var) - (int*)&(*out))] = 0;
        ((*out).temperature[0].var = 1);
        cpy[((int*)&((*out).temperature[0].var) - (int*)&(*out))] = 0;
        ((*out).painted[0].var = 255);
        cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
        ((*out).hashole[0].var = 255);
        cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
        ((*out).surface[0].var = 255);
        cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,1
        // must-write:   1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l6: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[1].var = 1);
        cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).shape[1].var = 0);
        cpy[((int*)&((*out).shape[1].var) - (int*)&(*out))] = 0;
        ((*out).temperature[1].var = 1);
        cpy[((int*)&((*out).temperature[1].var) - (int*)&(*out))] = 0;
        ((*out).painted[1].var = 255);
        cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
        ((*out).hashole[1].var = 255);
        cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
        ((*out).surface[1].var = 255);
        cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,1
        // must-write:   0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l7: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[1].var = 1);
        cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).shape[2].var = 0);
        cpy[((int*)&((*out).shape[2].var) - (int*)&(*out))] = 0;
        ((*out).temperature[2].var = 1);
        cpy[((int*)&((*out).temperature[2].var) - (int*)&(*out))] = 0;
        ((*out).painted[2].var = 255);
        cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
        ((*out).hashole[2].var = 255);
        cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
        ((*out).surface[2].var = 255);
        cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,1,1
        // must-write:   0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l8: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[1].var = 1);
        cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).shape[3].var = 0);
        cpy[((int*)&((*out).shape[3].var) - (int*)&(*out))] = 0;
        ((*out).temperature[3].var = 1);
        cpy[((int*)&((*out).temperature[3].var) - (int*)&(*out))] = 0;
        ((*out).painted[3].var = 255);
        cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
        ((*out).hashole[3].var = 255);
        cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
        ((*out).surface[3].var = 255);
        cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,1,1
        // must-write:   0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l9: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[2].var = 1);
        cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).surface[0].var = 2);
        cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
        ((*out).shape[0].var = 0);
        cpy[((int*)&((*out).shape[0].var) - (int*)&(*out))] = 0;
        ((*out).painted[0].var = 255);
        cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l10: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[2].var = 1);
        cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).surface[1].var = 2);
        cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
        ((*out).shape[1].var = 0);
        cpy[((int*)&((*out).shape[1].var) - (int*)&(*out))] = 0;
        ((*out).painted[1].var = 255);
        cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l11: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[2].var = 1);
        cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).surface[2].var = 2);
        cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
        ((*out).shape[2].var = 0);
        cpy[((int*)&((*out).shape[2].var) - (int*)&(*out))] = 0;
        ((*out).painted[2].var = 255);
        cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l12: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[2].var = 1);
        cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).surface[3].var = 2);
        cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
        ((*out).shape[3].var = 0);
        cpy[((int*)&((*out).shape[3].var) - (int*)&(*out))] = 0;
        ((*out).painted[3].var = 255);
        cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l13: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[3].var = 1);
        cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).surface[0].var = 1);
        cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
        ((*out).painted[0].var = 255);
        cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l14: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[3].var = 1);
        cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).surface[1].var = 1);
        cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
        ((*out).painted[1].var = 255);
        cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l15: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[3].var = 1);
        cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).surface[2].var = 1);
        cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
        ((*out).painted[2].var = 255);
        cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l16: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[3].var = 1);
        cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).surface[3].var = 1);
        cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
        ((*out).painted[3].var = 255);
        cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l17: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[4].var = 1);
        cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).surface[0].var = 2);
        cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
        ((*out).hashole[0].var = 0);
        cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l18: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[4].var = 1);
        cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).surface[1].var = 2);
        cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
        ((*out).hashole[1].var = 0);
        cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l19: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[4].var = 1);
        cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).surface[2].var = 2);
        cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
        ((*out).hashole[2].var = 0);
        cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l20: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[4].var = 1);
        cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).surface[3].var = 2);
        cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
        ((*out).hashole[3].var = 0);
        cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l21: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[4].var = 1);
        cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).surface[0].var = 2);
        cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
        ((*out).hashole[0].var = 1);
        cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l22: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[4].var = 1);
        cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).surface[1].var = 2);
        cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
        ((*out).hashole[1].var = 1);
        cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l23: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[4].var = 1);
        cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).surface[2].var = 2);
        cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
        ((*out).hashole[2].var = 1);
        cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l24: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[4].var = 1);
        cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).surface[3].var = 2);
        cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
        ((*out).hashole[3].var = 1);
        cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l25: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[5].var = 1);
        cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).hashole[0].var = 0);
        cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l26: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[5].var = 1);
        cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).hashole[1].var = 0);
        cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l27: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[5].var = 1);
        cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).hashole[2].var = 0);
        cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l28: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[5].var = 1);
        cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).hashole[3].var = 0);
        cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l29: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[5].var = 1);
        cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).hashole[0].var = 1);
        cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l30: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[5].var = 1);
        cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).hashole[1].var = 1);
        cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l31: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[5].var = 1);
        cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).hashole[2].var = 1);
        cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l32: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[5].var = 1);
        cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).hashole[3].var = 1);
        cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l33: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[6].var = 1);
        cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).painted[0].var = 0);
        cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l34: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[6].var = 1);
        cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).painted[1].var = 0);
        cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l35: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[6].var = 1);
        cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).painted[2].var = 0);
        cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l36: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[6].var = 1);
        cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).painted[3].var = 0);
        cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l37: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[6].var = 1);
        cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).painted[0].var = 1);
        cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l38: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[6].var = 1);
        cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).painted[1].var = 1);
        cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l39: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[6].var = 1);
        cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).painted[2].var = 1);
        cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l40: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[6].var = 1);
        cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).painted[3].var = 1);
        cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l41: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[7].var = 1);
        cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).painted[0].var = 0);
        cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l42: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[7].var = 1);
        cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).painted[1].var = 0);
        cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l43: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[7].var = 1);
        cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).painted[2].var = 0);
        cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l44: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[7].var = 1);
        cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).painted[3].var = 0);
        cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l45: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[7].var = 1);
        cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 1);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).painted[0].var = 1);
        cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l46: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[7].var = 1);
        cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 1);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).painted[1].var = 1);
        cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l47: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[7].var = 1);
        cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 1);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).painted[2].var = 1);
        cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l48: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 1);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        ((*out).busy[7].var = 1);
        cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 1);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).painted[3].var = 1);
        cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l49: {
        *out = *in;
        int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).scheduled[0].var = 0);
        cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[1].var = 0);
        cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[2].var = 0);
        cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
        ((*out).scheduled[3].var = 0);
        cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
        ((*out).busy[0].var = 0);
        cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
        ((*out).busy[1].var = 0);
        cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
        ((*out).busy[2].var = 0);
        cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
        ((*out).busy[3].var = 0);
        cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
        ((*out).busy[4].var = 0);
        cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
        ((*out).busy[5].var = 0);
        cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
        ((*out).busy[6].var = 0);
        cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
        ((*out).busy[7].var = 0);
        cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
        ((*out).objscheduled.var = 0);
        cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1
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
        default: printf ("Wrong group! Using greybox/long call + -l (DiVinE LTL semantics)? This combo is not implemented."); exit (-1);
    }
    return 0;
}

extern "C" int get_successor( void* model, int t, const state_struct_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_struct_t *out, int *cpy), void *arg ) 
{
    int states_emitted = 0;
    goto switch_state;
    l0: {
        
        // read:         0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).shape[1].var == 1 && (*in).surface[0].var == 0 && (*in).surface[1].var == 0 && (*in).hashole[1].var == 1 && (*in).shape[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l1: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[0].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l2: {
        
        // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[0].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l3: {
        
        // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[0].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l4: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[0].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l5: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[1].var == 0 && (*in).scheduled[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l6: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[1].var == 0 && (*in).scheduled[1].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l7: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[1].var == 0 && (*in).scheduled[2].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l8: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[1].var == 0 && (*in).scheduled[3].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l9: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[2].var == 0 && (*in).scheduled[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l10: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[2].var == 0 && (*in).scheduled[1].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l11: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[2].var == 0 && (*in).scheduled[2].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l12: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[2].var == 0 && (*in).scheduled[3].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l13: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[3].var == 0 && (*in).scheduled[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l14: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[3].var == 0 && (*in).scheduled[1].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l15: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[3].var == 0 && (*in).scheduled[2].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l16: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[3].var == 0 && (*in).scheduled[3].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l17: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[4].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0 && (*in).hashole[0].var != 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l18: {
        
        // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[4].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0 && (*in).hashole[1].var != 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l19: {
        
        // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[4].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0 && (*in).hashole[2].var != 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l20: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[4].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0 && (*in).hashole[3].var != 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l21: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[4].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0 && (*in).hashole[0].var != 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l22: {
        
        // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[4].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0 && (*in).hashole[1].var != 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l23: {
        
        // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[4].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0 && (*in).hashole[2].var != 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l24: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[4].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0 && (*in).hashole[3].var != 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l25: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[5].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0 && (*in).hashole[0].var != 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l26: {
        
        // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[5].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0 && (*in).hashole[1].var != 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l27: {
        
        // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[5].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0 && (*in).hashole[2].var != 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l28: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[5].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0 && (*in).hashole[3].var != 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l29: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[5].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0 && (*in).hashole[0].var != 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l30: {
        
        // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[5].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0 && (*in).hashole[1].var != 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l31: {
        
        // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[5].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0 && (*in).hashole[2].var != 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l32: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[5].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0 && (*in).hashole[3].var != 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l33: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[6].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l34: {
        
        // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[6].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l35: {
        
        // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[6].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l36: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[6].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l37: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[6].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l38: {
        
        // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[6].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l39: {
        
        // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[6].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l40: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[6].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l41: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[7].var == 0 && (*in).scheduled[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l42: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[7].var == 0 && (*in).scheduled[1].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l43: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[7].var == 0 && (*in).scheduled[2].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l44: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[7].var == 0 && (*in).scheduled[3].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l45: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[7].var == 0 && (*in).scheduled[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l46: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[7].var == 0 && (*in).scheduled[1].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l47: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[7].var == 0 && (*in).scheduled[2].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l48: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).busy[7].var == 0 && (*in).scheduled[3].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l49: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).objscheduled.var == 1) ) )
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
    int cpy[34] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, };
    if ( false )
    {
        ;
    }
    else
    {
        if (  ( ((*in).P.state.var == 0) ) )
        {
            
            // read:         0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).shape[1].var == 1 && (*in).surface[0].var == 0 && (*in).surface[1].var == 0 && (*in).hashole[1].var == 1 && (*in).shape[0].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 1;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 0;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[0].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[0].var = 1);
                cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).surface[0].var = 0);
                cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 1;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[0].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[0].var = 1);
                cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).surface[1].var = 0);
                cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 2;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[0].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[0].var = 1);
                cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).surface[2].var = 0);
                cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 3;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[0].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[0].var = 1);
                cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).surface[3].var = 0);
                cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 4;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[1].var == 0 && (*in).scheduled[0].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[1].var = 1);
                cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).shape[0].var = 0);
                cpy[((int*)&((*out).shape[0].var) - (int*)&(*out))] = 0;
                ((*out).temperature[0].var = 1);
                cpy[((int*)&((*out).temperature[0].var) - (int*)&(*out))] = 0;
                ((*out).painted[0].var = 255);
                cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
                ((*out).hashole[0].var = 255);
                cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
                ((*out).surface[0].var = 255);
                cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,1
                // must-write:   1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 5;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[1].var == 0 && (*in).scheduled[1].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[1].var = 1);
                cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).shape[1].var = 0);
                cpy[((int*)&((*out).shape[1].var) - (int*)&(*out))] = 0;
                ((*out).temperature[1].var = 1);
                cpy[((int*)&((*out).temperature[1].var) - (int*)&(*out))] = 0;
                ((*out).painted[1].var = 255);
                cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
                ((*out).hashole[1].var = 255);
                cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
                ((*out).surface[1].var = 255);
                cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,1
                // must-write:   0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 6;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[1].var == 0 && (*in).scheduled[2].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[1].var = 1);
                cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).shape[2].var = 0);
                cpy[((int*)&((*out).shape[2].var) - (int*)&(*out))] = 0;
                ((*out).temperature[2].var = 1);
                cpy[((int*)&((*out).temperature[2].var) - (int*)&(*out))] = 0;
                ((*out).painted[2].var = 255);
                cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
                ((*out).hashole[2].var = 255);
                cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
                ((*out).surface[2].var = 255);
                cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,1,1
                // must-write:   0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 7;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[1].var == 0 && (*in).scheduled[3].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[1].var = 1);
                cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).shape[3].var = 0);
                cpy[((int*)&((*out).shape[3].var) - (int*)&(*out))] = 0;
                ((*out).temperature[3].var = 1);
                cpy[((int*)&((*out).temperature[3].var) - (int*)&(*out))] = 0;
                ((*out).painted[3].var = 255);
                cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
                ((*out).hashole[3].var = 255);
                cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
                ((*out).surface[3].var = 255);
                cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,1,1
                // must-write:   0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 8;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[2].var == 0 && (*in).scheduled[0].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[2].var = 1);
                cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).surface[0].var = 2);
                cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
                ((*out).shape[0].var = 0);
                cpy[((int*)&((*out).shape[0].var) - (int*)&(*out))] = 0;
                ((*out).painted[0].var = 255);
                cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 9;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[2].var == 0 && (*in).scheduled[1].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[2].var = 1);
                cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).surface[1].var = 2);
                cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
                ((*out).shape[1].var = 0);
                cpy[((int*)&((*out).shape[1].var) - (int*)&(*out))] = 0;
                ((*out).painted[1].var = 255);
                cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 10;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[2].var == 0 && (*in).scheduled[2].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[2].var = 1);
                cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).surface[2].var = 2);
                cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
                ((*out).shape[2].var = 0);
                cpy[((int*)&((*out).shape[2].var) - (int*)&(*out))] = 0;
                ((*out).painted[2].var = 255);
                cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 11;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[2].var == 0 && (*in).scheduled[3].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[2].var = 1);
                cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).surface[3].var = 2);
                cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
                ((*out).shape[3].var = 0);
                cpy[((int*)&((*out).shape[3].var) - (int*)&(*out))] = 0;
                ((*out).painted[3].var = 255);
                cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 12;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[3].var == 0 && (*in).scheduled[0].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[3].var = 1);
                cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).surface[0].var = 1);
                cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
                ((*out).painted[0].var = 255);
                cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 13;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[3].var == 0 && (*in).scheduled[1].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[3].var = 1);
                cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).surface[1].var = 1);
                cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
                ((*out).painted[1].var = 255);
                cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 14;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[3].var == 0 && (*in).scheduled[2].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[3].var = 1);
                cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).surface[2].var = 1);
                cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
                ((*out).painted[2].var = 255);
                cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 15;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[3].var == 0 && (*in).scheduled[3].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[3].var = 1);
                cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).surface[3].var = 1);
                cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
                ((*out).painted[3].var = 255);
                cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 16;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[4].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0 && (*in).hashole[0].var != 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[4].var = 1);
                cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).surface[0].var = 2);
                cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
                ((*out).hashole[0].var = 0);
                cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 17;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[4].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0 && (*in).hashole[1].var != 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[4].var = 1);
                cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).surface[1].var = 2);
                cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
                ((*out).hashole[1].var = 0);
                cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 18;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[4].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0 && (*in).hashole[2].var != 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[4].var = 1);
                cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).surface[2].var = 2);
                cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
                ((*out).hashole[2].var = 0);
                cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 19;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[4].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0 && (*in).hashole[3].var != 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[4].var = 1);
                cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).surface[3].var = 2);
                cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
                ((*out).hashole[3].var = 0);
                cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 20;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[4].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0 && (*in).hashole[0].var != 1) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[4].var = 1);
                cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).surface[0].var = 2);
                cpy[((int*)&((*out).surface[0].var) - (int*)&(*out))] = 0;
                ((*out).hashole[0].var = 1);
                cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 21;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[4].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0 && (*in).hashole[1].var != 1) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[4].var = 1);
                cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).surface[1].var = 2);
                cpy[((int*)&((*out).surface[1].var) - (int*)&(*out))] = 0;
                ((*out).hashole[1].var = 1);
                cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 22;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[4].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0 && (*in).hashole[2].var != 1) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[4].var = 1);
                cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).surface[2].var = 2);
                cpy[((int*)&((*out).surface[2].var) - (int*)&(*out))] = 0;
                ((*out).hashole[2].var = 1);
                cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 23;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[4].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0 && (*in).hashole[3].var != 1) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[4].var = 1);
                cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).surface[3].var = 2);
                cpy[((int*)&((*out).surface[3].var) - (int*)&(*out))] = 0;
                ((*out).hashole[3].var = 1);
                cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 24;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[5].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0 && (*in).hashole[0].var != 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[5].var = 1);
                cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).hashole[0].var = 0);
                cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 25;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[5].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0 && (*in).hashole[1].var != 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[5].var = 1);
                cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).hashole[1].var = 0);
                cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 26;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[5].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0 && (*in).hashole[2].var != 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[5].var = 1);
                cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).hashole[2].var = 0);
                cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 27;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[5].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0 && (*in).hashole[3].var != 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[5].var = 1);
                cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).hashole[3].var = 0);
                cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 28;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[5].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0 && (*in).hashole[0].var != 1) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[5].var = 1);
                cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).hashole[0].var = 1);
                cpy[((int*)&((*out).hashole[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 29;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[5].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0 && (*in).hashole[1].var != 1) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[5].var = 1);
                cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).hashole[1].var = 1);
                cpy[((int*)&((*out).hashole[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 30;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[5].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0 && (*in).hashole[2].var != 1) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[5].var = 1);
                cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).hashole[2].var = 1);
                cpy[((int*)&((*out).hashole[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 31;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[5].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0 && (*in).hashole[3].var != 1) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[5].var = 1);
                cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).hashole[3].var = 1);
                cpy[((int*)&((*out).hashole[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 32;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[6].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[6].var = 1);
                cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).painted[0].var = 0);
                cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 33;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[6].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[6].var = 1);
                cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).painted[1].var = 0);
                cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 34;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[6].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[6].var = 1);
                cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).painted[2].var = 0);
                cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 35;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[6].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[6].var = 1);
                cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).painted[3].var = 0);
                cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 36;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[6].var == 0 && (*in).scheduled[0].var == 0 && (*in).temperature[0].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[6].var = 1);
                cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).painted[0].var = 1);
                cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 37;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[6].var == 0 && (*in).scheduled[1].var == 0 && (*in).temperature[1].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[6].var = 1);
                cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).painted[1].var = 1);
                cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 38;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[6].var == 0 && (*in).scheduled[2].var == 0 && (*in).temperature[2].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[6].var = 1);
                cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).painted[2].var = 1);
                cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 39;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[6].var == 0 && (*in).scheduled[3].var == 0 && (*in).temperature[3].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[6].var = 1);
                cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).painted[3].var = 1);
                cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 40;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[7].var == 0 && (*in).scheduled[0].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[7].var = 1);
                cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).painted[0].var = 0);
                cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 41;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[7].var == 0 && (*in).scheduled[1].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[7].var = 1);
                cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).painted[1].var = 0);
                cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 42;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[7].var == 0 && (*in).scheduled[2].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[7].var = 1);
                cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).painted[2].var = 0);
                cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 43;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[7].var == 0 && (*in).scheduled[3].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[7].var = 1);
                cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).painted[3].var = 0);
                cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 44;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[7].var == 0 && (*in).scheduled[0].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[7].var = 1);
                cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 1);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).painted[0].var = 1);
                cpy[((int*)&((*out).painted[0].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 45;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[7].var == 0 && (*in).scheduled[1].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[7].var = 1);
                cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 1);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).painted[1].var = 1);
                cpy[((int*)&((*out).painted[1].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 46;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[7].var == 0 && (*in).scheduled[2].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[7].var = 1);
                cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 1);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).painted[2].var = 1);
                cpy[((int*)&((*out).painted[2].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1
                system_in_deadlock = false;
                transition_info.group = 47;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).busy[7].var == 0 && (*in).scheduled[3].var == 0) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 1);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                ((*out).busy[7].var = 1);
                cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 1);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).painted[3].var = 1);
                cpy[((int*)&((*out).painted[3].var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1
                system_in_deadlock = false;
                transition_info.group = 48;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).objscheduled.var == 1) ) )
            {
                *out = *in;
                int cpy[34] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).scheduled[0].var = 0);
                cpy[((int*)&((*out).scheduled[0].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[1].var = 0);
                cpy[((int*)&((*out).scheduled[1].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[2].var = 0);
                cpy[((int*)&((*out).scheduled[2].var) - (int*)&(*out))] = 0;
                ((*out).scheduled[3].var = 0);
                cpy[((int*)&((*out).scheduled[3].var) - (int*)&(*out))] = 0;
                ((*out).busy[0].var = 0);
                cpy[((int*)&((*out).busy[0].var) - (int*)&(*out))] = 0;
                ((*out).busy[1].var = 0);
                cpy[((int*)&((*out).busy[1].var) - (int*)&(*out))] = 0;
                ((*out).busy[2].var = 0);
                cpy[((int*)&((*out).busy[2].var) - (int*)&(*out))] = 0;
                ((*out).busy[3].var = 0);
                cpy[((int*)&((*out).busy[3].var) - (int*)&(*out))] = 0;
                ((*out).busy[4].var = 0);
                cpy[((int*)&((*out).busy[4].var) - (int*)&(*out))] = 0;
                ((*out).busy[5].var = 0);
                cpy[((int*)&((*out).busy[5].var) - (int*)&(*out))] = 0;
                ((*out).busy[6].var = 0);
                cpy[((int*)&((*out).busy[6].var) - (int*)&(*out))] = 0;
                ((*out).busy[7].var = 0);
                cpy[((int*)&((*out).busy[7].var) - (int*)&(*out))] = 0;
                ((*out).objscheduled.var = 0);
                cpy[((int*)&((*out).objscheduled.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                system_in_deadlock = false;
                transition_info.group = 49;
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
    return 34;
}

extern "C" const char* get_state_variable_name(int var)
{
    switch (var)
    {
        case 0:
            return "temperature[0]";
        case 1:
            return "temperature[1]";
        case 2:
            return "temperature[2]";
        case 3:
            return "temperature[3]";
        case 4:
            return "surface[0]";
        case 5:
            return "surface[1]";
        case 6:
            return "surface[2]";
        case 7:
            return "surface[3]";
        case 8:
            return "shape[0]";
        case 9:
            return "shape[1]";
        case 10:
            return "shape[2]";
        case 11:
            return "shape[3]";
        case 12:
            return "painted[0]";
        case 13:
            return "painted[1]";
        case 14:
            return "painted[2]";
        case 15:
            return "painted[3]";
        case 16:
            return "hashole[0]";
        case 17:
            return "hashole[1]";
        case 18:
            return "hashole[2]";
        case 19:
            return "hashole[3]";
        case 20:
            return "busy[0]";
        case 21:
            return "busy[1]";
        case 22:
            return "busy[2]";
        case 23:
            return "busy[3]";
        case 24:
            return "busy[4]";
        case 25:
            return "busy[5]";
        case 26:
            return "busy[6]";
        case 27:
            return "busy[7]";
        case 28:
            return "scheduled[0]";
        case 29:
            return "scheduled[1]";
        case 30:
            return "scheduled[2]";
        case 31:
            return "scheduled[3]";
        case 32:
            return "objscheduled";
        case 33:
            return "P";
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
            return 0;
        case 22:
            return 0;
        case 23:
            return 0;
        case 24:
            return 0;
        case 25:
            return 0;
        case 26:
            return 0;
        case 27:
            return 0;
        case 28:
            return 0;
        case 29:
            return 0;
        case 30:
            return 0;
        case 31:
            return 0;
        case 32:
            return 0;
        case 33:
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
            return "P";
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
        case 1: // P
            return 2;
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
                    return "q";
                case 1:
                    return "done";
            }
        }
    }
    return NULL;
}

int transition_dependency[][3][34] = 
{
    // { ... read ...}, { ... may-write ...}, { ... must-write ...}
    {{0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1}},
    {{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1}},
    {{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1},{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,1},{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,1},{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1},{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,1,1},{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1},{0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,1,1},{0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1},{0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1},{0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,1},{0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1},{0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1},{0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1},{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1}},
    {{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1}},
    {{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1}},
    {{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1},{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1}},
    {{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1},{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1}},
    {{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1}},
    {{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1}},
    {{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1}},
    {{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1}},
    {{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1}},
    {{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1}},
    {{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1}},
    {{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1}}
}
;

int actions_read[][34] = 
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
}
;

extern "C" int get_transition_count() 
{
    return 50;
}

extern "C" const int* get_transition_read_dependencies(int t) 
{
    if (t>=0 && t < 50) return transition_dependency[t][0];
    return NULL;
}

extern "C" const int* get_transition_actions_read_dependencies(int t) 
{
    if (t>=0 && t < 50) return actions_read[t];
    return NULL;
}

extern "C" const int* get_transition_may_write_dependencies(int t) 
{
    if (t>=0 && t < 50) return transition_dependency[t][1];
    return NULL;
}

extern "C" const int* get_transition_write_dependencies(int t) 
{
    return get_transition_may_write_dependencies(t);
}

extern "C" const int* get_transition_must_write_dependencies(int t) 
{
    if (t>=0 && t < 50) return transition_dependency[t][2];
    return NULL;
}

extern "C" int get_active( state_struct_t *in, int t ) 
{
    switch(t)
    {
        case 0: return (((*in).P.state.var == 0));
        case 1: return (((*in).P.state.var == 0));
        case 2: return (((*in).P.state.var == 0));
        case 3: return (((*in).P.state.var == 0));
        case 4: return (((*in).P.state.var == 0));
        case 5: return (((*in).P.state.var == 0));
        case 6: return (((*in).P.state.var == 0));
        case 7: return (((*in).P.state.var == 0));
        case 8: return (((*in).P.state.var == 0));
        case 9: return (((*in).P.state.var == 0));
        case 10: return (((*in).P.state.var == 0));
        case 11: return (((*in).P.state.var == 0));
        case 12: return (((*in).P.state.var == 0));
        case 13: return (((*in).P.state.var == 0));
        case 14: return (((*in).P.state.var == 0));
        case 15: return (((*in).P.state.var == 0));
        case 16: return (((*in).P.state.var == 0));
        case 17: return (((*in).P.state.var == 0));
        case 18: return (((*in).P.state.var == 0));
        case 19: return (((*in).P.state.var == 0));
        case 20: return (((*in).P.state.var == 0));
        case 21: return (((*in).P.state.var == 0));
        case 22: return (((*in).P.state.var == 0));
        case 23: return (((*in).P.state.var == 0));
        case 24: return (((*in).P.state.var == 0));
        case 25: return (((*in).P.state.var == 0));
        case 26: return (((*in).P.state.var == 0));
        case 27: return (((*in).P.state.var == 0));
        case 28: return (((*in).P.state.var == 0));
        case 29: return (((*in).P.state.var == 0));
        case 30: return (((*in).P.state.var == 0));
        case 31: return (((*in).P.state.var == 0));
        case 32: return (((*in).P.state.var == 0));
        case 33: return (((*in).P.state.var == 0));
        case 34: return (((*in).P.state.var == 0));
        case 35: return (((*in).P.state.var == 0));
        case 36: return (((*in).P.state.var == 0));
        case 37: return (((*in).P.state.var == 0));
        case 38: return (((*in).P.state.var == 0));
        case 39: return (((*in).P.state.var == 0));
        case 40: return (((*in).P.state.var == 0));
        case 41: return (((*in).P.state.var == 0));
        case 42: return (((*in).P.state.var == 0));
        case 43: return (((*in).P.state.var == 0));
        case 44: return (((*in).P.state.var == 0));
        case 45: return (((*in).P.state.var == 0));
        case 46: return (((*in).P.state.var == 0));
        case 47: return (((*in).P.state.var == 0));
        case 48: return (((*in).P.state.var == 0));
        case 49: return (((*in).P.state.var == 0));
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
        case 21: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 22: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 23: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 24: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 25: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 26: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 27: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 28: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 29: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 30: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 31: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 32: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 33: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 34: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 35: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 36: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 37: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 38: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 39: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 40: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 41: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 42: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 43: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 44: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 45: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 46: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 47: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 48: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 49: *pid0 = 0; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
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
            case 0: return (((*src).P.state.var == 0));
            case 1: return (((*src).shape[wrapped_index(1, 4, &jbuf)].var == 1));
            case 2: return (((*src).surface[wrapped_index(0, 4, &jbuf)].var == 0));
            case 3: return (((*src).surface[wrapped_index(1, 4, &jbuf)].var == 0));
            case 4: return (((*src).hashole[wrapped_index(1, 4, &jbuf)].var == 1));
            case 5: return (((*src).shape[wrapped_index(0, 4, &jbuf)].var == 0));
            case 6: return (((*src).busy[wrapped_index(0, 8, &jbuf)].var == 0));
            case 7: return (((*src).scheduled[wrapped_index(0, 4, &jbuf)].var == 0));
            case 8: return (((*src).temperature[wrapped_index(0, 4, &jbuf)].var == 0));
            case 9: return (((*src).scheduled[wrapped_index(1, 4, &jbuf)].var == 0));
            case 10: return (((*src).temperature[wrapped_index(1, 4, &jbuf)].var == 0));
            case 11: return (((*src).scheduled[wrapped_index(2, 4, &jbuf)].var == 0));
            case 12: return (((*src).temperature[wrapped_index(2, 4, &jbuf)].var == 0));
            case 13: return (((*src).scheduled[wrapped_index(3, 4, &jbuf)].var == 0));
            case 14: return (((*src).temperature[wrapped_index(3, 4, &jbuf)].var == 0));
            case 15: return (((*src).busy[wrapped_index(1, 8, &jbuf)].var == 0));
            case 16: return (((*src).busy[wrapped_index(2, 8, &jbuf)].var == 0));
            case 17: return (((*src).busy[wrapped_index(3, 8, &jbuf)].var == 0));
            case 18: return (((*src).busy[wrapped_index(4, 8, &jbuf)].var == 0));
            case 19: return (((*src).hashole[wrapped_index(0, 4, &jbuf)].var != 0));
            case 20: return (((*src).hashole[wrapped_index(1, 4, &jbuf)].var != 0));
            case 21: return (((*src).hashole[wrapped_index(2, 4, &jbuf)].var != 0));
            case 22: return (((*src).hashole[wrapped_index(3, 4, &jbuf)].var != 0));
            case 23: return (((*src).hashole[wrapped_index(0, 4, &jbuf)].var != 1));
            case 24: return (((*src).hashole[wrapped_index(1, 4, &jbuf)].var != 1));
            case 25: return (((*src).hashole[wrapped_index(2, 4, &jbuf)].var != 1));
            case 26: return (((*src).hashole[wrapped_index(3, 4, &jbuf)].var != 1));
            case 27: return (((*src).busy[wrapped_index(5, 8, &jbuf)].var == 0));
            case 28: return (((*src).busy[wrapped_index(6, 8, &jbuf)].var == 0));
            case 29: return (((*src).busy[wrapped_index(7, 8, &jbuf)].var == 0));
            case 30: return (((*src).objscheduled.var == 1));
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
}

extern "C" const int get_guard_count() 
{
    return 31;
}

int* guards_per_transition[50] = 
{
    ((int[]){6, 0, 1, 2, 3, 4, 5}), // 0
    ((int[]){4, 0, 6, 7, 8}), // 1
    ((int[]){4, 0, 6, 9, 10}), // 2
    ((int[]){4, 0, 6, 11, 12}), // 3
    ((int[]){4, 0, 6, 13, 14}), // 4
    ((int[]){3, 0, 15, 7}), // 5
    ((int[]){3, 0, 15, 9}), // 6
    ((int[]){3, 0, 15, 11}), // 7
    ((int[]){3, 0, 15, 13}), // 8
    ((int[]){3, 0, 16, 7}), // 9
    ((int[]){3, 0, 16, 9}), // 10
    ((int[]){3, 0, 16, 11}), // 11
    ((int[]){3, 0, 16, 13}), // 12
    ((int[]){3, 0, 17, 7}), // 13
    ((int[]){3, 0, 17, 9}), // 14
    ((int[]){3, 0, 17, 11}), // 15
    ((int[]){3, 0, 17, 13}), // 16
    ((int[]){5, 0, 18, 7, 8, 19}), // 17
    ((int[]){5, 0, 18, 9, 10, 20}), // 18
    ((int[]){5, 0, 18, 11, 12, 21}), // 19
    ((int[]){5, 0, 18, 13, 14, 22}), // 20
    ((int[]){5, 0, 18, 7, 8, 23}), // 21
    ((int[]){5, 0, 18, 9, 10, 24}), // 22
    ((int[]){5, 0, 18, 11, 12, 25}), // 23
    ((int[]){5, 0, 18, 13, 14, 26}), // 24
    ((int[]){5, 0, 27, 7, 8, 19}), // 25
    ((int[]){5, 0, 27, 9, 10, 20}), // 26
    ((int[]){5, 0, 27, 11, 12, 21}), // 27
    ((int[]){5, 0, 27, 13, 14, 22}), // 28
    ((int[]){5, 0, 27, 7, 8, 23}), // 29
    ((int[]){5, 0, 27, 9, 10, 24}), // 30
    ((int[]){5, 0, 27, 11, 12, 25}), // 31
    ((int[]){5, 0, 27, 13, 14, 26}), // 32
    ((int[]){4, 0, 28, 7, 8}), // 33
    ((int[]){4, 0, 28, 9, 10}), // 34
    ((int[]){4, 0, 28, 11, 12}), // 35
    ((int[]){4, 0, 28, 13, 14}), // 36
    ((int[]){4, 0, 28, 7, 8}), // 37
    ((int[]){4, 0, 28, 9, 10}), // 38
    ((int[]){4, 0, 28, 11, 12}), // 39
    ((int[]){4, 0, 28, 13, 14}), // 40
    ((int[]){3, 0, 29, 7}), // 41
    ((int[]){3, 0, 29, 9}), // 42
    ((int[]){3, 0, 29, 11}), // 43
    ((int[]){3, 0, 29, 13}), // 44
    ((int[]){3, 0, 29, 7}), // 45
    ((int[]){3, 0, 29, 9}), // 46
    ((int[]){3, 0, 29, 11}), // 47
    ((int[]){3, 0, 29, 13}), // 48
    ((int[]){2, 0, 30}), // 49
}
;

extern "C" const int* get_guards(int t) 
{
    if (t>=0 && t < 50) return guards_per_transition[t];
    return NULL;
}

extern "C" const int** get_all_guards() 
{
    return (const int**)&guards_per_transition;
}

int guard[][34] = 
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}
}
;

extern "C" const int* get_guard_matrix(int g) 
{
    if (g>=0 && g < 31) return guard[g];
    return NULL;
}

int guardmaybecoenabled[31][31] = 
{
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_may_be_coenabled_matrix(int g) 
{
    if (g>=0 && g < 31) return guardmaybecoenabled[g];
    return NULL;
}

int guard_nes[31][50] = 
{
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_nes_matrix(int g) 
{
    if (g>=0 && g < 31) return guard_nes[g];
    return NULL;
}

int guard_nds[31][50] = 
{
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_nds_matrix(int g) 
{
    if (g>=0 && g < 31) return guard_nds[g];
    return NULL;
}

int dna[50][50] = 
{
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_dna_matrix(int t) 
{
    if (t >= 0 && t < 50) return dna[t];
    return NULL;
}

