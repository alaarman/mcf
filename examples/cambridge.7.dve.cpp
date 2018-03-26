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
        sshort_int_t n;
        sshort_int_t m;
    }
    __attribute__((__packed__)) Sender;
    struct
    {
        ushort_int_t state;
        sshort_int_t n;
        sshort_int_t m;
    }
    __attribute__((__packed__)) Receiver;
    struct
    {
        ushort_int_t state;
        byte_t buf[20];
        byte_t buf_act;
        byte_t n;
    }
    __attribute__((__packed__)) StoR;
    struct
    {
        ushort_int_t state;
        byte_t buf[20];
        byte_t buf_act;
        byte_t n;
    }
    __attribute__((__packed__)) RtoS;
}
__attribute__((__packed__));
int state_size = sizeof(state_struct_t);

state_struct_t initial_state = { 0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

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
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 1;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l1: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
        cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 6;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l2: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
        cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 9;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l3: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
        cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 2;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l4: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
        cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 2;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l5: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 0;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        ((*out).Sender.n.var = -1);
        cpy[((int*)&((*out).Sender.n.var) - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l6: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 1;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l7: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
        cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 8;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l8: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 1;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l9: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
        cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 7;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l10: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
        cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 7;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l11: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 0;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l12: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 10;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l13: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 3;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        ((*out).Sender.n.var = ((*out).Sender.n.var + 1) % 4);
        cpy[((int*)&((*out).Sender.n.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l14: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 10;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l15: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 3;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        ((*out).Sender.n.var = ((*out).Sender.n.var + 1) % 4);
        cpy[((int*)&((*out).Sender.n.var) - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l16: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Sender.state.var = 10;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l17: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 1;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l18: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
        cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 6;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l19: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
        cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 9;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l20: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
        cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 2;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l21: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
        cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 2;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l22: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 0;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        ((*out).Receiver.n.var = 0);
        cpy[((int*)&((*out).Receiver.n.var) - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l23: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 1;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l24: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
        cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 8;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l25: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 1;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l26: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
        cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 7;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l27: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
        cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 11;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l28: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 0;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l29: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 10;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l30: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 3;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        ((*out).Receiver.n.var = ((*out).Receiver.n.var + 1) % 4);
        cpy[((int*)&((*out).Receiver.n.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l31: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 4;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l32: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 3;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        ((*out).Receiver.n.var = ((*out).Receiver.n.var + 1) % 4);
        cpy[((int*)&((*out).Receiver.n.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l33: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 10;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l34: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 0;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l35: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Receiver.state.var = 10;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l36: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 0);
        cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 2;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l37: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 0);
        cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 0;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        ((*out).Sender.n.var = -1);
        cpy[((int*)&((*out).Sender.n.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l38: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 0);
        cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 2;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l39: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 0);
        cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 2;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l40: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).StoR.n.var) = ((*in).Sender.n.var);
        cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 3 + 8 * (*out).StoR.n.var);
        cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 5;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l41: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).StoR.n.var) = ((*in).Sender.n.var);
        cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 3 + 8 * (*out).StoR.n.var);
        cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 5;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l42: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).StoR.n.var) = ((*in).Sender.n.var);
        cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 3 + 8 * (*out).StoR.n.var);
        cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 4;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l43: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).StoR.n.var) = ((*in).Sender.n.var);
        cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 3 + 8 * (*out).StoR.n.var);
        cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 5;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l44: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).StoR.n.var) = ((*in).Sender.n.var);
        cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 4 + 8 * (*out).StoR.n.var);
        cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Sender.state.var = 4;
        cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l45: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).StoR.state.var = 0;
        cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
        ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
        cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
        cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
        cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
        cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
        cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
        cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
        cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
        cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
        cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
        cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
        cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
        cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
        cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
        cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
        cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
        cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
        cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
        cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
        cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf[19].var = 0);
        cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
        cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // must-write:   0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l46: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 0);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 2;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l47: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 0);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 0;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        ((*out).Receiver.n.var = 0);
        cpy[((int*)&((*out).Receiver.n.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l48: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 0);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 2;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l49: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 0);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 2;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l50: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
        cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 5;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l51: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
        cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 5;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l52: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
        cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 5;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l53: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
        cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 5;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l54: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
        cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 5;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l55: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
        cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 2 + 8 * (*out).RtoS.n.var);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 4;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l56: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
        cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 2 + 8 * (*out).RtoS.n.var);
        cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        (*out).Receiver.state.var = 4;
        cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l57: {
        *out = *in;
        int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).RtoS.state.var = 0;
        cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
        cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
        cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
        cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
        cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
        cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
        cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
        cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
        cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
        cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
        cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
        cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
        cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
        cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
        cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
        cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
        cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
        cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
        cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
        cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf[19].var = 0);
        cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
        ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
        cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
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
        default: printf ("Wrong group! Using greybox/long call + -l (DiVinE LTL semantics)? This combo is not implemented."); exit (-1);
    }
    return 0;
}

extern "C" int get_successor( void* model, int t, const state_struct_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_struct_t *out, int *cpy), void *arg ) 
{
    int states_emitted = 0;
    goto switch_state;
    l0: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 0) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l1: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 0) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l2: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 0) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l3: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 2) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l4: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 2) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l5: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 2) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l6: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 4) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l7: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 4) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l8: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 5) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l9: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 5) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 2) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l10: {
        
        // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).Sender.state.var == 5) )  &&  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l11: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Sender.state.var == 6) )  &&  ( ((*in).Sender.m.var == ((*in).Sender.n.var + 1) % 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l12: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Sender.state.var == 6) )  &&  ( ((*in).Sender.m.var != ((*in).Sender.n.var + 1) % 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l13: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Sender.state.var == 7) )  &&  ( ((*in).Sender.m.var == ((*in).Sender.n.var + 1) % 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l14: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Sender.state.var == 8) )  &&  ( ((*in).Sender.m.var != (*in).Sender.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l15: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Sender.state.var == 9) )  &&  ( ((*in).Sender.m.var == ((*in).Sender.n.var + 1) % 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l16: {
        
        // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Sender.state.var == 9) )  &&  ( ((*in).Sender.m.var != ((*in).Sender.n.var + 1) % 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l17: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 0) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l18: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 0) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l19: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 0) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l20: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 2) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l21: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 2) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l22: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 2) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l23: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 4) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l24: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 4) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l25: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 5) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l26: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 5) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l27: {
        
        // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 5) )  &&  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l28: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 6) )  &&  ( ((*in).Receiver.m.var == (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l29: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 6) )  &&  ( ((*in).Receiver.m.var != (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l30: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 7) )  &&  ( ((*in).Receiver.m.var == (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l31: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 8) )  &&  ( (((*in).Receiver.m.var + 1) % 4 != (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l32: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 9) )  &&  ( ((*in).Receiver.m.var == (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l33: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 9) )  &&  ( ((*in).Receiver.m.var != (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l34: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 11) )  &&  ( ((*in).Receiver.m.var == (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l35: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Receiver.state.var == 11) )  &&  ( ((*in).Receiver.m.var != (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l36: {
        
        // read:         1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l37: {
        
        // read:         1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l38: {
        
        // read:         1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l39: {
        
        // read:         1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l40: {
        
        // read:         1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l41: {
        
        // read:         1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l42: {
        
        // read:         1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 8) )  &&  ( ((*in).Sender.m.var == (*in).Sender.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l43: {
        
        // read:         1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 7) )  &&  ( ((*in).Sender.m.var == (*in).Sender.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l44: {
        
        // read:         1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l45: {
        
        // read:         0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) )) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l46: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l47: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l48: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l49: {
        
        // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l50: {
        
        // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l51: {
        
        // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l52: {
        
        // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 4) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l53: {
        
        // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 5) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l54: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 7) )  &&  ( (((*in).Receiver.m.var + 1) % 4 == (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l55: {
        
        // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 3) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l56: {
        
        // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 8) )  &&  ( (((*in).Receiver.m.var + 1) % 4 == (*in).Receiver.n.var) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l57: {
        
        // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) )) ) )
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
    int cpy[52] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, };
    if ( false )
    {
        ;
    }
    else
    {
        if (  ( ((*in).Sender.state.var == 0) ) )
        {
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 1;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 0;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 2) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
                cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 6;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 1;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 1) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
                cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 9;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 2;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Sender.state.var == 2) ) )
        {
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 2) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
                cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 2;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 3;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 1) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
                cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 2;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 4;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 0;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                ((*out).Sender.n.var = -1);
                cpy[((int*)&((*out).Sender.n.var) - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 5;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Sender.state.var == 4) ) )
        {
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 1;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 6;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 1) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
                cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 8;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 7;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Sender.state.var == 5) ) )
        {
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 1;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 8;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 2) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
                cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 7;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 9;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ((*in).RtoS.state.var == 0) )  &&  ( ( ! (((*in).RtoS.buf_act.var == 0) ) && (*in).RtoS.buf[0].var % 8 == 1) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Sender.m.var) = (((*in).RtoS.buf[0].var / 8));
                cpy[((int*)&((*out).Sender.m.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 7;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 10;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Sender.state.var == 6) ) )
        {
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Sender.m.var == ((*in).Sender.n.var + 1) % 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 0;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 11;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Sender.m.var != ((*in).Sender.n.var + 1) % 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 10;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 12;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Sender.state.var == 7) ) )
        {
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Sender.m.var == ((*in).Sender.n.var + 1) % 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 3;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                ((*out).Sender.n.var = ((*out).Sender.n.var + 1) % 4);
                cpy[((int*)&((*out).Sender.n.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 13;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Sender.state.var == 8) ) )
        {
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Sender.m.var != (*in).Sender.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 10;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 14;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Sender.state.var == 9) ) )
        {
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Sender.m.var == ((*in).Sender.n.var + 1) % 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 3;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                ((*out).Sender.n.var = ((*out).Sender.n.var + 1) % 4);
                cpy[((int*)&((*out).Sender.n.var) - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 15;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Sender.m.var != ((*in).Sender.n.var + 1) % 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Sender.state.var = 10;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 16;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Receiver.state.var == 0) ) )
        {
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 1;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 17;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
                cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 6;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 18;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 3) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
                cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 9;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 19;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Receiver.state.var == 2) ) )
        {
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 3) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
                cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 2;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 20;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
                cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 2;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 21;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 0;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                ((*out).Receiver.n.var = 0);
                cpy[((int*)&((*out).Receiver.n.var) - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 22;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Receiver.state.var == 4) ) )
        {
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 1;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 23;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 3) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
                cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 8;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 24;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Receiver.state.var == 5) ) )
        {
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 1;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 25;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 3) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
                cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 7;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 26;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).StoR.state.var == 0) )  &&  ( ( ! (((*in).StoR.buf_act.var == 0) ) && (*in).StoR.buf[0].var % 8 == 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).Receiver.m.var) = (((*in).StoR.buf[0].var / 8));
                cpy[((int*)&((*out).Receiver.m.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 11;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 27;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Receiver.state.var == 6) ) )
        {
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Receiver.m.var == (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 0;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 28;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Receiver.m.var != (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 10;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 29;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Receiver.state.var == 7) ) )
        {
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Receiver.m.var == (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 3;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                ((*out).Receiver.n.var = ((*out).Receiver.n.var + 1) % 4);
                cpy[((int*)&((*out).Receiver.n.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 30;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Receiver.state.var == 8) ) )
        {
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( (((*in).Receiver.m.var + 1) % 4 != (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 4;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 31;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Receiver.state.var == 9) ) )
        {
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Receiver.m.var == (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 3;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                ((*out).Receiver.n.var = ((*out).Receiver.n.var + 1) % 4);
                cpy[((int*)&((*out).Receiver.n.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 32;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Receiver.m.var != (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 10;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 33;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Receiver.state.var == 11) ) )
        {
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Receiver.m.var == (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 0;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 34;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).Receiver.m.var != (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Receiver.state.var = 10;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 35;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).StoR.state.var == 0) ) )
        {
            
            // read:         1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 0);
                cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 2;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 36;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 1) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 0);
                cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 0;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                ((*out).Sender.n.var = -1);
                cpy[((int*)&((*out).Sender.n.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 37;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 0);
                cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 2;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 38;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 5) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 0);
                cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 2;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 39;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 3) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).StoR.n.var) = ((*in).Sender.n.var);
                cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 3 + 8 * (*out).StoR.n.var);
                cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 5;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 40;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).StoR.n.var) = ((*in).Sender.n.var);
                cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 3 + 8 * (*out).StoR.n.var);
                cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 5;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 41;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 8) )  &&  ( ((*in).Sender.m.var == (*in).Sender.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).StoR.n.var) = ((*in).Sender.n.var);
                cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 3 + 8 * (*out).StoR.n.var);
                cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 4;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 42;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 7) )  &&  ( ((*in).Sender.m.var == (*in).Sender.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).StoR.n.var) = ((*in).Sender.n.var);
                cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 3 + 8 * (*out).StoR.n.var);
                cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 5;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 43;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 20) )) )  &&  ( ((*in).Sender.state.var == 3) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).StoR.n.var) = ((*in).Sender.n.var);
                cpy[((int*)&((*out).StoR.n.var) - (int*)&(*out))] = 0;
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[(*out).StoR.buf_act.var].var = 4 + 8 * (*out).StoR.n.var);
                cpy[((int*)&((*out).StoR.buf[(*out).StoR.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var + 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Sender.state.var = 4;
                cpy[((int*)&(*out).Sender.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 44;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ( ! (((*in).StoR.buf_act.var == 0) )) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).StoR.state.var = 0;
                cpy[((int*)&(*out).StoR.state.var - (int*)&(*out))] = 0;
                ((*out).StoR.buf[0].var = (*out).StoR.buf[1].var);
                cpy[((int*)&((*out).StoR.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[1].var = (*out).StoR.buf[2].var);
                cpy[((int*)&((*out).StoR.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[2].var = (*out).StoR.buf[3].var);
                cpy[((int*)&((*out).StoR.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[3].var = (*out).StoR.buf[4].var);
                cpy[((int*)&((*out).StoR.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[4].var = (*out).StoR.buf[5].var);
                cpy[((int*)&((*out).StoR.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[5].var = (*out).StoR.buf[6].var);
                cpy[((int*)&((*out).StoR.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[6].var = (*out).StoR.buf[7].var);
                cpy[((int*)&((*out).StoR.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[7].var = (*out).StoR.buf[8].var);
                cpy[((int*)&((*out).StoR.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[8].var = (*out).StoR.buf[9].var);
                cpy[((int*)&((*out).StoR.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[9].var = (*out).StoR.buf[10].var);
                cpy[((int*)&((*out).StoR.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[10].var = (*out).StoR.buf[11].var);
                cpy[((int*)&((*out).StoR.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[11].var = (*out).StoR.buf[12].var);
                cpy[((int*)&((*out).StoR.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[12].var = (*out).StoR.buf[13].var);
                cpy[((int*)&((*out).StoR.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[13].var = (*out).StoR.buf[14].var);
                cpy[((int*)&((*out).StoR.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[14].var = (*out).StoR.buf[15].var);
                cpy[((int*)&((*out).StoR.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[15].var = (*out).StoR.buf[16].var);
                cpy[((int*)&((*out).StoR.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[16].var = (*out).StoR.buf[17].var);
                cpy[((int*)&((*out).StoR.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[17].var = (*out).StoR.buf[18].var);
                cpy[((int*)&((*out).StoR.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[18].var = (*out).StoR.buf[19].var);
                cpy[((int*)&((*out).StoR.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf[19].var = 0);
                cpy[((int*)&((*out).StoR.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).StoR.buf_act.var = (*out).StoR.buf_act.var - 1);
                cpy[((int*)&((*out).StoR.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // must-write:   0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                system_in_deadlock = false;
                transition_info.group = 45;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).RtoS.state.var == 0) ) )
        {
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 0);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 2;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 46;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 1) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 0);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 0;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                ((*out).Receiver.n.var = 0);
                cpy[((int*)&((*out).Receiver.n.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 47;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 0);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 2;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 48;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 5) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 0);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 2;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0
                system_in_deadlock = false;
                transition_info.group = 49;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 0) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
                cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 5;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 50;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 3) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
                cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 5;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 51;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 4) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
                cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 5;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 52;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 5) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
                cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 5;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 53;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 7) )  &&  ( (((*in).Receiver.m.var + 1) % 4 == (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
                cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 1 + 8 * (*out).RtoS.n.var);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 5;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 54;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 3) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
                cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 2 + 8 * (*out).RtoS.n.var);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 4;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 55;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
            if (  ( ( ! (((*in).RtoS.buf_act.var == 20) )) )  &&  ( ((*in).Receiver.state.var == 8) )  &&  ( (((*in).Receiver.m.var + 1) % 4 == (*in).Receiver.n.var) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                ((*out).RtoS.n.var) = ((*in).Receiver.n.var);
                cpy[((int*)&((*out).RtoS.n.var) - (int*)&(*out))] = 0;
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[(*out).RtoS.buf_act.var].var = 2 + 8 * (*out).RtoS.n.var);
                cpy[((int*)&((*out).RtoS.buf[(*out).RtoS.buf_act.var].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var + 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                (*out).Receiver.state.var = 4;
                cpy[((int*)&(*out).Receiver.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                // may-write:    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                // must-write:   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1
                system_in_deadlock = false;
                transition_info.group = 56;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            if (  ( ( ! (((*in).RtoS.buf_act.var == 0) )) ) )
            {
                *out = *in;
                int cpy[52] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).RtoS.state.var = 0;
                cpy[((int*)&(*out).RtoS.state.var - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[0].var = (*out).RtoS.buf[1].var);
                cpy[((int*)&((*out).RtoS.buf[0].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[1].var = (*out).RtoS.buf[2].var);
                cpy[((int*)&((*out).RtoS.buf[1].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[2].var = (*out).RtoS.buf[3].var);
                cpy[((int*)&((*out).RtoS.buf[2].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[3].var = (*out).RtoS.buf[4].var);
                cpy[((int*)&((*out).RtoS.buf[3].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[4].var = (*out).RtoS.buf[5].var);
                cpy[((int*)&((*out).RtoS.buf[4].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[5].var = (*out).RtoS.buf[6].var);
                cpy[((int*)&((*out).RtoS.buf[5].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[6].var = (*out).RtoS.buf[7].var);
                cpy[((int*)&((*out).RtoS.buf[6].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[7].var = (*out).RtoS.buf[8].var);
                cpy[((int*)&((*out).RtoS.buf[7].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[8].var = (*out).RtoS.buf[9].var);
                cpy[((int*)&((*out).RtoS.buf[8].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[9].var = (*out).RtoS.buf[10].var);
                cpy[((int*)&((*out).RtoS.buf[9].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[10].var = (*out).RtoS.buf[11].var);
                cpy[((int*)&((*out).RtoS.buf[10].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[11].var = (*out).RtoS.buf[12].var);
                cpy[((int*)&((*out).RtoS.buf[11].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[12].var = (*out).RtoS.buf[13].var);
                cpy[((int*)&((*out).RtoS.buf[12].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[13].var = (*out).RtoS.buf[14].var);
                cpy[((int*)&((*out).RtoS.buf[13].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[14].var = (*out).RtoS.buf[15].var);
                cpy[((int*)&((*out).RtoS.buf[14].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[15].var = (*out).RtoS.buf[16].var);
                cpy[((int*)&((*out).RtoS.buf[15].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[16].var = (*out).RtoS.buf[17].var);
                cpy[((int*)&((*out).RtoS.buf[16].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[17].var = (*out).RtoS.buf[18].var);
                cpy[((int*)&((*out).RtoS.buf[17].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[18].var = (*out).RtoS.buf[19].var);
                cpy[((int*)&((*out).RtoS.buf[18].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf[19].var = 0);
                cpy[((int*)&((*out).RtoS.buf[19].var) - (int*)&(*out))] = 0;
                ((*out).RtoS.buf_act.var = (*out).RtoS.buf_act.var - 1);
                cpy[((int*)&((*out).RtoS.buf_act.var) - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
                system_in_deadlock = false;
                transition_info.group = 57;
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
    return 52;
}

extern "C" const char* get_state_variable_name(int var)
{
    switch (var)
    {
        case 0:
            return "Sender";
        case 1:
            return "Sender.n";
        case 2:
            return "Sender.m";
        case 3:
            return "Receiver";
        case 4:
            return "Receiver.n";
        case 5:
            return "Receiver.m";
        case 6:
            return "StoR";
        case 7:
            return "StoR.buf[0]";
        case 8:
            return "StoR.buf[1]";
        case 9:
            return "StoR.buf[2]";
        case 10:
            return "StoR.buf[3]";
        case 11:
            return "StoR.buf[4]";
        case 12:
            return "StoR.buf[5]";
        case 13:
            return "StoR.buf[6]";
        case 14:
            return "StoR.buf[7]";
        case 15:
            return "StoR.buf[8]";
        case 16:
            return "StoR.buf[9]";
        case 17:
            return "StoR.buf[10]";
        case 18:
            return "StoR.buf[11]";
        case 19:
            return "StoR.buf[12]";
        case 20:
            return "StoR.buf[13]";
        case 21:
            return "StoR.buf[14]";
        case 22:
            return "StoR.buf[15]";
        case 23:
            return "StoR.buf[16]";
        case 24:
            return "StoR.buf[17]";
        case 25:
            return "StoR.buf[18]";
        case 26:
            return "StoR.buf[19]";
        case 27:
            return "StoR.buf_act";
        case 28:
            return "StoR.n";
        case 29:
            return "RtoS";
        case 30:
            return "RtoS.buf[0]";
        case 31:
            return "RtoS.buf[1]";
        case 32:
            return "RtoS.buf[2]";
        case 33:
            return "RtoS.buf[3]";
        case 34:
            return "RtoS.buf[4]";
        case 35:
            return "RtoS.buf[5]";
        case 36:
            return "RtoS.buf[6]";
        case 37:
            return "RtoS.buf[7]";
        case 38:
            return "RtoS.buf[8]";
        case 39:
            return "RtoS.buf[9]";
        case 40:
            return "RtoS.buf[10]";
        case 41:
            return "RtoS.buf[11]";
        case 42:
            return "RtoS.buf[12]";
        case 43:
            return "RtoS.buf[13]";
        case 44:
            return "RtoS.buf[14]";
        case 45:
            return "RtoS.buf[15]";
        case 46:
            return "RtoS.buf[16]";
        case 47:
            return "RtoS.buf[17]";
        case 48:
            return "RtoS.buf[18]";
        case 49:
            return "RtoS.buf[19]";
        case 50:
            return "RtoS.buf_act";
        case 51:
            return "RtoS.n";
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
            return 1;
        case 3:
            return 2;
        case 4:
            return 1;
        case 5:
            return 1;
        case 6:
            return 3;
        case 7:
            return 4;
        case 8:
            return 4;
        case 9:
            return 4;
        case 10:
            return 4;
        case 11:
            return 4;
        case 12:
            return 4;
        case 13:
            return 4;
        case 14:
            return 4;
        case 15:
            return 4;
        case 16:
            return 4;
        case 17:
            return 4;
        case 18:
            return 4;
        case 19:
            return 4;
        case 20:
            return 4;
        case 21:
            return 4;
        case 22:
            return 4;
        case 23:
            return 4;
        case 24:
            return 4;
        case 25:
            return 4;
        case 26:
            return 4;
        case 27:
            return 4;
        case 28:
            return 4;
        case 29:
            return 5;
        case 30:
            return 4;
        case 31:
            return 4;
        case 32:
            return 4;
        case 33:
            return 4;
        case 34:
            return 4;
        case 35:
            return 4;
        case 36:
            return 4;
        case 37:
            return 4;
        case 38:
            return 4;
        case 39:
            return 4;
        case 40:
            return 4;
        case 41:
            return 4;
        case 42:
            return 4;
        case 43:
            return 4;
        case 44:
            return 4;
        case 45:
            return 4;
        case 46:
            return 4;
        case 47:
            return 4;
        case 48:
            return 4;
        case 49:
            return 4;
        case 50:
            return 4;
        case 51:
            return 4;
        default:
            return -1;
    }
}

extern "C" int get_state_variable_type_count() 
{
    return 6;
}

extern "C" const char* get_state_variable_type_name(int type) 
{
    switch (type)
    {
        case 2:
            return "Receiver";
        case 5:
            return "RtoS";
        case 0:
            return "Sender";
        case 3:
            return "StoR";
        case 4:
            return "byte";
        case 1:
            return "int";
        default:
            return NULL;
    }
}

extern "C" int get_state_variable_type_value_count(int type)
{
    switch (type)
    {
        case 2: // Receiver
            return 12;
        case 5: // RtoS
            return 1;
        case 0: // Sender
            return 11;
        case 3: // StoR
            return 1;
        case 4: // byte
            return 0;
        case 1: // int
            return 0;
        default:
            return -1;
    }
}

extern "C" const char* get_state_variable_type_value(int type, int value) 
{
    switch (type)
    {
        case 2:
        {
            switch (value)
            {
                case 0:
                    return "idle";
                case 1:
                    return "ack_reset";
                case 2:
                    return "reset";
                case 3:
                    return "advance";
                case 4:
                    return "N";
                case 5:
                    return "E";
                case 6:
                    return "q_i";
                case 7:
                    return "q_e";
                case 8:
                    return "q_n";
                case 9:
                    return "q_a";
                case 10:
                    return "q_error";
                case 11:
                    return "q_e2";
            }
        }
        case 5:
        {
            switch (value)
            {
                case 0:
                    return "q";
            }
        }
        case 0:
        {
            switch (value)
            {
                case 0:
                    return "idle";
                case 1:
                    return "ack_reset";
                case 2:
                    return "reset";
                case 3:
                    return "advance";
                case 4:
                    return "N";
                case 5:
                    return "E";
                case 6:
                    return "q_i";
                case 7:
                    return "q_e";
                case 8:
                    return "q_n";
                case 9:
                    return "q_a";
                case 10:
                    return "q_error";
            }
        }
        case 3:
        {
            switch (value)
            {
                case 0:
                    return "q";
            }
        }
    }
    return NULL;
}

int transition_dependency[][3][52] = 
{
    // { ... read ...}, { ... may-write ...}, { ... must-write ...}
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}},
    {{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}},
    {{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}},
    {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}}
}
;

int actions_read[][52] = 
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}
}
;

extern "C" int get_transition_count() 
{
    return 58;
}

extern "C" const int* get_transition_read_dependencies(int t) 
{
    if (t>=0 && t < 58) return transition_dependency[t][0];
    return NULL;
}

extern "C" const int* get_transition_actions_read_dependencies(int t) 
{
    if (t>=0 && t < 58) return actions_read[t];
    return NULL;
}

extern "C" const int* get_transition_may_write_dependencies(int t) 
{
    if (t>=0 && t < 58) return transition_dependency[t][1];
    return NULL;
}

extern "C" const int* get_transition_write_dependencies(int t) 
{
    return get_transition_may_write_dependencies(t);
}

extern "C" const int* get_transition_must_write_dependencies(int t) 
{
    if (t>=0 && t < 58) return transition_dependency[t][2];
    return NULL;
}

extern "C" int get_active( state_struct_t *in, int t ) 
{
    switch(t)
    {
        case 0: return ((((*in).Sender.state.var == 0)) && (((*in).RtoS.state.var == 0)));
        case 1: return ((((*in).Sender.state.var == 0)) && (((*in).RtoS.state.var == 0)));
        case 2: return ((((*in).Sender.state.var == 0)) && (((*in).RtoS.state.var == 0)));
        case 3: return ((((*in).Sender.state.var == 2)) && (((*in).RtoS.state.var == 0)));
        case 4: return ((((*in).Sender.state.var == 2)) && (((*in).RtoS.state.var == 0)));
        case 5: return ((((*in).Sender.state.var == 2)) && (((*in).RtoS.state.var == 0)));
        case 6: return ((((*in).Sender.state.var == 4)) && (((*in).RtoS.state.var == 0)));
        case 7: return ((((*in).Sender.state.var == 4)) && (((*in).RtoS.state.var == 0)));
        case 8: return ((((*in).Sender.state.var == 5)) && (((*in).RtoS.state.var == 0)));
        case 9: return ((((*in).Sender.state.var == 5)) && (((*in).RtoS.state.var == 0)));
        case 10: return ((((*in).Sender.state.var == 5)) && (((*in).RtoS.state.var == 0)));
        case 11: return (((*in).Sender.state.var == 6));
        case 12: return (((*in).Sender.state.var == 6));
        case 13: return (((*in).Sender.state.var == 7));
        case 14: return (((*in).Sender.state.var == 8));
        case 15: return (((*in).Sender.state.var == 9));
        case 16: return (((*in).Sender.state.var == 9));
        case 17: return ((((*in).Receiver.state.var == 0)) && (((*in).StoR.state.var == 0)));
        case 18: return ((((*in).Receiver.state.var == 0)) && (((*in).StoR.state.var == 0)));
        case 19: return ((((*in).Receiver.state.var == 0)) && (((*in).StoR.state.var == 0)));
        case 20: return ((((*in).Receiver.state.var == 2)) && (((*in).StoR.state.var == 0)));
        case 21: return ((((*in).Receiver.state.var == 2)) && (((*in).StoR.state.var == 0)));
        case 22: return ((((*in).Receiver.state.var == 2)) && (((*in).StoR.state.var == 0)));
        case 23: return ((((*in).Receiver.state.var == 4)) && (((*in).StoR.state.var == 0)));
        case 24: return ((((*in).Receiver.state.var == 4)) && (((*in).StoR.state.var == 0)));
        case 25: return ((((*in).Receiver.state.var == 5)) && (((*in).StoR.state.var == 0)));
        case 26: return ((((*in).Receiver.state.var == 5)) && (((*in).StoR.state.var == 0)));
        case 27: return ((((*in).Receiver.state.var == 5)) && (((*in).StoR.state.var == 0)));
        case 28: return (((*in).Receiver.state.var == 6));
        case 29: return (((*in).Receiver.state.var == 6));
        case 30: return (((*in).Receiver.state.var == 7));
        case 31: return (((*in).Receiver.state.var == 8));
        case 32: return (((*in).Receiver.state.var == 9));
        case 33: return (((*in).Receiver.state.var == 9));
        case 34: return (((*in).Receiver.state.var == 11));
        case 35: return (((*in).Receiver.state.var == 11));
        case 36: return ((((*in).StoR.state.var == 0)) && (((*in).Sender.state.var == 0)));
        case 37: return ((((*in).StoR.state.var == 0)) && (((*in).Sender.state.var == 1)));
        case 38: return ((((*in).StoR.state.var == 0)) && (((*in).Sender.state.var == 4)));
        case 39: return ((((*in).StoR.state.var == 0)) && (((*in).Sender.state.var == 5)));
        case 40: return ((((*in).StoR.state.var == 0)) && (((*in).Sender.state.var == 3)));
        case 41: return ((((*in).StoR.state.var == 0)) && (((*in).Sender.state.var == 4)));
        case 42: return ((((*in).StoR.state.var == 0)) && (((*in).Sender.state.var == 8)));
        case 43: return ((((*in).StoR.state.var == 0)) && (((*in).Sender.state.var == 7)));
        case 44: return ((((*in).StoR.state.var == 0)) && (((*in).Sender.state.var == 3)));
        case 45: return (((*in).StoR.state.var == 0));
        case 46: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 0)));
        case 47: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 1)));
        case 48: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 4)));
        case 49: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 5)));
        case 50: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 0)));
        case 51: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 3)));
        case 52: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 4)));
        case 53: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 5)));
        case 54: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 7)));
        case 55: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 3)));
        case 56: return ((((*in).RtoS.state.var == 0)) && (((*in).Receiver.state.var == 8)));
        case 57: return (((*in).RtoS.state.var == 0));
    }
    return false;
}

extern "C" void get_group_pid_lid( int t, int* pid0, int* lid0, int* pid1, int* lid1 ) 
{
    switch(t)
    {
        case 0: *pid0 = 0; *lid0=0; *pid1 = 3; *lid1 = 0; return;
        case 1: *pid0 = 0; *lid0=0; *pid1 = 3; *lid1 = 0; return;
        case 2: *pid0 = 0; *lid0=0; *pid1 = 3; *lid1 = 0; return;
        case 3: *pid0 = 0; *lid0=2; *pid1 = 3; *lid1 = 0; return;
        case 4: *pid0 = 0; *lid0=2; *pid1 = 3; *lid1 = 0; return;
        case 5: *pid0 = 0; *lid0=2; *pid1 = 3; *lid1 = 0; return;
        case 6: *pid0 = 0; *lid0=4; *pid1 = 3; *lid1 = 0; return;
        case 7: *pid0 = 0; *lid0=4; *pid1 = 3; *lid1 = 0; return;
        case 8: *pid0 = 0; *lid0=5; *pid1 = 3; *lid1 = 0; return;
        case 9: *pid0 = 0; *lid0=5; *pid1 = 3; *lid1 = 0; return;
        case 10: *pid0 = 0; *lid0=5; *pid1 = 3; *lid1 = 0; return;
        case 11: *pid0 = 0; *lid0 = 6; *pid1 = -1; *lid1 = -1; return;
        case 12: *pid0 = 0; *lid0 = 6; *pid1 = -1; *lid1 = -1; return;
        case 13: *pid0 = 0; *lid0 = 7; *pid1 = -1; *lid1 = -1; return;
        case 14: *pid0 = 0; *lid0 = 8; *pid1 = -1; *lid1 = -1; return;
        case 15: *pid0 = 0; *lid0 = 9; *pid1 = -1; *lid1 = -1; return;
        case 16: *pid0 = 0; *lid0 = 9; *pid1 = -1; *lid1 = -1; return;
        case 17: *pid0 = 1; *lid0=0; *pid1 = 2; *lid1 = 0; return;
        case 18: *pid0 = 1; *lid0=0; *pid1 = 2; *lid1 = 0; return;
        case 19: *pid0 = 1; *lid0=0; *pid1 = 2; *lid1 = 0; return;
        case 20: *pid0 = 1; *lid0=2; *pid1 = 2; *lid1 = 0; return;
        case 21: *pid0 = 1; *lid0=2; *pid1 = 2; *lid1 = 0; return;
        case 22: *pid0 = 1; *lid0=2; *pid1 = 2; *lid1 = 0; return;
        case 23: *pid0 = 1; *lid0=4; *pid1 = 2; *lid1 = 0; return;
        case 24: *pid0 = 1; *lid0=4; *pid1 = 2; *lid1 = 0; return;
        case 25: *pid0 = 1; *lid0=5; *pid1 = 2; *lid1 = 0; return;
        case 26: *pid0 = 1; *lid0=5; *pid1 = 2; *lid1 = 0; return;
        case 27: *pid0 = 1; *lid0=5; *pid1 = 2; *lid1 = 0; return;
        case 28: *pid0 = 1; *lid0 = 6; *pid1 = -1; *lid1 = -1; return;
        case 29: *pid0 = 1; *lid0 = 6; *pid1 = -1; *lid1 = -1; return;
        case 30: *pid0 = 1; *lid0 = 7; *pid1 = -1; *lid1 = -1; return;
        case 31: *pid0 = 1; *lid0 = 8; *pid1 = -1; *lid1 = -1; return;
        case 32: *pid0 = 1; *lid0 = 9; *pid1 = -1; *lid1 = -1; return;
        case 33: *pid0 = 1; *lid0 = 9; *pid1 = -1; *lid1 = -1; return;
        case 34: *pid0 = 1; *lid0 = 11; *pid1 = -1; *lid1 = -1; return;
        case 35: *pid0 = 1; *lid0 = 11; *pid1 = -1; *lid1 = -1; return;
        case 36: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 0; return;
        case 37: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 1; return;
        case 38: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 4; return;
        case 39: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 5; return;
        case 40: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 3; return;
        case 41: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 4; return;
        case 42: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 8; return;
        case 43: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 7; return;
        case 44: *pid0 = 2; *lid0=0; *pid1 = 0; *lid1 = 3; return;
        case 45: *pid0 = 2; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
        case 46: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 0; return;
        case 47: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 1; return;
        case 48: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 4; return;
        case 49: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 5; return;
        case 50: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 0; return;
        case 51: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 3; return;
        case 52: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 4; return;
        case 53: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 5; return;
        case 54: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 7; return;
        case 55: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 3; return;
        case 56: *pid0 = 3; *lid0=0; *pid1 = 1; *lid1 = 8; return;
        case 57: *pid0 = 3; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
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
            case 0: return (((*src).Sender.state.var == 0));
            case 1: return (((*src).RtoS.state.var == 0));
            case 2: return (( ! (((*src).RtoS.buf_act.var == 0) )));
            case 3: return (((*src).RtoS.buf[wrapped_index(0, 20, &jbuf)].var == 0));
            case 4: return (((*src).RtoS.buf[wrapped_index(0, 20, &jbuf)].var % wrapped_div(8, &jbuf) == 2));
            case 5: return (((*src).RtoS.buf[wrapped_index(0, 20, &jbuf)].var % wrapped_div(8, &jbuf) == 1));
            case 6: return (((*src).Sender.state.var == 2));
            case 7: return (((*src).Sender.state.var == 4));
            case 8: return (((*src).Sender.state.var == 5));
            case 9: return (((*src).Sender.state.var == 6));
            case 10: return (((*src).Sender.m.var == ((*src).Sender.n.var + 1) % wrapped_div(4, &jbuf)));
            case 11: return (((*src).Sender.m.var != ((*src).Sender.n.var + 1) % wrapped_div(4, &jbuf)));
            case 12: return (((*src).Sender.state.var == 7));
            case 13: return (((*src).Sender.state.var == 8));
            case 14: return (((*src).Sender.m.var != (*src).Sender.n.var));
            case 15: return (((*src).Sender.state.var == 9));
            case 16: return (((*src).Receiver.state.var == 0));
            case 17: return (((*src).StoR.state.var == 0));
            case 18: return (( ! (((*src).StoR.buf_act.var == 0) )));
            case 19: return (((*src).StoR.buf[wrapped_index(0, 20, &jbuf)].var == 0));
            case 20: return (((*src).StoR.buf[wrapped_index(0, 20, &jbuf)].var % wrapped_div(8, &jbuf) == 4));
            case 21: return (((*src).StoR.buf[wrapped_index(0, 20, &jbuf)].var % wrapped_div(8, &jbuf) == 3));
            case 22: return (((*src).Receiver.state.var == 2));
            case 23: return (((*src).Receiver.state.var == 4));
            case 24: return (((*src).Receiver.state.var == 5));
            case 25: return (((*src).Receiver.state.var == 6));
            case 26: return (((*src).Receiver.m.var == (*src).Receiver.n.var));
            case 27: return (((*src).Receiver.m.var != (*src).Receiver.n.var));
            case 28: return (((*src).Receiver.state.var == 7));
            case 29: return (((*src).Receiver.state.var == 8));
            case 30: return ((((*src).Receiver.m.var + 1) % wrapped_div(4, &jbuf) != (*src).Receiver.n.var));
            case 31: return (((*src).Receiver.state.var == 9));
            case 32: return (((*src).Receiver.state.var == 11));
            case 33: return (( ! (((*src).StoR.buf_act.var == 20) )));
            case 34: return (((*src).Sender.state.var == 1));
            case 35: return (((*src).Sender.state.var == 3));
            case 36: return (((*src).Sender.m.var == (*src).Sender.n.var));
            case 37: return (( ! (((*src).RtoS.buf_act.var == 20) )));
            case 38: return (((*src).Receiver.state.var == 1));
            case 39: return (((*src).Receiver.state.var == 3));
            case 40: return ((((*src).Receiver.m.var + 1) % wrapped_div(4, &jbuf) == (*src).Receiver.n.var));
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

int* guards_per_transition[58] = 
{
    ((int[]){4, 0, 1, 2, 3}), // 0
    ((int[]){4, 0, 1, 2, 4}), // 1
    ((int[]){4, 0, 1, 2, 5}), // 2
    ((int[]){4, 6, 1, 2, 4}), // 3
    ((int[]){4, 6, 1, 2, 5}), // 4
    ((int[]){4, 6, 1, 2, 3}), // 5
    ((int[]){4, 7, 1, 2, 3}), // 6
    ((int[]){4, 7, 1, 2, 5}), // 7
    ((int[]){4, 8, 1, 2, 3}), // 8
    ((int[]){4, 8, 1, 2, 4}), // 9
    ((int[]){4, 8, 1, 2, 5}), // 10
    ((int[]){2, 9, 10}), // 11
    ((int[]){2, 9, 11}), // 12
    ((int[]){2, 12, 10}), // 13
    ((int[]){2, 13, 14}), // 14
    ((int[]){2, 15, 10}), // 15
    ((int[]){2, 15, 11}), // 16
    ((int[]){4, 16, 17, 18, 19}), // 17
    ((int[]){4, 16, 17, 18, 20}), // 18
    ((int[]){4, 16, 17, 18, 21}), // 19
    ((int[]){4, 22, 17, 18, 21}), // 20
    ((int[]){4, 22, 17, 18, 20}), // 21
    ((int[]){4, 22, 17, 18, 19}), // 22
    ((int[]){4, 23, 17, 18, 19}), // 23
    ((int[]){4, 23, 17, 18, 21}), // 24
    ((int[]){4, 24, 17, 18, 19}), // 25
    ((int[]){4, 24, 17, 18, 21}), // 26
    ((int[]){4, 24, 17, 18, 20}), // 27
    ((int[]){2, 25, 26}), // 28
    ((int[]){2, 25, 27}), // 29
    ((int[]){2, 28, 26}), // 30
    ((int[]){2, 29, 30}), // 31
    ((int[]){2, 31, 26}), // 32
    ((int[]){2, 31, 27}), // 33
    ((int[]){2, 32, 26}), // 34
    ((int[]){2, 32, 27}), // 35
    ((int[]){3, 17, 33, 0}), // 36
    ((int[]){3, 17, 33, 34}), // 37
    ((int[]){3, 17, 33, 7}), // 38
    ((int[]){3, 17, 33, 8}), // 39
    ((int[]){3, 17, 33, 35}), // 40
    ((int[]){3, 17, 33, 7}), // 41
    ((int[]){4, 17, 33, 13, 36}), // 42
    ((int[]){4, 17, 33, 12, 36}), // 43
    ((int[]){3, 17, 33, 35}), // 44
    ((int[]){2, 17, 18}), // 45
    ((int[]){3, 1, 37, 16}), // 46
    ((int[]){3, 1, 37, 38}), // 47
    ((int[]){3, 1, 37, 23}), // 48
    ((int[]){3, 1, 37, 24}), // 49
    ((int[]){3, 1, 37, 16}), // 50
    ((int[]){3, 1, 37, 39}), // 51
    ((int[]){3, 1, 37, 23}), // 52
    ((int[]){3, 1, 37, 24}), // 53
    ((int[]){4, 1, 37, 28, 40}), // 54
    ((int[]){3, 1, 37, 39}), // 55
    ((int[]){4, 1, 37, 29, 40}), // 56
    ((int[]){2, 1, 2}), // 57
}
;

extern "C" const int* get_guards(int t) 
{
    if (t>=0 && t < 58) return guards_per_transition[t];
    return NULL;
}

extern "C" const int** get_all_guards() 
{
    return (const int**)&guards_per_transition;
}

int guard[][52] = 
{
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
}
;

extern "C" const int* get_guard_matrix(int g) 
{
    if (g>=0 && g < 41) return guard[g];
    return NULL;
}

int guardmaybecoenabled[41][41] = 
{
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_may_be_coenabled_matrix(int g) 
{
    if (g>=0 && g < 41) return guardmaybecoenabled[g];
    return NULL;
}

int guard_nes[41][58] = 
{
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_nes_matrix(int g) 
{
    if (g>=0 && g < 41) return guard_nes[g];
    return NULL;
}

int guard_nds[41][58] = 
{
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_nds_matrix(int g) 
{
    if (g>=0 && g < 41) return guard_nds[g];
    return NULL;
}

int dna[58][58] = 
{
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_dna_matrix(int t) 
{
    if (t >= 0 && t < 58) return dna[t];
    return NULL;
}

