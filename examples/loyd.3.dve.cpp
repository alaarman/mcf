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
    byte_t a[12];
    byte_t x;
    byte_t y;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) P;
    struct
    {
        ushort_int_t state;
    }
    __attribute__((__packed__)) Check;
}
__attribute__((__packed__));
int state_size = sizeof(state_struct_t);

state_struct_t initial_state = { 0,1,2,3,4,5,6,7,8,9,10,11,0,0,0,0 };

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
        int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).a[((*out).y.var) * 4 + (*out).x.var].var = (*out).a[((*out).y.var) * 4 + (*out).x.var - 1].var);
        cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
        ((*out).a[((*out).y.var) * 4 + (*out).x.var - 1].var = 0);
        cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var - 1].var) - (int*)&(*out))] = 0;
        ((*out).x.var = (*out).x.var - 1);
        cpy[((int*)&((*out).x.var) - (int*)&(*out))] = 0;
        // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l1: {
        *out = *in;
        int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).a[((*out).y.var) * 4 + (*out).x.var].var = (*out).a[((*out).y.var) * 4 + (*out).x.var + 1].var);
        cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
        ((*out).a[((*out).y.var) * 4 + (*out).x.var + 1].var = 0);
        cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var + 1].var) - (int*)&(*out))] = 0;
        ((*out).x.var = (*out).x.var + 1);
        cpy[((int*)&((*out).x.var) - (int*)&(*out))] = 0;
        // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l2: {
        *out = *in;
        int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).a[((*out).y.var) * 4 + (*out).x.var].var = (*out).a[((*out).y.var - 1) * 4 + (*out).x.var].var);
        cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
        ((*out).a[((*out).y.var - 1) * 4 + (*out).x.var].var = 0);
        cpy[((int*)&((*out).a[((*out).y.var - 1) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
        ((*out).y.var = (*out).y.var - 1);
        cpy[((int*)&((*out).y.var) - (int*)&(*out))] = 0;
        // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l3: {
        *out = *in;
        int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).P.state.var = 0;
        cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
        ((*out).a[((*out).y.var) * 4 + (*out).x.var].var = (*out).a[((*out).y.var + 1) * 4 + (*out).x.var].var);
        cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
        ((*out).a[((*out).y.var + 1) * 4 + (*out).x.var].var = 0);
        cpy[((int*)&((*out).a[((*out).y.var + 1) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
        ((*out).y.var = (*out).y.var + 1);
        cpy[((int*)&((*out).y.var) - (int*)&(*out))] = 0;
        // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
        // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0
        callback(arg, &transition_info, out, cpy);
        ++states_emitted;
    }
    return states_emitted;
    l4: {
        *out = *in;
        int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
        (*out).Check.state.var = 1;
        cpy[((int*)&(*out).Check.state.var - (int*)&(*out))] = 0;
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
        // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
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
        default: printf ("Wrong group! Using greybox/long call + -l (DiVinE LTL semantics)? This combo is not implemented."); exit (-1);
    }
    return 0;
}

extern "C" int get_successor( void* model, int t, const state_struct_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_struct_t *out, int *cpy), void *arg ) 
{
    int states_emitted = 0;
    goto switch_state;
    l0: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).x.var > 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l1: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).x.var < 4 - 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l2: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).y.var > 0) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l3: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
        // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
        if (  ( ((*in).P.state.var == 0) )  &&  ( ((*in).y.var < 3 - 1) ) )
        states_emitted = get_action(model, t, in, callback, arg);
    }
    return states_emitted;
    l4: {
        
        // read:         1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1
        // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        if (  ( ((*in).Check.state.var == 0) )  &&  ( ((*in).a[0].var == 11 && (*in).a[1].var == 10 && (*in).a[2].var == 9 && (*in).a[3].var == 8 && (*in).a[4].var == 7 && (*in).a[5].var == 6 && (*in).a[6].var == 5 && (*in).a[7].var == 4 && (*in).a[8].var == 3 && (*in).a[9].var == 2 && (*in).a[10].var == 1 && (*in).a[11].var == 0) ) )
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
    int cpy[16] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, };
    if ( false )
    {
        ;
    }
    else
    {
        if (  ( ((*in).P.state.var == 0) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
            if (  ( ((*in).x.var > 0) ) )
            {
                *out = *in;
                int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).a[((*out).y.var) * 4 + (*out).x.var].var = (*out).a[((*out).y.var) * 4 + (*out).x.var - 1].var);
                cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
                ((*out).a[((*out).y.var) * 4 + (*out).x.var - 1].var = 0);
                cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var - 1].var) - (int*)&(*out))] = 0;
                ((*out).x.var = (*out).x.var - 1);
                cpy[((int*)&((*out).x.var) - (int*)&(*out))] = 0;
                // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0
                system_in_deadlock = false;
                transition_info.group = 0;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
            if (  ( ((*in).x.var < 4 - 1) ) )
            {
                *out = *in;
                int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).a[((*out).y.var) * 4 + (*out).x.var].var = (*out).a[((*out).y.var) * 4 + (*out).x.var + 1].var);
                cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
                ((*out).a[((*out).y.var) * 4 + (*out).x.var + 1].var = 0);
                cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var + 1].var) - (int*)&(*out))] = 0;
                ((*out).x.var = (*out).x.var + 1);
                cpy[((int*)&((*out).x.var) - (int*)&(*out))] = 0;
                // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0
                system_in_deadlock = false;
                transition_info.group = 1;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
            if (  ( ((*in).y.var > 0) ) )
            {
                *out = *in;
                int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).a[((*out).y.var) * 4 + (*out).x.var].var = (*out).a[((*out).y.var - 1) * 4 + (*out).x.var].var);
                cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
                ((*out).a[((*out).y.var - 1) * 4 + (*out).x.var].var = 0);
                cpy[((int*)&((*out).a[((*out).y.var - 1) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
                ((*out).y.var = (*out).y.var - 1);
                cpy[((int*)&((*out).y.var) - (int*)&(*out))] = 0;
                // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0
                system_in_deadlock = false;
                transition_info.group = 2;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0
            // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
            if (  ( ((*in).y.var < 3 - 1) ) )
            {
                *out = *in;
                int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).P.state.var = 0;
                cpy[((int*)&(*out).P.state.var - (int*)&(*out))] = 0;
                ((*out).a[((*out).y.var) * 4 + (*out).x.var].var = (*out).a[((*out).y.var + 1) * 4 + (*out).x.var].var);
                cpy[((int*)&((*out).a[((*out).y.var) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
                ((*out).a[((*out).y.var + 1) * 4 + (*out).x.var].var = 0);
                cpy[((int*)&((*out).a[((*out).y.var + 1) * 4 + (*out).x.var].var) - (int*)&(*out))] = 0;
                ((*out).y.var = (*out).y.var + 1);
                cpy[((int*)&((*out).y.var) - (int*)&(*out))] = 0;
                // actions_read: 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0
                // may-write:    1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0
                system_in_deadlock = false;
                transition_info.group = 3;
                callback(arg, &transition_info, out, cpy);
                ++states_emitted;
            }
        }
        if (  ( ((*in).Check.state.var == 0) ) )
        {
            
            // read:         1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1
            // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            if (  ( ((*in).a[0].var == 11 && (*in).a[1].var == 10 && (*in).a[2].var == 9 && (*in).a[3].var == 8 && (*in).a[4].var == 7 && (*in).a[5].var == 6 && (*in).a[6].var == 5 && (*in).a[7].var == 4 && (*in).a[8].var == 3 && (*in).a[9].var == 2 && (*in).a[10].var == 1 && (*in).a[11].var == 0) ) )
            {
                *out = *in;
                int cpy[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
                (*out).Check.state.var = 1;
                cpy[((int*)&(*out).Check.state.var - (int*)&(*out))] = 0;
                // actions_read: 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                // may-write:    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
                // must-write:   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
                system_in_deadlock = false;
                transition_info.group = 4;
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
    return 16;
}

extern "C" const char* get_state_variable_name(int var)
{
    switch (var)
    {
        case 0:
            return "a[0]";
        case 1:
            return "a[1]";
        case 2:
            return "a[2]";
        case 3:
            return "a[3]";
        case 4:
            return "a[4]";
        case 5:
            return "a[5]";
        case 6:
            return "a[6]";
        case 7:
            return "a[7]";
        case 8:
            return "a[8]";
        case 9:
            return "a[9]";
        case 10:
            return "a[10]";
        case 11:
            return "a[11]";
        case 12:
            return "x";
        case 13:
            return "y";
        case 14:
            return "P";
        case 15:
            return "Check";
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
            return 1;
        case 15:
            return 2;
        default:
            return -1;
    }
}

extern "C" int get_state_variable_type_count() 
{
    return 3;
}

extern "C" const char* get_state_variable_type_name(int type) 
{
    switch (type)
    {
        case 2:
            return "Check";
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
        case 2: // Check
            return 2;
        case 1: // P
            return 1;
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
        case 2:
        {
            switch (value)
            {
                case 0:
                    return "not_done";
                case 1:
                    return "done";
            }
        }
        case 1:
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

int transition_dependency[][3][16] = 
{
    // { ... read ...}, { ... may-write ...}, { ... must-write ...}
    {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0}},
    {{1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}}
}
;

int actions_read[][16] = 
{
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
}
;

extern "C" int get_transition_count() 
{
    return 5;
}

extern "C" const int* get_transition_read_dependencies(int t) 
{
    if (t>=0 && t < 5) return transition_dependency[t][0];
    return NULL;
}

extern "C" const int* get_transition_actions_read_dependencies(int t) 
{
    if (t>=0 && t < 5) return actions_read[t];
    return NULL;
}

extern "C" const int* get_transition_may_write_dependencies(int t) 
{
    if (t>=0 && t < 5) return transition_dependency[t][1];
    return NULL;
}

extern "C" const int* get_transition_write_dependencies(int t) 
{
    return get_transition_may_write_dependencies(t);
}

extern "C" const int* get_transition_must_write_dependencies(int t) 
{
    if (t>=0 && t < 5) return transition_dependency[t][2];
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
        case 4: return (((*in).Check.state.var == 0));
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
        case 4: *pid0 = 1; *lid0 = 0; *pid1 = -1; *lid1 = -1; return;
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
            case 1: return (((*src).x.var > 0));
            case 2: return (((*src).x.var < 4 - 1));
            case 3: return (((*src).y.var > 0));
            case 4: return (((*src).y.var < 3 - 1));
            case 5: return (((*src).Check.state.var == 0));
            case 6: return (((*src).a[wrapped_index(0, 12, &jbuf)].var == 11));
            case 7: return (((*src).a[wrapped_index(1, 12, &jbuf)].var == 10));
            case 8: return (((*src).a[wrapped_index(2, 12, &jbuf)].var == 9));
            case 9: return (((*src).a[wrapped_index(3, 12, &jbuf)].var == 8));
            case 10: return (((*src).a[wrapped_index(4, 12, &jbuf)].var == 7));
            case 11: return (((*src).a[wrapped_index(5, 12, &jbuf)].var == 6));
            case 12: return (((*src).a[wrapped_index(6, 12, &jbuf)].var == 5));
            case 13: return (((*src).a[wrapped_index(7, 12, &jbuf)].var == 4));
            case 14: return (((*src).a[wrapped_index(8, 12, &jbuf)].var == 3));
            case 15: return (((*src).a[wrapped_index(9, 12, &jbuf)].var == 2));
            case 16: return (((*src).a[wrapped_index(10, 12, &jbuf)].var == 1));
            case 17: return (((*src).a[wrapped_index(11, 12, &jbuf)].var == 0));
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
}

extern "C" const int get_guard_count() 
{
    return 18;
}

int* guards_per_transition[5] = 
{
    ((int[]){2, 0, 1}), // 0
    ((int[]){2, 0, 2}), // 1
    ((int[]){2, 0, 3}), // 2
    ((int[]){2, 0, 4}), // 3
    ((int[]){13, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17}), // 4
}
;

extern "C" const int* get_guards(int t) 
{
    if (t>=0 && t < 5) return guards_per_transition[t];
    return NULL;
}

extern "C" const int** get_all_guards() 
{
    return (const int**)&guards_per_transition;
}

int guard[][16] = 
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}
}
;

extern "C" const int* get_guard_matrix(int g) 
{
    if (g>=0 && g < 18) return guard[g];
    return NULL;
}

int guardmaybecoenabled[18][18] = 
{
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_may_be_coenabled_matrix(int g) 
{
    if (g>=0 && g < 18) return guardmaybecoenabled[g];
    return NULL;
}

int guard_nes[18][5] = 
{
    {1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_nes_matrix(int g) 
{
    if (g>=0 && g < 18) return guard_nes[g];
    return NULL;
}

int guard_nds[18][5] = 
{
    {0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1}
}
;

extern "C" const int* get_guard_nds_matrix(int g) 
{
    if (g>=0 && g < 18) return guard_nds[g];
    return NULL;
}

int dna[5][5] = 
{
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1}
}
;

extern "C" const int* get_dna_matrix(int t) 
{
    if (t >= 0 && t < 5) return dna[t];
    return NULL;
}

