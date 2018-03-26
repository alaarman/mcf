/** Generated LTSmin model - brp.pr
 * State size:  43 elements (172 bytes)
 * Transitions: 64
 */

#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

#define skip true
#define EXPECT_FALSE(e) __builtin_expect(e, 0)

#define EXPECT_TRUE(e) __builtin_expect(e, 1)
#ifdef DNDEBUG
#define assert(e,...)    ((void)0);
#else
#define assert(e,...) \
    if (EXPECT_FALSE(!(e))) {\
        char buf[4096];\
        if (#__VA_ARGS__[0])\
            snprintf(buf, 4096, ": " __VA_ARGS__);\
        else\
            buf[0] = '\0';\
        printf("assertion \"%s\" failed%s", #e, buf);\
        exit(-1);\
    }
#endif

typedef struct transition_info {
	int* label;
	int  group;
	int  dummy;
} transition_info_t;

typedef union sj_uint1 {
	int pad;
	unsigned int var:1;
} sj_uint1;

typedef union sj_int8 {
	int pad;
	char var;
} sj_int8;

typedef union sj_int16 {
	int pad;
	short var;
} sj_int16;

typedef union sj_int32 {
	int pad;
	int var;
} sj_int32;

typedef union sj_uint8 {
	int pad;
	unsigned char var;
} sj_uint8;

typedef union sj_uint16 {
	int pad;
	unsigned short var;
} sj_uint16;

typedef union sj_uint32 {
	int pad;
	unsigned int var;
} sj_uint32;

static sj_uint1 __spins_scratch_sj_uint1;
static sj_int32 __spins_scratch_sj_int32;
static sj_int8 __spins_scratch_sj_int8;
static sj_uint16 __spins_scratch_sj_uint16;
static sj_uint8 __spins_scratch_sj_uint8;
static sj_uint32 __spins_scratch_sj_uint32;
static sj_int16 __spins_scratch_sj_int16;

typedef struct sj_struct_never_t {
	sj_int16 _pc;
} sj_struct_never_t;

typedef struct sj_struct_Environment_0_t {
	sj_int16 _pc;
	sj_uint8 i;
	sj_uint8 v;
} sj_struct_Environment_0_t;

typedef struct sj_struct_Sender_0_t {
	sj_int16 _pc;
	sj_uint1 ab;
	sj_uint8 rc;
	sj_uint8 i;
} sj_struct_Sender_0_t;

typedef struct sj_struct_buffer_K_t {
	sj_uint1 m0;
	sj_uint1 m1;
	sj_uint1 m2;
	sj_uint8 m3;
} sj_struct_buffer_K_t;

typedef struct sj_struct_sj_channel_K_t_t {
	sj_int16 filled;
	sj_struct_buffer_K_t buffer[1];
} sj_struct_sj_channel_K_t_t;

typedef struct sj_struct_buffer_L_t {
	sj_uint1 m0;
} sj_struct_buffer_L_t;

typedef struct sj_struct_sj_channel_L_t_t {
	sj_int16 filled;
	sj_struct_buffer_L_t buffer[1];
} sj_struct_sj_channel_L_t_t;

typedef struct sj_struct_etype_t {
	sj_uint8 ind;
	sj_uint8 val;
} sj_struct_etype_t;

typedef struct sj_struct_globals_t {
	sj_struct_sj_channel_K_t_t K;
	sj_struct_sj_channel_L_t_t L;
	sj_uint8 n;
	sj_uint8 d[4];
	sj_uint8 sInd;
	sj_uint8 k;
	sj_struct_etype_t e[4];
	sj_uint1 checknow;
} sj_struct_globals_t;

typedef struct sj_struct_Receiver_0_t {
	sj_int16 _pc;
	sj_uint1 b1;
	sj_uint1 bN;
	sj_uint1 ab;
	sj_uint8 v;
	sj_uint1 exp_ab;
} sj_struct_Receiver_0_t;

typedef struct sj_struct_Daemon_0_t {
	sj_int16 _pc;
	sj_uint1 b;
	sj_uint1 b1;
	sj_uint1 bN;
	sj_uint1 ab;
	sj_uint8 v;
} sj_struct_Daemon_0_t;

typedef struct sj_struct_state_t {
	sj_struct_never_t never;
	sj_struct_Environment_0_t Environment_0;
	sj_struct_Sender_0_t Sender_0;
	sj_struct_globals_t globals;
	sj_struct_Receiver_0_t Receiver_0;
	sj_struct_Daemon_0_t Daemon_0;
} sj_struct_state_t;

typedef sj_struct_state_t state_t;

extern inline int spins_reach (void* model, transition_info_t *transition_info, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg, int pid, int *cpy);
extern inline int spins_simple_reach (void* model, transition_info_t *transition_info, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg, int pid, int *cpy);
extern int spins_get_successor_all (void* model, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg);
extern int spins_get_successor (void* model, int t, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg);
extern int spins_get_actions (void* model, int t, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg);
extern void spins_atomic_cb (void* arg, transition_info_t *transition_info, state_t *out, int atomic, int *cpy);
extern void spins_simple_atomic_cb (void* arg, transition_info_t *transition_info, state_t *out, int atomic, int *cpy);
extern int *spins_get_guards (state_t *in);

extern const int spins_get_state_size() {
	return 43;
}

sj_struct_state_t initial = (sj_struct_state_t) {
	.never._pc.pad                           = 0,
	.never._pc.var                           = 0, // 0
	.Environment_0._pc.pad                   = 0,
	.Environment_0._pc.var                   = 0, // 1
	.Environment_0.i.pad                     = 0,
	.Environment_0.i.var                     = 0, // 2
	.Environment_0.v.pad                     = 0,
	.Environment_0.v.var                     = 0, // 3
	.Sender_0._pc.pad                        = 0,
	.Sender_0._pc.var                        = 0, // 4
	.Sender_0.ab.pad                         = 0,
	.Sender_0.ab.var                         = 0, // 5
	.Sender_0.rc.pad                         = 0,
	.Sender_0.rc.var                         = 0, // 6
	.Sender_0.i.pad                          = 0,
	.Sender_0.i.var                          = 0, // 7
	.globals.K.filled.pad                    = 0,
	.globals.K.filled.var                    = 0, // 8
	.globals.K.buffer[0].m0.pad              = 0,
	.globals.K.buffer[0].m0.var              = 0, // 9
	.globals.K.buffer[0].m1.pad              = 0,
	.globals.K.buffer[0].m1.var              = 0, // 10
	.globals.K.buffer[0].m2.pad              = 0,
	.globals.K.buffer[0].m2.var              = 0, // 11
	.globals.K.buffer[0].m3.pad              = 0,
	.globals.K.buffer[0].m3.var              = 0, // 12
	.globals.L.filled.pad                    = 0,
	.globals.L.filled.var                    = 0, // 13
	.globals.L.buffer[0].m0.pad              = 0,
	.globals.L.buffer[0].m0.var              = 0, // 14
	.globals.n.pad                           = 0,
	.globals.n.var                           = 0, // 15
	.globals.d[0].pad                        = 0,
	.globals.d[0].var                        = 0, // 16
	.globals.d[1].pad                        = 0,
	.globals.d[1].var                        = 0, // 17
	.globals.d[2].pad                        = 0,
	.globals.d[2].var                        = 0, // 18
	.globals.d[3].pad                        = 0,
	.globals.d[3].var                        = 0, // 19
	.globals.sInd.pad                        = 0,
	.globals.sInd.var                        = 0, // 20
	.globals.k.pad                           = 0,
	.globals.k.var                           = 0, // 21
	.globals.e[0].ind.pad                    = 0,
	.globals.e[0].ind.var                    = 0, // 22
	.globals.e[0].val.pad                    = 0,
	.globals.e[0].val.var                    = 0, // 23
	.globals.e[1].ind.pad                    = 0,
	.globals.e[1].ind.var                    = 0, // 24
	.globals.e[1].val.pad                    = 0,
	.globals.e[1].val.var                    = 0, // 25
	.globals.e[2].ind.pad                    = 0,
	.globals.e[2].ind.var                    = 0, // 26
	.globals.e[2].val.pad                    = 0,
	.globals.e[2].val.var                    = 0, // 27
	.globals.e[3].ind.pad                    = 0,
	.globals.e[3].ind.var                    = 0, // 28
	.globals.e[3].val.pad                    = 0,
	.globals.e[3].val.var                    = 0, // 29
	.globals.checknow.pad                    = 0,
	.globals.checknow.var                    = 0, // 30
	.Receiver_0._pc.pad                      = 0,
	.Receiver_0._pc.var                      = 0, // 31
	.Receiver_0.b1.pad                       = 0,
	.Receiver_0.b1.var                       = 0, // 32
	.Receiver_0.bN.pad                       = 0,
	.Receiver_0.bN.var                       = 0, // 33
	.Receiver_0.ab.pad                       = 0,
	.Receiver_0.ab.var                       = 0, // 34
	.Receiver_0.v.pad                        = 0,
	.Receiver_0.v.var                        = 0, // 35
	.Receiver_0.exp_ab.pad                   = 0,
	.Receiver_0.exp_ab.var                   = 0, // 36
	.Daemon_0._pc.pad                        = 0,
	.Daemon_0._pc.var                        = 0, // 37
	.Daemon_0.b.pad                          = 0,
	.Daemon_0.b.var                          = 0, // 38
	.Daemon_0.b1.pad                         = 0,
	.Daemon_0.b1.var                         = 0, // 39
	.Daemon_0.bN.pad                         = 0,
	.Daemon_0.bN.var                         = 0, // 40
	.Daemon_0.ab.pad                         = 0,
	.Daemon_0.ab.var                         = 0, // 41
	.Daemon_0.v.pad                          = 0,
	.Daemon_0.v.var                          = 0
};

extern void spins_get_initial_state( state_t *to )
{
	assert(43*4 == sizeof(sj_struct_state_t),
		"state_t SIZE MISMATCH!: state: %zu != %i", 
		sizeof(sj_struct_state_t), 43*4);
	memcpy(to, (char*)&initial, sizeof(sj_struct_state_t));
}

char leaves_atomic[64] = {
	false,	// 0
	false,	// 1
	false,	// 2
	false,	// 3
	false,	// 4
	false,	// 5
	false,	// 6
	false,	// 7
	false,	// 8
	false,	// 9
	false,	// 10
	false,	// 11
	false,	// 12
	false,	// 13
	false,	// 14
	true,	// 15
	false,	// 16
	false,	// 17
	false,	// 18
	false,	// 19
	false,	// 20
	false,	// 21
	false,	// 22
	false,	// 23
	false,	// 24
	false,	// 25
	false,	// 26
	false,	// 27
	false,	// 28
	false,	// 29
	false,	// 30
	false,	// 31
	false,	// 32
	false,	// 33
	false,	// 34
	false,	// 35
	false,	// 36
	false,	// 37
	false,	// 38
	false,	// 39
	false,	// 40
	false,	// 41
	false,	// 42
	false,	// 43
	false,	// 44
	false,	// 45
	false,	// 46
	false,	// 47
	false,	// 48
	false,	// 49
	false,	// 50
	false,	// 51
	false,	// 52
	false,	// 53
	false,	// 54
	false,	// 55
	false,	// 56
	false,	// 57
	false,	// 58
	false,	// 59
	false,	// 60
	false,	// 61
	false,	// 62
	false
};

int spins_get_actions (void* model, int t, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, t };
	int states_emitted = 0;
	int minus_one = -1;
	int *atomic = &minus_one;
	sj_struct_state_t local_state;
	sj_struct_state_t* out = &local_state;
	int cpy[43] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, };
	int i;
	int j;

	switch(t) {
	case 0: {
		// Environment_0(0-->2) X Sender_0(1-->2) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 2;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 2;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 0;
		transition_info.group = 0;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 1: {
		// Environment_0(0-->2) X Sender_0(2-->3) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 2;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 3;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Sender_0.i.var = 1;
		cpy[((int *)&out->Sender_0.i.pad - (int *)out)] = 0;
		transition_labels[0] = 1;
		transition_info.group = 1;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 2: {
		// Sender_0(3-->4) X never(0-->0)	[K!(Sender_0.i == 1),(Sender_0.i == n),Sender_0.ab,d[Sender_0.i] X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 4;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m0.var = (out->Sender_0.i.var == 1);
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m0.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m1.var = (out->Sender_0.i.var == out->globals.n.var);
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m1.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m2.var = out->Sender_0.ab.var;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m2.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m3.var = out->globals.d[out->Sender_0.i.var].var;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m3.pad - (int *)out)] = 0;
		out->globals.K.filled.var++;
		cpy[((int *)&out->globals.K.filled.pad - (int *)out)] = 0;
		transition_labels[0] = 2;
		transition_info.group = 2;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 3: {
		// Sender_0(4-->5) X never(0-->0)	[Sender_0.rc = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 5;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Sender_0.rc.var = 0;
		cpy[((int *)&out->Sender_0.rc.pad - (int *)out)] = 0;
		transition_labels[0] = 3;
		transition_info.group = 3;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 4: {
		// Sender_0(5-->13) X never(0-->0)	[L?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 13;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		j = 0;
		out->globals.L.filled.var--;
		cpy[((int *)&out->globals.L.filled.pad - (int *)out)] = 0;
		out->globals.L.buffer[out->globals.L.filled.var].m0.var = 0;
		cpy[((int *)&out->globals.L.buffer[out->globals.L.filled.var].m0.pad - (int *)out)] = 0;
		out->Sender_0.ab.var = (1 - out->Sender_0.ab.var);
		cpy[((int *)&out->Sender_0.ab.pad - (int *)out)] = 0;
		transition_labels[0] = 4;
		transition_info.group = 4;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 5: {
		// Sender_0(13-->14) X never(0-->0)	[(Sender_0.i == n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 14;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 5;
		transition_info.group = 5;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 6: {
		// Sender_0(14-->1) X Environment_0(0-->0) X never(0-->0)	[Sout!Iok X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->globals.sInd.var = 3;
		cpy[((int *)&out->globals.sInd.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 1;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 0;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 6;
		transition_info.group = 6;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 7: {
		// Sender_0(13-->3) X never(0-->0)	[(Sender_0.i < n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 3;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Sender_0.i.var++;
		cpy[((int *)&out->Sender_0.i.pad - (int *)out)] = 0;
		transition_labels[0] = 7;
		transition_info.group = 7;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 8: {
		// Environment_0(2-->11) X never(0-->0)	[(n > 0) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 11;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 8;
		transition_info.group = 8;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 9: {
		// Environment_0(11-->12) X never(0-->0)	[checknow = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 12;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.checknow.var = 1;
		cpy[((int *)&out->globals.checknow.pad - (int *)out)] = 0;
		transition_labels[0] = 9;
		transition_info.group = 9;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 10: {
		// Environment_0(12-->3) X never(0-->0)	[checknow = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 3;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.checknow.var = 0;
		cpy[((int *)&out->globals.checknow.pad - (int *)out)] = 0;
		transition_labels[0] = 10;
		transition_info.group = 10;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 11: {
		// Environment_0(3-->4) X never(0-->0)	[d[1] = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 4;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[1].var = 0;
		cpy[((int *)&out->globals.d[1].pad - (int *)out)] = 0;
		out->globals.d[2].var = 0;
		cpy[((int *)&out->globals.d[2].pad - (int *)out)] = 0;
		out->globals.d[3].var = 0;
		cpy[((int *)&out->globals.d[3].pad - (int *)out)] = 0;
		transition_labels[0] = 11;
		transition_info.group = 11;
		int count = spins_simple_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 12: {
		// Environment_0(4-->5) X never(0-->0)	[n = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 5;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.n.var = 1;
		cpy[((int *)&out->globals.n.pad - (int *)out)] = 0;
		transition_labels[0] = 12;
		transition_info.group = 12;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 13: {
		// Environment_0(5-->10) X never(0-->0)	[(n == 1) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 10;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 13;
		transition_info.group = 13;
		int count = spins_simple_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 14: {
		// Environment_0(10-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[1].var = 1;
		cpy[((int *)&out->globals.d[1].pad - (int *)out)] = 0;
		transition_labels[0] = 14;
		transition_info.group = 14;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 15: {
		// Environment_0(7-->8) X never(0-->0)	[k = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 8;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.k.var = 0;
		cpy[((int *)&out->globals.k.pad - (int *)out)] = 0;
		transition_labels[0] = 15;
		transition_info.group = 15;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 16: {
		// Environment_0(8-->0) X Sender_0(1-->2) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 0;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 2;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 16;
		transition_info.group = 16;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 17: {
		// Environment_0(8-->0) X Sender_0(2-->3) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 0;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 3;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Sender_0.i.var = 1;
		cpy[((int *)&out->Sender_0.i.pad - (int *)out)] = 0;
		transition_labels[0] = 17;
		transition_info.group = 17;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 18: {
		// Environment_0(5-->9) X never(0-->0)	[(n == 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 9;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 18;
		transition_info.group = 18;
		int count = spins_simple_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 19: {
		// Environment_0(9-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[1].var = 1;
		cpy[((int *)&out->globals.d[1].pad - (int *)out)] = 0;
		transition_labels[0] = 19;
		transition_info.group = 19;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 20: {
		// Environment_0(9-->7) X never(0-->0)	[d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[2].var = 1;
		cpy[((int *)&out->globals.d[2].pad - (int *)out)] = 0;
		transition_labels[0] = 20;
		transition_info.group = 20;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 21: {
		// Environment_0(5-->6) X never(0-->0)	[(n == 3) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 6;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 21;
		transition_info.group = 21;
		int count = spins_simple_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 22: {
		// Environment_0(6-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[1].var = 1;
		cpy[((int *)&out->globals.d[1].pad - (int *)out)] = 0;
		transition_labels[0] = 22;
		transition_info.group = 22;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 23: {
		// Environment_0(6-->7) X never(0-->0)	[d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[2].var = 1;
		cpy[((int *)&out->globals.d[2].pad - (int *)out)] = 0;
		transition_labels[0] = 23;
		transition_info.group = 23;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 24: {
		// Environment_0(6-->7) X never(0-->0)	[d[3] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[3].var = 1;
		cpy[((int *)&out->globals.d[3].pad - (int *)out)] = 0;
		transition_labels[0] = 24;
		transition_info.group = 24;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 25: {
		// Environment_0(4-->5) X never(0-->0)	[n = 2 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 5;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.n.var = 2;
		cpy[((int *)&out->globals.n.pad - (int *)out)] = 0;
		transition_labels[0] = 25;
		transition_info.group = 25;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 26: {
		// Environment_0(4-->5) X never(0-->0)	[n = 3 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 5;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.n.var = 3;
		cpy[((int *)&out->globals.n.pad - (int *)out)] = 0;
		transition_labels[0] = 26;
		transition_info.group = 26;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 27: {
		// Environment_0(2-->3) X never(0-->0)	[tau X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 3;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 27;
		transition_info.group = 27;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 28: {
		// Sender_0(0-->1) X never(0-->0)	[Sender_0.ab = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 1;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Sender_0.ab.var = 0;
		cpy[((int *)&out->Sender_0.ab.pad - (int *)out)] = 0;
		transition_labels[0] = 28;
		transition_info.group = 28;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 29: {
		// Receiver_0(0-->2) X never(0-->0)	[K?Receiver_0.b1,Receiver_0.bN,Receiver_0.ab,Receiver_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 2;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		j = 0;
		out->Receiver_0.b1.var = out->globals.K.buffer[0].m0.var;
		cpy[((int *)&out->Receiver_0.b1.pad - (int *)out)] = 0;
		out->Receiver_0.bN.var = out->globals.K.buffer[0].m1.var;
		cpy[((int *)&out->Receiver_0.bN.pad - (int *)out)] = 0;
		out->Receiver_0.ab.var = out->globals.K.buffer[0].m2.var;
		cpy[((int *)&out->Receiver_0.ab.pad - (int *)out)] = 0;
		out->Receiver_0.v.var = out->globals.K.buffer[0].m3.var;
		cpy[((int *)&out->Receiver_0.v.pad - (int *)out)] = 0;
		out->globals.K.filled.var--;
		cpy[((int *)&out->globals.K.filled.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m0.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m0.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m1.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m1.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m2.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m2.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m3.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m3.pad - (int *)out)] = 0;
		transition_labels[0] = 29;
		transition_info.group = 29;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 30: {
		// Receiver_0(2-->3) X never(0-->0)	[Receiver_0.exp_ab = Receiver_0.ab X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 3;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->Receiver_0.exp_ab.var = out->Receiver_0.ab.var;
		cpy[((int *)&out->Receiver_0.exp_ab.pad - (int *)out)] = 0;
		transition_labels[0] = 30;
		transition_info.group = 30;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 31: {
		// Receiver_0(3-->15) X never(0-->0)	[(Receiver_0.ab != Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 15;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 31;
		transition_info.group = 31;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 32: {
		// Receiver_0(15-->8) X never(0-->0)	[L!1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 8;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->globals.L.buffer[out->globals.L.filled.var].m0.var = 1;
		cpy[((int *)&out->globals.L.buffer[out->globals.L.filled.var].m0.pad - (int *)out)] = 0;
		out->globals.L.filled.var++;
		cpy[((int *)&out->globals.L.filled.pad - (int *)out)] = 0;
		transition_labels[0] = 32;
		transition_info.group = 32;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 33: {
		// Receiver_0(8-->3) X never(0-->0)	[K?Receiver_0.b1,Receiver_0.bN,Receiver_0.ab,Receiver_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 3;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		j = 0;
		out->Receiver_0.b1.var = out->globals.K.buffer[0].m0.var;
		cpy[((int *)&out->Receiver_0.b1.pad - (int *)out)] = 0;
		out->Receiver_0.bN.var = out->globals.K.buffer[0].m1.var;
		cpy[((int *)&out->Receiver_0.bN.pad - (int *)out)] = 0;
		out->Receiver_0.ab.var = out->globals.K.buffer[0].m2.var;
		cpy[((int *)&out->Receiver_0.ab.pad - (int *)out)] = 0;
		out->Receiver_0.v.var = out->globals.K.buffer[0].m3.var;
		cpy[((int *)&out->Receiver_0.v.pad - (int *)out)] = 0;
		out->globals.K.filled.var--;
		cpy[((int *)&out->globals.K.filled.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m0.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m0.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m1.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m1.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m2.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m2.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m3.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m3.pad - (int *)out)] = 0;
		transition_labels[0] = 33;
		transition_info.group = 33;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 34: {
		// Receiver_0(3-->4) X never(0-->0)	[(Receiver_0.ab == Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 4;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 34;
		transition_info.group = 34;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 35: {
		// Receiver_0(4-->14) X never(0-->0)	[((b1 != 0 ) && (!(bN != 0 ))) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 14;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 35;
		transition_info.group = 35;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 36: {
		// Receiver_0(14-->6) X Environment_0(0-->1) X never(0-->0)	[Rout!Ifst,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0.i.var = 5;
		cpy[((int *)&out->Environment_0.i.pad - (int *)out)] = 0;
		out->Environment_0.v.var = out->Receiver_0.v.var;
		cpy[((int *)&out->Environment_0.v.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 6;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 1;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 36;
		transition_info.group = 36;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 37: {
		// Environment_0(1-->0) X never(0-->0)	[k++ X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 0;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.k.var++;
		cpy[((int *)&out->globals.k.pad - (int *)out)] = 0;
		out->globals.e[out->globals.k.var].ind.var = out->Environment_0.i.var;
		cpy[((int *)&out->globals.e[out->globals.k.var].ind.pad - (int *)out)] = 0;
		out->globals.e[out->globals.k.var].val.var = out->Environment_0.v.var;
		cpy[((int *)&out->globals.e[out->globals.k.var].val.pad - (int *)out)] = 0;
		out->Environment_0.i.var = 0;
		cpy[((int *)&out->Environment_0.i.pad - (int *)out)] = 0;
		out->Environment_0.v.var = 0;
		cpy[((int *)&out->Environment_0.v.pad - (int *)out)] = 0;
		transition_labels[0] = 37;
		transition_info.group = 37;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 38: {
		// Receiver_0(6-->7) X never(0-->0)	[L!1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 7;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->globals.L.buffer[out->globals.L.filled.var].m0.var = 1;
		cpy[((int *)&out->globals.L.buffer[out->globals.L.filled.var].m0.pad - (int *)out)] = 0;
		out->globals.L.filled.var++;
		cpy[((int *)&out->globals.L.filled.pad - (int *)out)] = 0;
		transition_labels[0] = 38;
		transition_info.group = 38;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 39: {
		// Receiver_0(7-->8) X never(0-->0)	[Receiver_0.exp_ab = (1 - Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 8;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->Receiver_0.exp_ab.var = (1 - out->Receiver_0.exp_ab.var);
		cpy[((int *)&out->Receiver_0.exp_ab.pad - (int *)out)] = 0;
		transition_labels[0] = 39;
		transition_info.group = 39;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 40: {
		// Receiver_0(4-->13) X never(0-->0)	[((!(b1 != 0 )) && (!(bN != 0 ))) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 13;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 40;
		transition_info.group = 40;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 41: {
		// Receiver_0(13-->6) X Environment_0(0-->1) X never(0-->0)	[Rout!Iinc,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0.i.var = 4;
		cpy[((int *)&out->Environment_0.i.pad - (int *)out)] = 0;
		out->Environment_0.v.var = out->Receiver_0.v.var;
		cpy[((int *)&out->Environment_0.v.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 6;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 1;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 41;
		transition_info.group = 41;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 42: {
		// Receiver_0(4-->5) X never(0-->0)	[Receiver_0.bN X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 5;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 42;
		transition_info.group = 42;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 43: {
		// Receiver_0(5-->6) X Environment_0(0-->1) X never(0-->0)	[Rout!Iok,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0.i.var = 3;
		cpy[((int *)&out->Environment_0.i.pad - (int *)out)] = 0;
		out->Environment_0.v.var = out->Receiver_0.v.var;
		cpy[((int *)&out->Environment_0.v.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 6;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 1;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 43;
		transition_info.group = 43;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 44: {
		// Daemon_0(0-->2) X never(0-->0)	[K?Daemon_0.b1,Daemon_0.bN,Daemon_0.ab,Daemon_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Daemon_0._pc.var = 2;
		cpy[((int *)&out->Daemon_0._pc.pad - (int *)out)] = 0;
		j = 0;
		out->Daemon_0.b1.var = out->globals.K.buffer[0].m0.var;
		cpy[((int *)&out->Daemon_0.b1.pad - (int *)out)] = 0;
		out->Daemon_0.bN.var = out->globals.K.buffer[0].m1.var;
		cpy[((int *)&out->Daemon_0.bN.pad - (int *)out)] = 0;
		out->Daemon_0.ab.var = out->globals.K.buffer[0].m2.var;
		cpy[((int *)&out->Daemon_0.ab.pad - (int *)out)] = 0;
		out->Daemon_0.v.var = out->globals.K.buffer[0].m3.var;
		cpy[((int *)&out->Daemon_0.v.pad - (int *)out)] = 0;
		out->globals.K.filled.var--;
		cpy[((int *)&out->globals.K.filled.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m0.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m0.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m1.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m1.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m2.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m2.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m3.var = 0;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m3.pad - (int *)out)] = 0;
		transition_labels[0] = 44;
		transition_info.group = 44;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 45: {
		// Daemon_0(2-->0) X Sender_0(5-->6) X never(0-->0)	[ChunkTimeout!1 X ChunkTimeout?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Daemon_0._pc.var = 0;
		cpy[((int *)&out->Daemon_0._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 6;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 45;
		transition_info.group = 45;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 46: {
		// Sender_0(6-->12) X never(0-->0)	[(Sender_0.rc < 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 12;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Sender_0.rc.var++;
		cpy[((int *)&out->Sender_0.rc.pad - (int *)out)] = 0;
		transition_labels[0] = 46;
		transition_info.group = 46;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 47: {
		// Sender_0(12-->5) X never(0-->0)	[K!(Sender_0.i == 1),(Sender_0.i == n),Sender_0.ab,d[Sender_0.i] X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 5;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m0.var = (out->Sender_0.i.var == 1);
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m0.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m1.var = (out->Sender_0.i.var == out->globals.n.var);
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m1.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m2.var = out->Sender_0.ab.var;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m2.pad - (int *)out)] = 0;
		out->globals.K.buffer[out->globals.K.filled.var].m3.var = out->globals.d[out->Sender_0.i.var].var;
		cpy[((int *)&out->globals.K.buffer[out->globals.K.filled.var].m3.pad - (int *)out)] = 0;
		out->globals.K.filled.var++;
		cpy[((int *)&out->globals.K.filled.pad - (int *)out)] = 0;
		transition_labels[0] = 47;
		transition_info.group = 47;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 48: {
		// Sender_0(6-->7) X never(0-->0)	[(Sender_0.rc >= 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 7;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 48;
		transition_info.group = 48;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 49: {
		// Sender_0(7-->11) X never(0-->0)	[(Sender_0.i == n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 11;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 49;
		transition_info.group = 49;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 50: {
		// Sender_0(11-->9) X Environment_0(0-->0) X never(0-->0)	[Sout!Idk X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->globals.sInd.var = 2;
		cpy[((int *)&out->globals.sInd.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 9;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 0;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 50;
		transition_info.group = 50;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 51: {
		// Sender_0(9-->10) X Receiver_0(8-->9) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 10;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 9;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 51;
		transition_info.group = 51;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 52: {
		// Receiver_0(9-->12) X never(0-->0)	[Receiver_0.bN X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 12;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 52;
		transition_info.group = 52;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 53: {
		// Receiver_0(12-->11) X never(0-->0)	[skip X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 11;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 53;
		transition_info.group = 53;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 54: {
		// Receiver_0(11-->0) X Sender_0(10-->1) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 0;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 1;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Sender_0.ab.var = 0;
		cpy[((int *)&out->Sender_0.ab.pad - (int *)out)] = 0;
		transition_labels[0] = 54;
		transition_info.group = 54;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 55: {
		// Receiver_0(9-->10) X never(0-->0)	[(!(bN != 0 )) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 10;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 55;
		transition_info.group = 55;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 56: {
		// Receiver_0(10-->11) X Environment_0(0-->1) X never(0-->0)	[Rout!Inok,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0.i.var = 1;
		cpy[((int *)&out->Environment_0.i.pad - (int *)out)] = 0;
		out->Environment_0.v.var = out->Receiver_0.v.var;
		cpy[((int *)&out->Environment_0.v.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 11;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 1;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 56;
		transition_info.group = 56;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 57: {
		// Sender_0(9-->10) X Receiver_0(0-->1) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 10;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 1;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 57;
		transition_info.group = 57;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 58: {
		// Receiver_0(1-->0) X Sender_0(10-->1) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Receiver_0._pc.var = 0;
		cpy[((int *)&out->Receiver_0._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 1;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Sender_0.ab.var = 0;
		cpy[((int *)&out->Sender_0.ab.pad - (int *)out)] = 0;
		transition_labels[0] = 58;
		transition_info.group = 58;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 59: {
		// Sender_0(7-->8) X never(0-->0)	[(Sender_0.i != n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 8;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 59;
		transition_info.group = 59;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 60: {
		// Sender_0(8-->9) X Environment_0(0-->0) X never(0-->0)	[Sout!Inok X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->globals.sInd.var = 1;
		cpy[((int *)&out->globals.sInd.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 9;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 0;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 60;
		transition_info.group = 60;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 61: {
		// Daemon_0(0-->1) X never(0-->0)	[L?Daemon_0.b X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Daemon_0._pc.var = 1;
		cpy[((int *)&out->Daemon_0._pc.pad - (int *)out)] = 0;
		j = 0;
		out->Daemon_0.b.var = out->globals.L.buffer[0].m0.var;
		cpy[((int *)&out->Daemon_0.b.pad - (int *)out)] = 0;
		out->globals.L.filled.var--;
		cpy[((int *)&out->globals.L.filled.pad - (int *)out)] = 0;
		out->globals.L.buffer[out->globals.L.filled.var].m0.var = 0;
		cpy[((int *)&out->globals.L.buffer[out->globals.L.filled.var].m0.pad - (int *)out)] = 0;
		transition_labels[0] = 61;
		transition_info.group = 61;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 62: {
		// Daemon_0(1-->0) X Sender_0(5-->6) X never(0-->0)	[ChunkTimeout!1 X ChunkTimeout?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Daemon_0._pc.var = 0;
		cpy[((int *)&out->Daemon_0._pc.pad - (int *)out)] = 0;
		out->Sender_0._pc.var = 6;
		cpy[((int *)&out->Sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 62;
		transition_info.group = 62;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 63: {
		// never(0-->0)	[assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		if(!((!out->globals.checknow.var) || (((!(out->globals.k.var > 0)) || ((((((((((!(out->globals.k.var >= 1)) || ((!(out->globals.e[1].ind.var != 1)) || (out->globals.e[1].val.var == out->globals.d[1].var))) && ((!(out->globals.k.var >= 2)) || ((!(out->globals.e[2].ind.var != 1)) || (out->globals.e[2].val.var == out->globals.d[2].var)))) && ((!(out->globals.k.var >= 3)) || ((!(out->globals.e[3].ind.var != 1)) || (out->globals.e[3].val.var == out->globals.d[3].var)))) && ((!(out->globals.n.var > 1)) || (out->globals.e[1].ind.var == 5))) && ((!(out->globals.k.var > 2)) || (out->globals.e[2].ind.var == 4))) && ((((out->globals.e[out->globals.k.var].ind.var == 3) || (out->globals.e[out->globals.k.var].ind.var == 1)) && ((!(out->globals.e[out->globals.k.var].ind.var == 3)) || (out->globals.k.var == out->globals.n.var))) && ((!(out->globals.e[out->globals.k.var].ind.var == 1)) || (out->globals.k.var > 1)))) && ((!(out->globals.sInd.var == 3)) || (out->globals.e[out->globals.k.var].ind.var == 3))) && ((!(out->globals.sInd.var == 1)) || (out->globals.e[out->globals.k.var].ind.var == 1))) && ((!(out->globals.sInd.var == 2)) || (out->globals.k.var == out->globals.n.var)))) && ((!(out->globals.k.var == 0)) || ((((out->globals.sInd.var == 2) && (out->globals.n.var == 1)) || ((out->globals.sInd.var != 2) && (out->globals.n.var != 1))) && (((out->globals.sInd.var == 1) && (out->globals.n.var > 1)) || ((out->globals.sInd.var != 1) && (out->globals.n.var <= 1)))))))) {
			transition_labels[1] = 1;
		}
		transition_labels[0] = 63;
		transition_info.group = 63;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	}
	return 0;
}

int spins_get_successor (void* model, int t, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, t };
	int states_emitted = 0;
	int minus_one = -1;
	int *atomic = &minus_one;
	sj_struct_state_t local_state;
	sj_struct_state_t* out = &local_state;
	int i;
	int j;

	switch(t) {
	case 0: {
		// Environment_0(0-->2) X Sender_0(1-->2) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 0) &&
			(in->Sender_0._pc.var == 1) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 0, in, callback, arg);
		}
		return states_emitted;
	}
	case 1: {
		// Environment_0(0-->2) X Sender_0(2-->3) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 0) &&
			(in->Sender_0._pc.var == 2) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 1, in, callback, arg);
		}
		return states_emitted;
	}
	case 2: {
		// Sender_0(3-->4) X never(0-->0)	[K!(Sender_0.i == 1),(Sender_0.i == n),Sender_0.ab,d[Sender_0.i] X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 3) &&
			(in->globals.K.filled.var < 1) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 2, in, callback, arg);
		}
		return states_emitted;
	}
	case 3: {
		// Sender_0(4-->5) X never(0-->0)	[Sender_0.rc = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 4) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 3, in, callback, arg);
		}
		return states_emitted;
	}
	case 4: {
		// Sender_0(5-->13) X never(0-->0)	[L?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 5) &&
			(in->globals.L.filled.var > 0) &&
			(in->globals.L.buffer[0].m0.var == 1) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 4, in, callback, arg);
		}
		return states_emitted;
	}
	case 5: {
		// Sender_0(13-->14) X never(0-->0)	[(Sender_0.i == n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 13) &&
			(in->Sender_0.i.var == in->globals.n.var) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 5, in, callback, arg);
		}
		return states_emitted;
	}
	case 6: {
		// Sender_0(14-->1) X Environment_0(0-->0) X never(0-->0)	[Sout!Iok X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 14) &&
			(in->Environment_0._pc.var == 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 6, in, callback, arg);
		}
		return states_emitted;
	}
	case 7: {
		// Sender_0(13-->3) X never(0-->0)	[(Sender_0.i < n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 13) &&
			(in->Sender_0.i.var < in->globals.n.var) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 7, in, callback, arg);
		}
		return states_emitted;
	}
	case 8: {
		// Environment_0(2-->11) X never(0-->0)	[(n > 0) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 2) &&
			(in->globals.n.var > 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 8, in, callback, arg);
		}
		return states_emitted;
	}
	case 9: {
		// Environment_0(11-->12) X never(0-->0)	[checknow = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 11) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 9, in, callback, arg);
		}
		return states_emitted;
	}
	case 10: {
		// Environment_0(12-->3) X never(0-->0)	[checknow = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 12) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 10, in, callback, arg);
		}
		return states_emitted;
	}
	case 11: {
		// Environment_0(3-->4) X never(0-->0)	[d[1] = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 3) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 11, in, callback, arg);
		}
		return states_emitted;
	}
	case 12: {
		// Environment_0(4-->5) X never(0-->0)	[n = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 4) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 12, in, callback, arg);
		}
		return states_emitted;
	}
	case 13: {
		// Environment_0(5-->10) X never(0-->0)	[(n == 1) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 5) &&
			(in->globals.n.var == 1) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 13, in, callback, arg);
		}
		return states_emitted;
	}
	case 14: {
		// Environment_0(10-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 10) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 14, in, callback, arg);
		}
		return states_emitted;
	}
	case 15: {
		// Environment_0(7-->8) X never(0-->0)	[k = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 7) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 15, in, callback, arg);
		}
		return states_emitted;
	}
	case 16: {
		// Environment_0(8-->0) X Sender_0(1-->2) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 8) &&
			(in->Sender_0._pc.var == 1) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 16, in, callback, arg);
		}
		return states_emitted;
	}
	case 17: {
		// Environment_0(8-->0) X Sender_0(2-->3) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 8) &&
			(in->Sender_0._pc.var == 2) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 17, in, callback, arg);
		}
		return states_emitted;
	}
	case 18: {
		// Environment_0(5-->9) X never(0-->0)	[(n == 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 5) &&
			(in->globals.n.var == 2) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 18, in, callback, arg);
		}
		return states_emitted;
	}
	case 19: {
		// Environment_0(9-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 9) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 19, in, callback, arg);
		}
		return states_emitted;
	}
	case 20: {
		// Environment_0(9-->7) X never(0-->0)	[d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 9) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 20, in, callback, arg);
		}
		return states_emitted;
	}
	case 21: {
		// Environment_0(5-->6) X never(0-->0)	[(n == 3) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 5) &&
			(in->globals.n.var == 3) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 21, in, callback, arg);
		}
		return states_emitted;
	}
	case 22: {
		// Environment_0(6-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 6) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 22, in, callback, arg);
		}
		return states_emitted;
	}
	case 23: {
		// Environment_0(6-->7) X never(0-->0)	[d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 6) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 23, in, callback, arg);
		}
		return states_emitted;
	}
	case 24: {
		// Environment_0(6-->7) X never(0-->0)	[d[3] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 6) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 24, in, callback, arg);
		}
		return states_emitted;
	}
	case 25: {
		// Environment_0(4-->5) X never(0-->0)	[n = 2 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 4) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 25, in, callback, arg);
		}
		return states_emitted;
	}
	case 26: {
		// Environment_0(4-->5) X never(0-->0)	[n = 3 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 4) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 26, in, callback, arg);
		}
		return states_emitted;
	}
	case 27: {
		// Environment_0(2-->3) X never(0-->0)	[tau X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 2) &&
			(in->globals.n.var <= 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 27, in, callback, arg);
		}
		return states_emitted;
	}
	case 28: {
		// Sender_0(0-->1) X never(0-->0)	[Sender_0.ab = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 28, in, callback, arg);
		}
		return states_emitted;
	}
	case 29: {
		// Receiver_0(0-->2) X never(0-->0)	[K?Receiver_0.b1,Receiver_0.bN,Receiver_0.ab,Receiver_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 0) &&
			(in->globals.K.filled.var > 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 29, in, callback, arg);
		}
		return states_emitted;
	}
	case 30: {
		// Receiver_0(2-->3) X never(0-->0)	[Receiver_0.exp_ab = Receiver_0.ab X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 2) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 30, in, callback, arg);
		}
		return states_emitted;
	}
	case 31: {
		// Receiver_0(3-->15) X never(0-->0)	[(Receiver_0.ab != Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 3) &&
			(in->Receiver_0.ab.var != in->Receiver_0.exp_ab.var) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 31, in, callback, arg);
		}
		return states_emitted;
	}
	case 32: {
		// Receiver_0(15-->8) X never(0-->0)	[L!1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 15) &&
			(in->globals.L.filled.var < 1) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 32, in, callback, arg);
		}
		return states_emitted;
	}
	case 33: {
		// Receiver_0(8-->3) X never(0-->0)	[K?Receiver_0.b1,Receiver_0.bN,Receiver_0.ab,Receiver_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 8) &&
			(in->globals.K.filled.var > 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 33, in, callback, arg);
		}
		return states_emitted;
	}
	case 34: {
		// Receiver_0(3-->4) X never(0-->0)	[(Receiver_0.ab == Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 3) &&
			(in->Receiver_0.ab.var == in->Receiver_0.exp_ab.var) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 34, in, callback, arg);
		}
		return states_emitted;
	}
	case 35: {
		// Receiver_0(4-->14) X never(0-->0)	[((b1 != 0 ) && (!(bN != 0 ))) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 4) &&
			(in->Receiver_0.b1.var && (!in->Receiver_0.bN.var)) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 35, in, callback, arg);
		}
		return states_emitted;
	}
	case 36: {
		// Receiver_0(14-->6) X Environment_0(0-->1) X never(0-->0)	[Rout!Ifst,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 14) &&
			(in->Environment_0._pc.var == 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 36, in, callback, arg);
		}
		return states_emitted;
	}
	case 37: {
		// Environment_0(1-->0) X never(0-->0)	[k++ X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Environment_0._pc.var == 1) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 37, in, callback, arg);
		}
		return states_emitted;
	}
	case 38: {
		// Receiver_0(6-->7) X never(0-->0)	[L!1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 6) &&
			(in->globals.L.filled.var < 1) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 38, in, callback, arg);
		}
		return states_emitted;
	}
	case 39: {
		// Receiver_0(7-->8) X never(0-->0)	[Receiver_0.exp_ab = (1 - Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 7) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 39, in, callback, arg);
		}
		return states_emitted;
	}
	case 40: {
		// Receiver_0(4-->13) X never(0-->0)	[((!(b1 != 0 )) && (!(bN != 0 ))) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 4) &&
			((!in->Receiver_0.b1.var) && (!in->Receiver_0.bN.var)) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 40, in, callback, arg);
		}
		return states_emitted;
	}
	case 41: {
		// Receiver_0(13-->6) X Environment_0(0-->1) X never(0-->0)	[Rout!Iinc,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 13) &&
			(in->Environment_0._pc.var == 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 41, in, callback, arg);
		}
		return states_emitted;
	}
	case 42: {
		// Receiver_0(4-->5) X never(0-->0)	[Receiver_0.bN X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 4) &&
			in->Receiver_0.bN.var &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 42, in, callback, arg);
		}
		return states_emitted;
	}
	case 43: {
		// Receiver_0(5-->6) X Environment_0(0-->1) X never(0-->0)	[Rout!Iok,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 5) &&
			(in->Environment_0._pc.var == 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 43, in, callback, arg);
		}
		return states_emitted;
	}
	case 44: {
		// Daemon_0(0-->2) X never(0-->0)	[K?Daemon_0.b1,Daemon_0.bN,Daemon_0.ab,Daemon_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Daemon_0._pc.var == 0) &&
			(in->globals.K.filled.var > 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 44, in, callback, arg);
		}
		return states_emitted;
	}
	case 45: {
		// Daemon_0(2-->0) X Sender_0(5-->6) X never(0-->0)	[ChunkTimeout!1 X ChunkTimeout?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Daemon_0._pc.var == 2) &&
			(in->Sender_0._pc.var == 5) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 45, in, callback, arg);
		}
		return states_emitted;
	}
	case 46: {
		// Sender_0(6-->12) X never(0-->0)	[(Sender_0.rc < 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 6) &&
			(in->Sender_0.rc.var < 2) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 46, in, callback, arg);
		}
		return states_emitted;
	}
	case 47: {
		// Sender_0(12-->5) X never(0-->0)	[K!(Sender_0.i == 1),(Sender_0.i == n),Sender_0.ab,d[Sender_0.i] X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 12) &&
			(in->globals.K.filled.var < 1) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 47, in, callback, arg);
		}
		return states_emitted;
	}
	case 48: {
		// Sender_0(6-->7) X never(0-->0)	[(Sender_0.rc >= 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 6) &&
			(in->Sender_0.rc.var >= 2) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 48, in, callback, arg);
		}
		return states_emitted;
	}
	case 49: {
		// Sender_0(7-->11) X never(0-->0)	[(Sender_0.i == n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 7) &&
			(in->Sender_0.i.var == in->globals.n.var) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 49, in, callback, arg);
		}
		return states_emitted;
	}
	case 50: {
		// Sender_0(11-->9) X Environment_0(0-->0) X never(0-->0)	[Sout!Idk X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 11) &&
			(in->Environment_0._pc.var == 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 50, in, callback, arg);
		}
		return states_emitted;
	}
	case 51: {
		// Sender_0(9-->10) X Receiver_0(8-->9) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 9) &&
			(in->Receiver_0._pc.var == 8) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 51, in, callback, arg);
		}
		return states_emitted;
	}
	case 52: {
		// Receiver_0(9-->12) X never(0-->0)	[Receiver_0.bN X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 9) &&
			in->Receiver_0.bN.var &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 52, in, callback, arg);
		}
		return states_emitted;
	}
	case 53: {
		// Receiver_0(12-->11) X never(0-->0)	[skip X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 12) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 53, in, callback, arg);
		}
		return states_emitted;
	}
	case 54: {
		// Receiver_0(11-->0) X Sender_0(10-->1) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 11) &&
			(in->Sender_0._pc.var == 10) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 54, in, callback, arg);
		}
		return states_emitted;
	}
	case 55: {
		// Receiver_0(9-->10) X never(0-->0)	[(!(bN != 0 )) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 9) &&
			(!in->Receiver_0.bN.var) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 55, in, callback, arg);
		}
		return states_emitted;
	}
	case 56: {
		// Receiver_0(10-->11) X Environment_0(0-->1) X never(0-->0)	[Rout!Inok,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 10) &&
			(in->Environment_0._pc.var == 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 56, in, callback, arg);
		}
		return states_emitted;
	}
	case 57: {
		// Sender_0(9-->10) X Receiver_0(0-->1) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 9) &&
			(in->Receiver_0._pc.var == 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 57, in, callback, arg);
		}
		return states_emitted;
	}
	case 58: {
		// Receiver_0(1-->0) X Sender_0(10-->1) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Receiver_0._pc.var == 1) &&
			(in->Sender_0._pc.var == 10) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 58, in, callback, arg);
		}
		return states_emitted;
	}
	case 59: {
		// Sender_0(7-->8) X never(0-->0)	[(Sender_0.i != n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 7) &&
			(in->Sender_0.i.var != in->globals.n.var) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 59, in, callback, arg);
		}
		return states_emitted;
	}
	case 60: {
		// Sender_0(8-->9) X Environment_0(0-->0) X never(0-->0)	[Sout!Inok X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Sender_0._pc.var == 8) &&
			(in->Environment_0._pc.var == 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 60, in, callback, arg);
		}
		return states_emitted;
	}
	case 61: {
		// Daemon_0(0-->1) X never(0-->0)	[L?Daemon_0.b X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Daemon_0._pc.var == 0) &&
			(in->globals.L.filled.var > 0) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 61, in, callback, arg);
		}
		return states_emitted;
	}
	case 62: {
		// Daemon_0(1-->0) X Sender_0(5-->6) X never(0-->0)	[ChunkTimeout!1 X ChunkTimeout?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->Daemon_0._pc.var == 1) &&
			(in->Sender_0._pc.var == 5) &&
			(in->never._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 62, in, callback, arg);
		}
		return states_emitted;
	}
	case 63: {
		// never(0-->0)	[assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
		if ((in->never._pc.var == 0) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) &&
			((in->never._pc.var != 0) || (in->Sender_0._pc.var != 13)) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->Sender_0._pc.var != 1)) &&
			((in->never._pc.var != 0) || ((in->Sender_0._pc.var != 2) || (in->Environment_0._pc.var != 8))) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 5)) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 9)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 5)) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 6)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 6)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 4)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 4)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 2)) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->globals.K.filled.var <= 0)) &&
			((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 3)) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->globals.L.filled.var >= 1)) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 4)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) &&
			((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 4)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) &&
			((in->never._pc.var != 0) || (in->globals.K.filled.var <= 0)) &&
			((in->never._pc.var != 0) || (in->Sender_0._pc.var != 5)) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->globals.K.filled.var >= 1)) &&
			((in->never._pc.var != 0) || (in->Sender_0._pc.var != 6)) &&
			((in->never._pc.var != 0) || (in->Sender_0.i.var != in->globals.n.var)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) &&
			((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 8)) &&
			((in->never._pc.var != 0) || (!in->Receiver_0.bN.var)) &&
			(in->never._pc.var != 0) &&
			(in->never._pc.var != 0) &&
			((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 9)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) &&
			((in->never._pc.var != 0) || ((in->Receiver_0._pc.var != 0) || (in->Sender_0._pc.var != 9))) &&
			((in->never._pc.var != 0) || (in->Sender_0._pc.var != 10)) &&
			((in->never._pc.var != 0) || (in->Sender_0._pc.var != 7)) &&
			((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) &&
			((in->never._pc.var != 0) || ((in->globals.L.filled.var <= 0) || (in->Daemon_0._pc.var != 0))) &&
			((in->never._pc.var != 0) || (in->Sender_0._pc.var != 5))) {
			states_emitted += spins_get_actions (model, 63, in, callback, arg);
		}
		return states_emitted;
	}
	}
	return 0;
}

int spins_get_successor_sid0( void* model, state_t *in, void *arg, state_t *out, int *cpy_src) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int i;
	int j;

	// Environment_0(4-->5) X never(0-->0)	[n = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 4)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 5;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.n.var = 1;
		cpy[((int *)&out->globals.n.pad - (int *)out)] = 0;
		transition_info.group = 12;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(5-->10) X never(0-->0)	[(n == 1) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 5)
	&&(in->globals.n.var == 1)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 10;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_info.group = 13;
		spins_simple_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(10-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 10)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[1].var = 1;
		cpy[((int *)&out->globals.d[1].pad - (int *)out)] = 0;
		transition_info.group = 14;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(7-->8) X never(0-->0)	[k = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 7)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 8;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.k.var = 0;
		cpy[((int *)&out->globals.k.pad - (int *)out)] = 0;
		transition_info.group = 15;
		spins_simple_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(5-->9) X never(0-->0)	[(n == 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 5)
	&&(in->globals.n.var == 2)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 9;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_info.group = 18;
		spins_simple_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(9-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 9)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[1].var = 1;
		cpy[((int *)&out->globals.d[1].pad - (int *)out)] = 0;
		transition_info.group = 19;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(9-->7) X never(0-->0)	[d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 9)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[2].var = 1;
		cpy[((int *)&out->globals.d[2].pad - (int *)out)] = 0;
		transition_info.group = 20;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(5-->6) X never(0-->0)	[(n == 3) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 5)
	&&(in->globals.n.var == 3)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 6;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		transition_info.group = 21;
		spins_simple_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(6-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 6)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[1].var = 1;
		cpy[((int *)&out->globals.d[1].pad - (int *)out)] = 0;
		transition_info.group = 22;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(6-->7) X never(0-->0)	[d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 6)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[2].var = 1;
		cpy[((int *)&out->globals.d[2].pad - (int *)out)] = 0;
		transition_info.group = 23;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(6-->7) X never(0-->0)	[d[3] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 6)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 7;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.d[3].var = 1;
		cpy[((int *)&out->globals.d[3].pad - (int *)out)] = 0;
		transition_info.group = 24;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(4-->5) X never(0-->0)	[n = 2 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 4)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 5;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.n.var = 2;
		cpy[((int *)&out->globals.n.pad - (int *)out)] = 0;
		transition_info.group = 25;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// Environment_0(4-->5) X never(0-->0)	[n = 3 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if ((in->Environment_0._pc.var == 4)
	&&(in->never._pc.var == 0)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[43]; memcpy(cpy, cpy_src, sizeof(int[43]));

		out->never._pc.var = 0;
		cpy[((int *)&out->never._pc.pad - (int *)out)] = 0;
		out->Environment_0._pc.var = 5;
		cpy[((int *)&out->Environment_0._pc.pad - (int *)out)] = 0;
		out->globals.n.var = 3;
		cpy[((int *)&out->globals.n.pad - (int *)out)] = 0;
		transition_info.group = 26;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	return states_emitted;
}

int spins_get_successor_sid1( void* model, state_t *in, void *arg, state_t *out, int *cpy_src) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int i;
	int j;

	return states_emitted;
}

int spins_get_successor_sid2( void* model, state_t *in, void *arg, state_t *out, int *cpy_src) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int i;
	int j;

	return states_emitted;
}

int spins_get_successor_sid3( void* model, state_t *in, void *arg, state_t *out, int *cpy_src) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int i;
	int j;

	return states_emitted;
}

int spins_get_successor_sid( void* model, state_t *in, void *arg, state_t *out, int atomic, int *cpy_src) {
	switch (atomic) {
	case 0: return spins_get_successor_sid0(model, in, arg, out, cpy_src); break;
	case 1: return spins_get_successor_sid1(model, in, arg, out, cpy_src); break;
	case 2: return spins_get_successor_sid2(model, in, arg, out, cpy_src); break;
	case 3: return spins_get_successor_sid3(model, in, arg, out, cpy_src); break;
	default: printf("Wrong structural ID"); exit(-1);
	}
}

int spins_get_successor_all( void* model, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int *__guards = spins_get_guards(in);
	state_t tmp;
	state_t *out = &tmp;
	int i;
	int j;

	// Environment_0(0-->2) X Sender_0(1-->2) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[0] &&
		__guards[1] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 0, in, callback, arg);
	}
	// Environment_0(0-->2) X Sender_0(2-->3) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[0] &&
		__guards[3] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 1, in, callback, arg);
	}
	// Sender_0(3-->4) X never(0-->0)	[K!(Sender_0.i == 1),(Sender_0.i == n),Sender_0.ab,d[Sender_0.i] X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[4] &&
		__guards[5] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 2, in, callback, arg);
	}
	// Sender_0(4-->5) X never(0-->0)	[Sender_0.rc = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[6] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 3, in, callback, arg);
	}
	// Sender_0(5-->13) X never(0-->0)	[L?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[7] &&
		__guards[8] &&
		__guards[9] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 4, in, callback, arg);
	}
	// Sender_0(13-->14) X never(0-->0)	[(Sender_0.i == n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[10] &&
		__guards[11] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 5, in, callback, arg);
	}
	// Sender_0(14-->1) X Environment_0(0-->0) X never(0-->0)	[Sout!Iok X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[12] &&
		__guards[0] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 6, in, callback, arg);
	}
	// Sender_0(13-->3) X never(0-->0)	[(Sender_0.i < n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[10] &&
		__guards[13] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 7, in, callback, arg);
	}
	// Environment_0(2-->11) X never(0-->0)	[(n > 0) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[14] &&
		__guards[15] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 8, in, callback, arg);
	}
	// Environment_0(11-->12) X never(0-->0)	[checknow = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[16] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 9, in, callback, arg);
	}
	// Environment_0(12-->3) X never(0-->0)	[checknow = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[17] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 10, in, callback, arg);
	}
	// Environment_0(3-->4) X never(0-->0)	[d[1] = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[18] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 11, in, callback, arg);
	}
	// Environment_0(4-->5) X never(0-->0)	[n = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[19] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 12, in, callback, arg);
	}
	// Environment_0(5-->10) X never(0-->0)	[(n == 1) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[20] &&
		__guards[21] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 13, in, callback, arg);
	}
	// Environment_0(10-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[22] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 14, in, callback, arg);
	}
	// Environment_0(7-->8) X never(0-->0)	[k = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[23] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 15, in, callback, arg);
	}
	// Environment_0(8-->0) X Sender_0(1-->2) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[24] &&
		__guards[1] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 16, in, callback, arg);
	}
	// Environment_0(8-->0) X Sender_0(2-->3) X never(0-->0)	[Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[24] &&
		__guards[3] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 17, in, callback, arg);
	}
	// Environment_0(5-->9) X never(0-->0)	[(n == 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[20] &&
		__guards[25] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 18, in, callback, arg);
	}
	// Environment_0(9-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[26] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 19, in, callback, arg);
	}
	// Environment_0(9-->7) X never(0-->0)	[d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[26] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 20, in, callback, arg);
	}
	// Environment_0(5-->6) X never(0-->0)	[(n == 3) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[20] &&
		__guards[27] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 21, in, callback, arg);
	}
	// Environment_0(6-->7) X never(0-->0)	[d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[28] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 22, in, callback, arg);
	}
	// Environment_0(6-->7) X never(0-->0)	[d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[28] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 23, in, callback, arg);
	}
	// Environment_0(6-->7) X never(0-->0)	[d[3] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[28] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 24, in, callback, arg);
	}
	// Environment_0(4-->5) X never(0-->0)	[n = 2 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[19] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 25, in, callback, arg);
	}
	// Environment_0(4-->5) X never(0-->0)	[n = 3 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[19] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 26, in, callback, arg);
	}
	// Environment_0(2-->3) X never(0-->0)	[tau X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[14] &&
		__guards[29] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 27, in, callback, arg);
	}
	// Sender_0(0-->1) X never(0-->0)	[Sender_0.ab = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[30] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 28, in, callback, arg);
	}
	// Receiver_0(0-->2) X never(0-->0)	[K?Receiver_0.b1,Receiver_0.bN,Receiver_0.ab,Receiver_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[31] &&
		__guards[32] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 29, in, callback, arg);
	}
	// Receiver_0(2-->3) X never(0-->0)	[Receiver_0.exp_ab = Receiver_0.ab X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[33] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 30, in, callback, arg);
	}
	// Receiver_0(3-->15) X never(0-->0)	[(Receiver_0.ab != Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[34] &&
		__guards[35] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 31, in, callback, arg);
	}
	// Receiver_0(15-->8) X never(0-->0)	[L!1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[36] &&
		__guards[37] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 32, in, callback, arg);
	}
	// Receiver_0(8-->3) X never(0-->0)	[K?Receiver_0.b1,Receiver_0.bN,Receiver_0.ab,Receiver_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[38] &&
		__guards[32] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 33, in, callback, arg);
	}
	// Receiver_0(3-->4) X never(0-->0)	[(Receiver_0.ab == Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[34] &&
		__guards[39] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 34, in, callback, arg);
	}
	// Receiver_0(4-->14) X never(0-->0)	[((b1 != 0 ) && (!(bN != 0 ))) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[40] &&
		__guards[41] &&
		__guards[42] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 35, in, callback, arg);
	}
	// Receiver_0(14-->6) X Environment_0(0-->1) X never(0-->0)	[Rout!Ifst,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[43] &&
		__guards[0] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 36, in, callback, arg);
	}
	// Environment_0(1-->0) X never(0-->0)	[k++ X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[44] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 37, in, callback, arg);
	}
	// Receiver_0(6-->7) X never(0-->0)	[L!1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[45] &&
		__guards[37] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 38, in, callback, arg);
	}
	// Receiver_0(7-->8) X never(0-->0)	[Receiver_0.exp_ab = (1 - Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[46] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 39, in, callback, arg);
	}
	// Receiver_0(4-->13) X never(0-->0)	[((!(b1 != 0 )) && (!(bN != 0 ))) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[40] &&
		__guards[47] &&
		__guards[42] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 40, in, callback, arg);
	}
	// Receiver_0(13-->6) X Environment_0(0-->1) X never(0-->0)	[Rout!Iinc,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[48] &&
		__guards[0] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 41, in, callback, arg);
	}
	// Receiver_0(4-->5) X never(0-->0)	[Receiver_0.bN X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[40] &&
		__guards[49] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 42, in, callback, arg);
	}
	// Receiver_0(5-->6) X Environment_0(0-->1) X never(0-->0)	[Rout!Iok,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[50] &&
		__guards[0] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 43, in, callback, arg);
	}
	// Daemon_0(0-->2) X never(0-->0)	[K?Daemon_0.b1,Daemon_0.bN,Daemon_0.ab,Daemon_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[51] &&
		__guards[32] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 44, in, callback, arg);
	}
	// Daemon_0(2-->0) X Sender_0(5-->6) X never(0-->0)	[ChunkTimeout!1 X ChunkTimeout?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[52] &&
		__guards[7] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 45, in, callback, arg);
	}
	// Sender_0(6-->12) X never(0-->0)	[(Sender_0.rc < 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[53] &&
		__guards[54] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 46, in, callback, arg);
	}
	// Sender_0(12-->5) X never(0-->0)	[K!(Sender_0.i == 1),(Sender_0.i == n),Sender_0.ab,d[Sender_0.i] X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[55] &&
		__guards[5] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 47, in, callback, arg);
	}
	// Sender_0(6-->7) X never(0-->0)	[(Sender_0.rc >= 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[53] &&
		__guards[56] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 48, in, callback, arg);
	}
	// Sender_0(7-->11) X never(0-->0)	[(Sender_0.i == n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[57] &&
		__guards[11] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 49, in, callback, arg);
	}
	// Sender_0(11-->9) X Environment_0(0-->0) X never(0-->0)	[Sout!Idk X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[58] &&
		__guards[0] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 50, in, callback, arg);
	}
	// Sender_0(9-->10) X Receiver_0(8-->9) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[59] &&
		__guards[38] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 51, in, callback, arg);
	}
	// Receiver_0(9-->12) X never(0-->0)	[Receiver_0.bN X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[60] &&
		__guards[49] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 52, in, callback, arg);
	}
	// Receiver_0(12-->11) X never(0-->0)	[skip X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[61] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 53, in, callback, arg);
	}
	// Receiver_0(11-->0) X Sender_0(10-->1) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[62] &&
		__guards[63] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 54, in, callback, arg);
	}
	// Receiver_0(9-->10) X never(0-->0)	[(!(bN != 0 )) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[60] &&
		__guards[42] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 55, in, callback, arg);
	}
	// Receiver_0(10-->11) X Environment_0(0-->1) X never(0-->0)	[Rout!Inok,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[64] &&
		__guards[0] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 56, in, callback, arg);
	}
	// Sender_0(9-->10) X Receiver_0(0-->1) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[59] &&
		__guards[31] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 57, in, callback, arg);
	}
	// Receiver_0(1-->0) X Sender_0(10-->1) X never(0-->0)	[SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[65] &&
		__guards[63] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 58, in, callback, arg);
	}
	// Sender_0(7-->8) X never(0-->0)	[(Sender_0.i != n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[57] &&
		__guards[66] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 59, in, callback, arg);
	}
	// Sender_0(8-->9) X Environment_0(0-->0) X never(0-->0)	[Sout!Inok X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[67] &&
		__guards[0] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 60, in, callback, arg);
	}
	// Daemon_0(0-->1) X never(0-->0)	[L?Daemon_0.b X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[51] &&
		__guards[8] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 61, in, callback, arg);
	}
	// Daemon_0(1-->0) X Sender_0(5-->6) X never(0-->0)	[ChunkTimeout!1 X ChunkTimeout?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[68] &&
		__guards[7] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 62, in, callback, arg);
	}
	// never(0-->0)	[assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1
	if (__guards[2] &&
		__guards[69] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[69] &&
		__guards[71] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[72] &&
		__guards[73] &&
		__guards[74] &&
		__guards[70] &&
		__guards[75] &&
		__guards[74] &&
		__guards[70] &&
		__guards[76] &&
		__guards[76] &&
		__guards[77] &&
		__guards[77] &&
		__guards[78] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[70] &&
		__guards[79] &&
		__guards[80] &&
		__guards[70] &&
		__guards[69] &&
		__guards[70] &&
		__guards[81] &&
		__guards[70] &&
		__guards[82] &&
		__guards[69] &&
		__guards[82] &&
		__guards[69] &&
		__guards[79] &&
		__guards[83] &&
		__guards[70] &&
		__guards[84] &&
		__guards[85] &&
		__guards[86] &&
		__guards[69] &&
		__guards[87] &&
		__guards[88] &&
		__guards[70] &&
		__guards[70] &&
		__guards[89] &&
		__guards[69] &&
		__guards[90] &&
		__guards[91] &&
		__guards[92] &&
		__guards[69] &&
		__guards[93] &&
		__guards[83]) {
		states_emitted += spins_get_actions (model, 63, in, callback, arg);
		transition_labels[1] = 0;
	}
	return states_emitted;
}

extern int spins_get_transition_groups() {
	return 64;
}

int *act_dm[2][64] = {
	{
		((int[]){ 1, 0 }),
		((int[]){ 1, 1 }),
		((int[]){ 1, 2 }),
		((int[]){ 1, 3 }),
		((int[]){ 1, 4 }),
		((int[]){ 1, 5 }),
		((int[]){ 1, 6 }),
		((int[]){ 1, 7 }),
		((int[]){ 1, 8 }),
		((int[]){ 1, 9 }),
		((int[]){ 1, 10 }),
		((int[]){ 1, 11 }),
		((int[]){ 1, 12 }),
		((int[]){ 1, 13 }),
		((int[]){ 1, 14 }),
		((int[]){ 1, 15 }),
		((int[]){ 1, 16 }),
		((int[]){ 1, 17 }),
		((int[]){ 1, 18 }),
		((int[]){ 1, 19 }),
		((int[]){ 1, 20 }),
		((int[]){ 1, 21 }),
		((int[]){ 1, 22 }),
		((int[]){ 1, 23 }),
		((int[]){ 1, 24 }),
		((int[]){ 1, 25 }),
		((int[]){ 1, 26 }),
		((int[]){ 1, 27 }),
		((int[]){ 1, 28 }),
		((int[]){ 1, 29 }),
		((int[]){ 1, 30 }),
		((int[]){ 1, 31 }),
		((int[]){ 1, 32 }),
		((int[]){ 1, 33 }),
		((int[]){ 1, 34 }),
		((int[]){ 1, 35 }),
		((int[]){ 1, 36 }),
		((int[]){ 1, 37 }),
		((int[]){ 1, 38 }),
		((int[]){ 1, 39 }),
		((int[]){ 1, 40 }),
		((int[]){ 1, 41 }),
		((int[]){ 1, 42 }),
		((int[]){ 1, 43 }),
		((int[]){ 1, 44 }),
		((int[]){ 1, 45 }),
		((int[]){ 1, 46 }),
		((int[]){ 1, 47 }),
		((int[]){ 1, 48 }),
		((int[]){ 1, 49 }),
		((int[]){ 1, 50 }),
		((int[]){ 1, 51 }),
		((int[]){ 1, 52 }),
		((int[]){ 1, 53 }),
		((int[]){ 1, 54 }),
		((int[]){ 1, 55 }),
		((int[]){ 1, 56 }),
		((int[]){ 1, 57 }),
		((int[]){ 1, 58 }),
		((int[]){ 1, 59 }),
		((int[]){ 1, 60 }),
		((int[]){ 1, 61 }),
		((int[]){ 1, 62 }),
		((int[]){ 1, 63 }),
	},
	{
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 1 }),
	},
};


extern const int spins_transition_has_edge(int t, int e, int v)
{
  assert(t < 64, "spins_transition_has_edge: invalid group index %d\n", t);
  assert(e < 2, "spins_transition_has_edge: invalid edge label index %d\n", e);
	int *ar = act_dm[e][t];
	int i;
	for (i = 1; i <= ar[0]; i++) {
	  if (ar[i] == v) return 1;
	}
	return 0;
}

int actions_read_dependency[][43] = {
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 36
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 43
	{0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 53
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 55
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 56
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 57
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 60
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 62
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0}};
int transition_dependency[][3][43] = {
	// { ... read ...}, { ... may write ...}, { ... must write ... }
	{{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 0
	{{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 1
	{{1,0,0,0,1,1,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 2
	{{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 3
	{{1,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 4
	{{1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 5
	{{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 6
	{{1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 7
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 8
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}}, // 9
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}}, // 10
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 11
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 12
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 13
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 14
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 15
	{{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 16
	{{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 17
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 18
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 19
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 20
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 21
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 22
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 23
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 24
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 25
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 26
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 27
	{{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 28
	{{1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0}}, // 29
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0}}, // 30
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 31
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 32
	{{1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0}}, // 33
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 34
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 35
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 36
	{{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 37
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 38
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0}}, // 39
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 40
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 41
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 42
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 43
	{{1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},{1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1},{1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1}}, // 44
	{{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}}, // 45
	{{1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 46
	{{1,0,0,0,1,1,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 47
	{{1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 48
	{{1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 49
	{{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 50
	{{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 51
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 52
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 53
	{{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 54
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 55
	{{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 56
	{{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 57
	{{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}}, // 58
	{{1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 59
	{{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 60
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0}}, // 61
	{{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}}, // 62
	{{1,1,0,0,1,0,0,1,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,0,0,0,1,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}};

extern const int* spins_get_transition_read_dependencies(int t)
{
	if (t>=0 && t < 64) return transition_dependency[t][0];
	return NULL;
}

extern const int* spins_get_transition_may_write_dependencies(int t)
{
  if (t>=0 && t < 64) return transition_dependency[t][1];
  return NULL;
}

// for backwards compatibility:
extern const int* spins_get_transition_write_dependencies(int t)
{
  if (t>=0 && t < 64) return transition_dependency[t][1];
  return NULL;
}

extern const int* spins_get_transition_must_write_dependencies(int t)
{
  if (t>=0 && t < 64) return transition_dependency[t][2];
  return NULL;
}

extern const int* spins_get_actions_read_dependencies(int t)
{
  if (t>=0 && t < 64) return actions_read_dependency[t];
  return NULL;
}


// Label(Guard)-Dependency Matrix:
int gm_dm[][43] = {
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, // 52
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 53
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 55
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 56
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 57
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 60
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 62
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 63
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 64
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 65
	{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 66
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 67
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, // 68
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 69
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 70
	{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 71
	{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 72
	{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 73
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 74
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 75
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 76
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 77
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 78
	{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 79
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 80
	{1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 81
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 82
	{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 83
	{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 84
	{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 85
	{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 86
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 87
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 88
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 89
	{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 90
	{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 91
	{1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 92
	{1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, // 93
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 94
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 95
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 96
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 97
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 98
	{1,1,0,0,1,0,0,1,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,0,0,0,1,0,0,0,0,0}, // 99
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 100
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 101
	{0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0}, // 102
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 103
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 104
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}};

// Transition-Guard Matrix:
int* gm_trans[64] = {
((int[]){ 3, 0, 1, 2 }),	// trans     0
((int[]){ 3, 0, 3, 2 }),	// trans     1
((int[]){ 3, 4, 5, 2 }),	// trans     2
((int[]){ 2, 6, 2 }),	// trans     3
((int[]){ 4, 7, 8, 9, 2 }),	// trans     4
((int[]){ 3, 10, 11, 2 }),	// trans     5
((int[]){ 3, 12, 0, 2 }),	// trans     6
((int[]){ 3, 10, 13, 2 }),	// trans     7
((int[]){ 3, 14, 15, 2 }),	// trans     8
((int[]){ 2, 16, 2 }),	// trans     9
((int[]){ 2, 17, 2 }),	// trans    10
((int[]){ 2, 18, 2 }),	// trans    11
((int[]){ 2, 19, 2 }),	// trans    12
((int[]){ 3, 20, 21, 2 }),	// trans    13
((int[]){ 2, 22, 2 }),	// trans    14
((int[]){ 2, 23, 2 }),	// trans    15
((int[]){ 3, 24, 1, 2 }),	// trans    16
((int[]){ 3, 24, 3, 2 }),	// trans    17
((int[]){ 3, 20, 25, 2 }),	// trans    18
((int[]){ 2, 26, 2 }),	// trans    19
((int[]){ 2, 26, 2 }),	// trans    20
((int[]){ 3, 20, 27, 2 }),	// trans    21
((int[]){ 2, 28, 2 }),	// trans    22
((int[]){ 2, 28, 2 }),	// trans    23
((int[]){ 2, 28, 2 }),	// trans    24
((int[]){ 2, 19, 2 }),	// trans    25
((int[]){ 2, 19, 2 }),	// trans    26
((int[]){ 3, 14, 29, 2 }),	// trans    27
((int[]){ 2, 30, 2 }),	// trans    28
((int[]){ 3, 31, 32, 2 }),	// trans    29
((int[]){ 2, 33, 2 }),	// trans    30
((int[]){ 3, 34, 35, 2 }),	// trans    31
((int[]){ 3, 36, 37, 2 }),	// trans    32
((int[]){ 3, 38, 32, 2 }),	// trans    33
((int[]){ 3, 34, 39, 2 }),	// trans    34
((int[]){ 4, 40, 41, 42, 2 }),	// trans    35
((int[]){ 3, 43, 0, 2 }),	// trans    36
((int[]){ 2, 44, 2 }),	// trans    37
((int[]){ 3, 45, 37, 2 }),	// trans    38
((int[]){ 2, 46, 2 }),	// trans    39
((int[]){ 4, 40, 47, 42, 2 }),	// trans    40
((int[]){ 3, 48, 0, 2 }),	// trans    41
((int[]){ 3, 40, 49, 2 }),	// trans    42
((int[]){ 3, 50, 0, 2 }),	// trans    43
((int[]){ 3, 51, 32, 2 }),	// trans    44
((int[]){ 3, 52, 7, 2 }),	// trans    45
((int[]){ 3, 53, 54, 2 }),	// trans    46
((int[]){ 3, 55, 5, 2 }),	// trans    47
((int[]){ 3, 53, 56, 2 }),	// trans    48
((int[]){ 3, 57, 11, 2 }),	// trans    49
((int[]){ 3, 58, 0, 2 }),	// trans    50
((int[]){ 3, 59, 38, 2 }),	// trans    51
((int[]){ 3, 60, 49, 2 }),	// trans    52
((int[]){ 2, 61, 2 }),	// trans    53
((int[]){ 3, 62, 63, 2 }),	// trans    54
((int[]){ 3, 60, 42, 2 }),	// trans    55
((int[]){ 3, 64, 0, 2 }),	// trans    56
((int[]){ 3, 59, 31, 2 }),	// trans    57
((int[]){ 3, 65, 63, 2 }),	// trans    58
((int[]){ 3, 57, 66, 2 }),	// trans    59
((int[]){ 3, 67, 0, 2 }),	// trans    60
((int[]){ 3, 51, 8, 2 }),	// trans    61
((int[]){ 3, 68, 7, 2 }),	// trans    62
((int[]){ 63, 2, 69, 70, 70, 70, 70, 69, 71, 70, 70, 70, 70, 70, 70, 70, 70, 72, 73, 74, 70, 75, 74, 70, 76, 76, 77, 77, 78, 70, 70, 70, 70, 70, 79, 80, 70, 69, 70, 81, 70, 82, 69, 82, 69, 79, 83, 70, 84, 85, 86, 69, 87, 88, 70, 70, 89, 69, 90, 91, 92, 69, 93, 83 })	// trans    63
};


// Maybe Co-Enabled Matrix:
int co_dm[][106] = {
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 0
	{1,1,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 1
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 2
	{1,0,1,1,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 3
	{1,0,1,0,1,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,1,1}, // 4
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 5
	{1,0,1,0,0,1,1,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 6
	{1,0,1,0,0,1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,0,1,0,1}, // 7
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 8
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 9
	{1,0,1,0,0,1,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,1,0,1}, // 10
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 11
	{1,0,1,0,0,1,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 12
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 13
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 14
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 15
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 16
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 17
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 18
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 19
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 20
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 21
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 22
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 23
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 24
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 25
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 26
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 27
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 28
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 29
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,0,1,0,1}, // 30
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,1}, // 31
	{1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 32
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,0}, // 33
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0}, // 34
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 35
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,1,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 36
	{1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 37
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,1,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 38
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 39
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,1,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 40
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 41
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 42
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,1,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 43
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 44
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,1,0}, // 45
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 46
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 47
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 48
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 49
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 50
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 51
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 52
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 53
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 54
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 55
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 56
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,0,0,1,0,1}, // 57
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 58
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 59
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 60
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 61
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 62
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 63
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 64
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 65
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 66
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 67
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 68
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 69
	{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 70
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 71
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 72
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 73
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 74
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 75
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 76
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 77
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 78
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 79
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 80
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 81
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 82
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 83
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 84
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 85
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 86
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 87
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 88
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 89
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 90
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 91
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 92
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 93
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0}, // 94
	{1,0,1,0,0,1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,0,1,0,1}, // 95
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,0,0,1,0,1}, // 96
	{1,0,1,0,0,1,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,1,0,1}, // 97
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 98
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 99
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,1,0}, // 100
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,0,1,0,1}, // 101
	{0,0,1,0,0,1,0,0,1,1,0,1,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,0,1,0,0,1,0,1,0,1,0,1,1,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,1,0,0,0}, // 102
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,0}, // 103
	{1,0,1,0,1,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,1,1}, // 104
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,1}};


// Do Not Accord Matrix:
int dna_dm[][64] = {
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,0,1,1}, // 0
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,0,1,1}, // 1
	{1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1}, // 2
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1}, // 3
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,1}, // 4
	{1,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1}, // 5
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,0,0,0,1,1,0,1,1,0,1,1}, // 6
	{1,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1}, // 7
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 8
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 9
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 10
	{1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,1,1,0,0,0,0,0,1,0,0,1,1,0,0,1}, // 11
	{1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,1,1,0,0,0,0,0,1,0,0,1,1,0,0,1}, // 12
	{1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 13
	{1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 14
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 15
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,0,1,1}, // 16
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,0,1,1}, // 17
	{1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 18
	{1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 19
	{1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 20
	{1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 21
	{1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 22
	{1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 23
	{1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 24
	{1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,1,1,0,0,0,0,0,1,0,0,1,1,0,0,1}, // 25
	{1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,1,1,0,0,0,0,0,1,0,0,1,1,0,0,1}, // 26
	{1,1,0,0,0,0,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1}, // 27
	{1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,0,1,1,0,1,1}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 31
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 35
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,0,0,1}, // 36
	{1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1}, // 37
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 40
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,0,0,1}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 42
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,0,0,1}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}, // 44
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,1}, // 45
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1}, // 46
	{1,1,1,0,1,1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1}, // 47
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1}, // 48
	{1,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1}, // 49
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,0,1,1}, // 50
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,0,0,0,0,1}, // 53
	{1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}, // 54
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1}, // 55
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,0,1,1,1,1,1,0,1,0,0,1}, // 56
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}, // 57
	{1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}, // 58
	{1,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1}, // 59
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,0,1,1}, // 60
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}, // 61
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,1}, // 62
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};


// Commute Matrix:
int commutes_dm[][64] = {
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,1}, // 0
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,1}, // 1
	{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,1,0,1}, // 2
	{0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,1,1,0,1,1,0,0,0,0,1,0,1}, // 3
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,1}, // 4
	{0,0,0,0,0,1,0,0,1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,1,0,1}, // 5
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0,0,0,0,0,0,1,1,1,1,0,0,1,0,0,1,0,0}, // 6
	{0,0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,1,0,1}, // 7
	{0,0,1,1,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1}, // 8
	{0,0,1,1,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 9
	{0,0,1,1,1,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 10
	{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,0,0,1,1,1,1,1,0,1,1,0,0,1,1,0}, // 11
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 12
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 13
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 14
	{0,0,1,1,1,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 15
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,1}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,1}, // 17
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 18
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 19
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 20
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 21
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 22
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 23
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 24
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 25
	{0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0}, // 26
	{0,0,1,1,1,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1}, // 27
	{0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,0,1,0,1}, // 28
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 29
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 30
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 31
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 32
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 33
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 34
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 35
	{0,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1}, // 36
	{0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0}, // 37
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 38
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 39
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 40
	{0,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1}, // 41
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1}, // 42
	{0,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1}, // 43
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1}, // 44
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,1,1}, // 45
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,1,0,1,1,0,0,0,0,1,0,1}, // 46
	{0,0,0,1,0,0,0,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,1,0,1}, // 47
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,1,1,0,1,1,0,0,0,0,1,0,1}, // 48
	{0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,1,1,0,1,1,0,0,0,0,1,0,1}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0,0,0,0,1,0,1,1,0,1,0,0,0,0,0,1,0,0}, // 50
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1}, // 51
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,1,1,1,1,1}, // 52
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,0,0,1,1,1,1,1}, // 53
	{0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,1}, // 54
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,1,1,1,1,1}, // 55
	{0,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,1,0,1,1,1}, // 56
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1}, // 57
	{0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,1}, // 58
	{0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,1,1,0,0,1,0,1,0,1}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,1,0,0}, // 60
	{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1}, // 61
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,1,1}, // 62
	{1,1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1}};


// Necessary Enabling Matrix:
int nes_dm[][64] = {
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 1
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 9
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 31
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 53
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 55
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 56
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 57
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 60
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0}, // 62
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0}, // 63
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, // 64
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, // 65
	{0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 66
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 67
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 68
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 69
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 70
	{0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 71
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 72
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 73
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 74
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 75
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 76
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 77
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 78
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 79
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 80
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 81
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 82
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 83
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 84
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 85
	{0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 86
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 87
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 88
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0}, // 89
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, // 90
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 91
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 92
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 93
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 94
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 95
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 96
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 97
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 98
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 99
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 100
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 101
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 102
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 103
	{0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 104
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}};


// Necessary Disabling Matrix:
int nds_dm[][64] = {
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 0
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 7
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 8
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 9
	{0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 53
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 55
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 56
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 57
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0}, // 60
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 62
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 63
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 64
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, // 65
	{0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 66
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 67
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 68
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 69
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 70
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 71
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 72
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,0,1,0}, // 73
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 74
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 75
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 76
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 77
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 78
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 79
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 80
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 81
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 82
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 83
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 84
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 85
	{0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 86
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 87
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 88
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 89
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0}, // 90
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 91
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 92
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0}, // 93
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 94
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 95
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 96
	{0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 97
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1,0,0,0,0,0}, // 98
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 99
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 100
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 101
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 102
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 103
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 104
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}};


static const char *matrices[] = {
	"dm_mce_invert1",
	"dm_must_disable",
	"dm_must_enable",
	""
};

static const int matrix_dimensions[][2] = {
	{106, 106},
	{106, 64},
	{106, 64},
	0
};

int dm_mce_invert1[][106] = {
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 0
	{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 1
	{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 2
	{1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 3
	{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1}, // 4
	{1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 5
	{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 6
	{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1}, // 7
	{1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 8
	{1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 9
	{1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1}, // 10
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 11
	{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 12
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 13
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 14
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 15
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 16
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 17
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 18
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 19
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 20
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 21
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 22
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 23
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 24
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 25
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 26
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 27
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 28
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 29
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1}, // 30
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}, // 31
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 32
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}, // 33
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1}, // 34
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 35
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 36
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 37
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 38
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 39
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 40
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 41
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 42
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 43
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 44
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1}, // 45
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 46
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 47
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 48
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 49
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 50
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 51
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 52
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 53
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 54
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 55
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 56
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1}, // 57
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 58
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 59
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 60
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 61
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 62
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 63
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 64
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 65
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 66
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 67
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 68
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 69
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 70
	{1,0,1,0,0,1,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,1,0,1}, // 71
	{1,1,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 72
	{0,0,1,1,0,1,0,0,1,1,0,1,0,1,0,1,0,0,0,0,0,1,0,0,1,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 73
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 74
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 75
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 76
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 77
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 78
	{1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 79
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0}, // 80
	{1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 81
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,1,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 82
	{1,0,1,0,0,1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,0,1,0,1}, // 83
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 84
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 85
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 86
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,1,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 87
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 88
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0}, // 89
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,0,1,0,1,0,1,0,1,1,0,1,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,0,0,0,0,0,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,0,1}, // 90
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,1}, // 91
	{1,0,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,0,0,1,0,1}, // 92
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 93
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1}, // 94
	{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1}, // 95
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1}, // 96
	{1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1}, // 97
	{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 98
	{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 99
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1}, // 100
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1}, // 101
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 102
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}, // 103
	{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1}, // 104
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}};

int dm_must_disable[][64] = {
	{1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 0
	{1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,0,1,1,0,1,0}, // 1
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 3
	{1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 4
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 6
	{1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 7
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 8
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 10
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 12
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{1,1,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 16
	{1,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 17
	{1,1,0,0,0,0,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 18
	{1,1,0,0,0,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 19
	{1,1,0,0,0,0,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 22
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,0,1,1,1,1,0,0,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 23
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,0,1,1,1,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,1,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 43
	{1,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 46
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0}, // 52
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,0,0}, // 53
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 55
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 56
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 57
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 58
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,0,1,0,0,1,1,1,0,0,1,0}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0}, // 60
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,0,0,0,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,0,1,1,0,1,1,0,0,0,0,0}, // 62
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,0,1,0}, // 63
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,0,1,1,1,0,0,0,0,0}, // 64
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,0,0,0,0,0}, // 65
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 66
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,0,1,0,1,0}, // 67
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 68
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 69
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 70
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 71
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 72
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 73
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 74
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 75
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 76
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 77
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 78
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 79
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 80
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 81
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 82
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 83
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 84
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 85
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 86
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 87
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 88
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 89
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 90
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0}, // 91
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 92
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 93
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 94
	{1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 95
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 96
	{1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 97
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0}, // 98
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 99
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 100
	{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 101
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 102
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0}, // 103
	{1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,0}, // 104
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,0,1,1,1,0,0,0,0,0,0}};

int dm_must_enable[][64] = {
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 0
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 1
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 2
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 31
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 53
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 55
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 56
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 57
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 60
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0}, // 62
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0}, // 63
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, // 64
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, // 65
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 66
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 67
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 68
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 69
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 70
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 71
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 72
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 73
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 74
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 75
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 76
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 77
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 78
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 79
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 80
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 81
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 82
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 83
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 84
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 85
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 86
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 87
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 88
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 89
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 90
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 91
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 92
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 93
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 94
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 95
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 96
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 97
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 98
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 99
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 100
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 101
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 102
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 103
	{0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 104
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}};

const int* spins_get_matrix(int m, int x) {
	assert(m < 3, "spins_get_matrix: invalid matrix index %d", m);
	switch(m) {
	case 0: {
		assert(x < 106, "spins_get_matrix: invalid row index %d", x);
		return dm_mce_invert1[x];
	}
	case 1: {
		assert(x < 106, "spins_get_matrix: invalid row index %d", x);
		return dm_must_disable[x];
	}
	case 2: {
		assert(x < 106, "spins_get_matrix: invalid row index %d", x);
		return dm_must_enable[x];
	}
	}
	return 0;
}

const int spins_get_matrix_count() {
	return 3;
}


const char *spins_get_matrix_name(int m) {
	assert(m < 3, "spins_get_matrix: invalid matrix index %d", m);
	return matrices[m];
}

const int spins_get_matrix_row_count(int m) {
	assert(m < 3, "spins_get_matrix: invalid matrix index %d", m);
	return matrix_dimensions[m][0];
}

const int spins_get_matrix_col_count(int m) {
	assert(m < 3, "spins_get_matrix: invalid matrix index %d", m);
	return matrix_dimensions[m][1];
}

int spins_get_guard_count() {
	return 94;
}

int spins_get_label_count() {
	return 106;
}

const int* spins_get_labels(int t) {
	assert(t < 64, "spins_get_labels: invalid transition index %d", t);
	return gm_trans[t];
}

const int*** spins_get_all_labels() {
	return (const int***)&gm_trans;
}

int spins_get_label(void* model, int g, sj_struct_state_t* in) {
	(void)model;
	assert(g < 106, "spins_get_label: invalid state label index %d", g);
	switch(g) {
		case 0: return (in->Environment_0._pc.var == 0) != 0;
		case 1: return (in->Sender_0._pc.var == 1) != 0;
		case 2: return (in->never._pc.var == 0) != 0;
		case 3: return (in->Sender_0._pc.var == 2) != 0;
		case 4: return (in->Sender_0._pc.var == 3) != 0;
		case 5: return (in->globals.K.filled.var < 1) != 0;
		case 6: return (in->Sender_0._pc.var == 4) != 0;
		case 7: return (in->Sender_0._pc.var == 5) != 0;
		case 8: return (in->globals.L.filled.var > 0) != 0;
		case 9: return (in->globals.L.buffer[0].m0.var == 1) != 0;
		case 10: return (in->Sender_0._pc.var == 13) != 0;
		case 11: return (in->Sender_0.i.var == in->globals.n.var) != 0;
		case 12: return (in->Sender_0._pc.var == 14) != 0;
		case 13: return (in->Sender_0.i.var < in->globals.n.var) != 0;
		case 14: return (in->Environment_0._pc.var == 2) != 0;
		case 15: return (in->globals.n.var > 0) != 0;
		case 16: return (in->Environment_0._pc.var == 11) != 0;
		case 17: return (in->Environment_0._pc.var == 12) != 0;
		case 18: return (in->Environment_0._pc.var == 3) != 0;
		case 19: return (in->Environment_0._pc.var == 4) != 0;
		case 20: return (in->Environment_0._pc.var == 5) != 0;
		case 21: return (in->globals.n.var == 1) != 0;
		case 22: return (in->Environment_0._pc.var == 10) != 0;
		case 23: return (in->Environment_0._pc.var == 7) != 0;
		case 24: return (in->Environment_0._pc.var == 8) != 0;
		case 25: return (in->globals.n.var == 2) != 0;
		case 26: return (in->Environment_0._pc.var == 9) != 0;
		case 27: return (in->globals.n.var == 3) != 0;
		case 28: return (in->Environment_0._pc.var == 6) != 0;
		case 29: return (in->globals.n.var <= 0) != 0;
		case 30: return (in->Sender_0._pc.var == 0) != 0;
		case 31: return (in->Receiver_0._pc.var == 0) != 0;
		case 32: return (in->globals.K.filled.var > 0) != 0;
		case 33: return (in->Receiver_0._pc.var == 2) != 0;
		case 34: return (in->Receiver_0._pc.var == 3) != 0;
		case 35: return (in->Receiver_0.ab.var != in->Receiver_0.exp_ab.var) != 0;
		case 36: return (in->Receiver_0._pc.var == 15) != 0;
		case 37: return (in->globals.L.filled.var < 1) != 0;
		case 38: return (in->Receiver_0._pc.var == 8) != 0;
		case 39: return (in->Receiver_0.ab.var == in->Receiver_0.exp_ab.var) != 0;
		case 40: return (in->Receiver_0._pc.var == 4) != 0;
		case 41: return in->Receiver_0.b1.var != 0;
		case 42: return (!in->Receiver_0.bN.var) != 0;
		case 43: return (in->Receiver_0._pc.var == 14) != 0;
		case 44: return (in->Environment_0._pc.var == 1) != 0;
		case 45: return (in->Receiver_0._pc.var == 6) != 0;
		case 46: return (in->Receiver_0._pc.var == 7) != 0;
		case 47: return (!in->Receiver_0.b1.var) != 0;
		case 48: return (in->Receiver_0._pc.var == 13) != 0;
		case 49: return in->Receiver_0.bN.var != 0;
		case 50: return (in->Receiver_0._pc.var == 5) != 0;
		case 51: return (in->Daemon_0._pc.var == 0) != 0;
		case 52: return (in->Daemon_0._pc.var == 2) != 0;
		case 53: return (in->Sender_0._pc.var == 6) != 0;
		case 54: return (in->Sender_0.rc.var < 2) != 0;
		case 55: return (in->Sender_0._pc.var == 12) != 0;
		case 56: return (in->Sender_0.rc.var >= 2) != 0;
		case 57: return (in->Sender_0._pc.var == 7) != 0;
		case 58: return (in->Sender_0._pc.var == 11) != 0;
		case 59: return (in->Sender_0._pc.var == 9) != 0;
		case 60: return (in->Receiver_0._pc.var == 9) != 0;
		case 61: return (in->Receiver_0._pc.var == 12) != 0;
		case 62: return (in->Receiver_0._pc.var == 11) != 0;
		case 63: return (in->Sender_0._pc.var == 10) != 0;
		case 64: return (in->Receiver_0._pc.var == 10) != 0;
		case 65: return (in->Receiver_0._pc.var == 1) != 0;
		case 66: return (in->Sender_0.i.var != in->globals.n.var) != 0;
		case 67: return (in->Sender_0._pc.var == 8) != 0;
		case 68: return (in->Daemon_0._pc.var == 1) != 0;
		case 69: return ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) != 0;
		case 70: return (in->never._pc.var != 0) != 0;
		case 71: return ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 13)) != 0;
		case 72: return ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 1)) != 0;
		case 73: return (((in->never._pc.var != 0) || (in->Sender_0._pc.var != 2)) || (in->Environment_0._pc.var != 8)) != 0;
		case 74: return ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 5)) != 0;
		case 75: return ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 9)) != 0;
		case 76: return ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 6)) != 0;
		case 77: return ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 4)) != 0;
		case 78: return ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 2)) != 0;
		case 79: return ((in->never._pc.var != 0) || (in->globals.K.filled.var <= 0)) != 0;
		case 80: return ((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 3)) != 0;
		case 81: return ((in->never._pc.var != 0) || (in->globals.L.filled.var >= 1)) != 0;
		case 82: return ((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 4)) != 0;
		case 83: return ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 5)) != 0;
		case 84: return ((in->never._pc.var != 0) || (in->globals.K.filled.var >= 1)) != 0;
		case 85: return ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 6)) != 0;
		case 86: return ((in->never._pc.var != 0) || (in->Sender_0.i.var != in->globals.n.var)) != 0;
		case 87: return ((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 8)) != 0;
		case 88: return ((in->never._pc.var != 0) || (!in->Receiver_0.bN.var)) != 0;
		case 89: return ((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 9)) != 0;
		case 90: return (((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 0)) || (in->Sender_0._pc.var != 9)) != 0;
		case 91: return ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 10)) != 0;
		case 92: return ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 7)) != 0;
		case 93: return (((in->never._pc.var != 0) || (in->globals.L.filled.var <= 0)) || (in->Daemon_0._pc.var != 0)) != 0;
		case 94: return (in->Receiver_0._pc.var == 3);
		case 95: return (in->Sender_0._pc.var == 5);
		case 96: return (in->Sender_0._pc.var == 7);
		case 97: return (in->Sender_0._pc.var == 13);
		case 98: return ((in->Receiver_0._pc.var == 8) || (in->Sender_0._pc.var == 1));
		case 99: return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((in->never._pc.var != 0) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 13))) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 1))) || ((in->never._pc.var == 0) && ((in->Sender_0._pc.var == 2) && (in->Environment_0._pc.var == 8)))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 5))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 9))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 5))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 6))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 6))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 4))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 4))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 2))) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->globals.K.filled.var > 0))) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 3))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->globals.L.filled.var < 1))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 4))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 4))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && (in->globals.K.filled.var > 0))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 5))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->globals.K.filled.var < 1))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 6))) || ((in->never._pc.var == 0) && (in->Sender_0.i.var == in->globals.n.var))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 8))) || ((in->never._pc.var == 0) && in->Receiver_0.bN.var)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 9))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && ((in->Receiver_0._pc.var == 0) && (in->Sender_0._pc.var == 9)))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 10))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 7))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && ((in->globals.L.filled.var > 0) && (in->Daemon_0._pc.var == 0)))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 5))) || ((!in->globals.checknow.var) || (((!(in->globals.k.var > 0)) || ((((((((((!(in->globals.k.var >= 1)) || ((!(in->globals.e[1].ind.var != 1)) || (in->globals.e[1].val.var == in->globals.d[1].var))) && ((!(in->globals.k.var >= 2)) || ((!(in->globals.e[2].ind.var != 1)) || (in->globals.e[2].val.var == in->globals.d[2].var)))) && ((!(in->globals.k.var >= 3)) || ((!(in->globals.e[3].ind.var != 1)) || (in->globals.e[3].val.var == in->globals.d[3].var)))) && ((!(in->globals.n.var > 1)) || (in->globals.e[1].ind.var == 5))) && ((!(in->globals.k.var > 2)) || (in->globals.e[2].ind.var == 4))) && ((((in->globals.e[in->globals.k.var].ind.var == 3) || (in->globals.e[in->globals.k.var].ind.var == 1)) && ((!(in->globals.e[in->globals.k.var].ind.var == 3)) || (in->globals.k.var == in->globals.n.var))) && ((!(in->globals.e[in->globals.k.var].ind.var == 1)) || (in->globals.k.var > 1)))) && ((!(in->globals.sInd.var == 3)) || (in->globals.e[in->globals.k.var].ind.var == 3))) && ((!(in->globals.sInd.var == 1)) || (in->globals.e[in->globals.k.var].ind.var == 1))) && ((!(in->globals.sInd.var == 2)) || (in->globals.k.var == in->globals.n.var)))) && ((!(in->globals.k.var == 0)) || ((((in->globals.sInd.var == 2) && (in->globals.n.var == 1)) || ((in->globals.sInd.var != 2) && (in->globals.n.var != 1))) && (((in->globals.sInd.var == 1) && (in->globals.n.var > 1)) || ((in->globals.sInd.var != 1) && (in->globals.n.var <= 1))))))));
		case 100: return (in->Receiver_0._pc.var == 6);
		case 101: return (in->Sender_0._pc.var == 0);
		case 102: return ((4 == 0) || ((((in->Environment_0._pc.var == -1) && (in->Sender_0._pc.var == -1)) && (in->Receiver_0._pc.var == -1)) && (in->Daemon_0._pc.var == -1)));
		case 103: return (in->Receiver_0._pc.var == 2);
		case 104: return (in->Sender_0._pc.var == 3);
		case 105: return (in->Receiver_0._pc.var == 0);
	}
	return false;
}

const char *spins_get_label_name(int g) {
	assert(g < 106, "spins_get_label_name: invalid state label index %d", g);
	switch(g) {
		case 0: return "guard_0";
		case 1: return "guard_1";
		case 2: return "guard_2";
		case 3: return "guard_3";
		case 4: return "guard_4";
		case 5: return "guard_5";
		case 6: return "guard_6";
		case 7: return "guard_7";
		case 8: return "guard_8";
		case 9: return "guard_9";
		case 10: return "guard_10";
		case 11: return "guard_11";
		case 12: return "guard_12";
		case 13: return "guard_13";
		case 14: return "guard_14";
		case 15: return "guard_15";
		case 16: return "guard_16";
		case 17: return "guard_17";
		case 18: return "guard_18";
		case 19: return "guard_19";
		case 20: return "guard_20";
		case 21: return "guard_21";
		case 22: return "guard_22";
		case 23: return "guard_23";
		case 24: return "guard_24";
		case 25: return "guard_25";
		case 26: return "guard_26";
		case 27: return "guard_27";
		case 28: return "guard_28";
		case 29: return "guard_29";
		case 30: return "guard_30";
		case 31: return "guard_31";
		case 32: return "guard_32";
		case 33: return "guard_33";
		case 34: return "guard_34";
		case 35: return "guard_35";
		case 36: return "guard_36";
		case 37: return "guard_37";
		case 38: return "guard_38";
		case 39: return "guard_39";
		case 40: return "guard_40";
		case 41: return "guard_41";
		case 42: return "guard_42";
		case 43: return "guard_43";
		case 44: return "guard_44";
		case 45: return "guard_45";
		case 46: return "guard_46";
		case 47: return "guard_47";
		case 48: return "guard_48";
		case 49: return "guard_49";
		case 50: return "guard_50";
		case 51: return "guard_51";
		case 52: return "guard_52";
		case 53: return "guard_53";
		case 54: return "guard_54";
		case 55: return "guard_55";
		case 56: return "guard_56";
		case 57: return "guard_57";
		case 58: return "guard_58";
		case 59: return "guard_59";
		case 60: return "guard_60";
		case 61: return "guard_61";
		case 62: return "guard_62";
		case 63: return "guard_63";
		case 64: return "guard_64";
		case 65: return "guard_65";
		case 66: return "guard_66";
		case 67: return "guard_67";
		case 68: return "guard_68";
		case 69: return "guard_69";
		case 70: return "guard_70";
		case 71: return "guard_71";
		case 72: return "guard_72";
		case 73: return "guard_73";
		case 74: return "guard_74";
		case 75: return "guard_75";
		case 76: return "guard_76";
		case 77: return "guard_77";
		case 78: return "guard_78";
		case 79: return "guard_79";
		case 80: return "guard_80";
		case 81: return "guard_81";
		case 82: return "guard_82";
		case 83: return "guard_83";
		case 84: return "guard_84";
		case 85: return "guard_85";
		case 86: return "guard_86";
		case 87: return "guard_87";
		case 88: return "guard_88";
		case 89: return "guard_89";
		case 90: return "guard_90";
		case 91: return "guard_91";
		case 92: return "guard_92";
		case 93: return "guard_93";
		case 94: return "frame_received_0";
		case 95: return "wait_ack_0";
		case 96: return "error_0";
		case 97: return "success_0";
		case 98: return "idle_0";
		case 99: return "assert_0";
		case 100: return "frame_reported_0";
		case 101: return "start_0";
		case 102: return "end_";
		case 103: return "first_safe_frame_0";
		case 104: return "next_frame_0";
		case 105: return "new_file_0";
	}
	return "";
}

void spins_get_labels_many (void* model, sj_struct_state_t* in, int* label, bool guards_only) {
	(void)model;
	label[0] = (in->Environment_0._pc.var == 0) != 0;
	label[1] = (in->Sender_0._pc.var == 1) != 0;
	label[2] = (in->never._pc.var == 0) != 0;
	label[3] = (in->Sender_0._pc.var == 2) != 0;
	label[4] = (in->Sender_0._pc.var == 3) != 0;
	label[5] = (in->globals.K.filled.var < 1) != 0;
	label[6] = (in->Sender_0._pc.var == 4) != 0;
	label[7] = (in->Sender_0._pc.var == 5) != 0;
	label[8] = (in->globals.L.filled.var > 0) != 0;
	label[9] = (in->globals.L.buffer[0].m0.var == 1) != 0;
	label[10] = (in->Sender_0._pc.var == 13) != 0;
	label[11] = (in->Sender_0.i.var == in->globals.n.var) != 0;
	label[12] = (in->Sender_0._pc.var == 14) != 0;
	label[13] = (in->Sender_0.i.var < in->globals.n.var) != 0;
	label[14] = (in->Environment_0._pc.var == 2) != 0;
	label[15] = (in->globals.n.var > 0) != 0;
	label[16] = (in->Environment_0._pc.var == 11) != 0;
	label[17] = (in->Environment_0._pc.var == 12) != 0;
	label[18] = (in->Environment_0._pc.var == 3) != 0;
	label[19] = (in->Environment_0._pc.var == 4) != 0;
	label[20] = (in->Environment_0._pc.var == 5) != 0;
	label[21] = (in->globals.n.var == 1) != 0;
	label[22] = (in->Environment_0._pc.var == 10) != 0;
	label[23] = (in->Environment_0._pc.var == 7) != 0;
	label[24] = (in->Environment_0._pc.var == 8) != 0;
	label[25] = (in->globals.n.var == 2) != 0;
	label[26] = (in->Environment_0._pc.var == 9) != 0;
	label[27] = (in->globals.n.var == 3) != 0;
	label[28] = (in->Environment_0._pc.var == 6) != 0;
	label[29] = (in->globals.n.var <= 0) != 0;
	label[30] = (in->Sender_0._pc.var == 0) != 0;
	label[31] = (in->Receiver_0._pc.var == 0) != 0;
	label[32] = (in->globals.K.filled.var > 0) != 0;
	label[33] = (in->Receiver_0._pc.var == 2) != 0;
	label[34] = (in->Receiver_0._pc.var == 3) != 0;
	label[35] = (in->Receiver_0.ab.var != in->Receiver_0.exp_ab.var) != 0;
	label[36] = (in->Receiver_0._pc.var == 15) != 0;
	label[37] = (in->globals.L.filled.var < 1) != 0;
	label[38] = (in->Receiver_0._pc.var == 8) != 0;
	label[39] = (in->Receiver_0.ab.var == in->Receiver_0.exp_ab.var) != 0;
	label[40] = (in->Receiver_0._pc.var == 4) != 0;
	label[41] = in->Receiver_0.b1.var != 0;
	label[42] = (!in->Receiver_0.bN.var) != 0;
	label[43] = (in->Receiver_0._pc.var == 14) != 0;
	label[44] = (in->Environment_0._pc.var == 1) != 0;
	label[45] = (in->Receiver_0._pc.var == 6) != 0;
	label[46] = (in->Receiver_0._pc.var == 7) != 0;
	label[47] = (!in->Receiver_0.b1.var) != 0;
	label[48] = (in->Receiver_0._pc.var == 13) != 0;
	label[49] = in->Receiver_0.bN.var != 0;
	label[50] = (in->Receiver_0._pc.var == 5) != 0;
	label[51] = (in->Daemon_0._pc.var == 0) != 0;
	label[52] = (in->Daemon_0._pc.var == 2) != 0;
	label[53] = (in->Sender_0._pc.var == 6) != 0;
	label[54] = (in->Sender_0.rc.var < 2) != 0;
	label[55] = (in->Sender_0._pc.var == 12) != 0;
	label[56] = (in->Sender_0.rc.var >= 2) != 0;
	label[57] = (in->Sender_0._pc.var == 7) != 0;
	label[58] = (in->Sender_0._pc.var == 11) != 0;
	label[59] = (in->Sender_0._pc.var == 9) != 0;
	label[60] = (in->Receiver_0._pc.var == 9) != 0;
	label[61] = (in->Receiver_0._pc.var == 12) != 0;
	label[62] = (in->Receiver_0._pc.var == 11) != 0;
	label[63] = (in->Sender_0._pc.var == 10) != 0;
	label[64] = (in->Receiver_0._pc.var == 10) != 0;
	label[65] = (in->Receiver_0._pc.var == 1) != 0;
	label[66] = (in->Sender_0.i.var != in->globals.n.var) != 0;
	label[67] = (in->Sender_0._pc.var == 8) != 0;
	label[68] = (in->Daemon_0._pc.var == 1) != 0;
	label[69] = ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 0)) != 0;
	label[70] = (in->never._pc.var != 0) != 0;
	label[71] = ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 13)) != 0;
	label[72] = ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 1)) != 0;
	label[73] = (((in->never._pc.var != 0) || (in->Sender_0._pc.var != 2)) || (in->Environment_0._pc.var != 8)) != 0;
	label[74] = ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 5)) != 0;
	label[75] = ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 9)) != 0;
	label[76] = ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 6)) != 0;
	label[77] = ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 4)) != 0;
	label[78] = ((in->never._pc.var != 0) || (in->Environment_0._pc.var != 2)) != 0;
	label[79] = ((in->never._pc.var != 0) || (in->globals.K.filled.var <= 0)) != 0;
	label[80] = ((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 3)) != 0;
	label[81] = ((in->never._pc.var != 0) || (in->globals.L.filled.var >= 1)) != 0;
	label[82] = ((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 4)) != 0;
	label[83] = ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 5)) != 0;
	label[84] = ((in->never._pc.var != 0) || (in->globals.K.filled.var >= 1)) != 0;
	label[85] = ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 6)) != 0;
	label[86] = ((in->never._pc.var != 0) || (in->Sender_0.i.var != in->globals.n.var)) != 0;
	label[87] = ((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 8)) != 0;
	label[88] = ((in->never._pc.var != 0) || (!in->Receiver_0.bN.var)) != 0;
	label[89] = ((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 9)) != 0;
	label[90] = (((in->never._pc.var != 0) || (in->Receiver_0._pc.var != 0)) || (in->Sender_0._pc.var != 9)) != 0;
	label[91] = ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 10)) != 0;
	label[92] = ((in->never._pc.var != 0) || (in->Sender_0._pc.var != 7)) != 0;
	label[93] = (((in->never._pc.var != 0) || (in->globals.L.filled.var <= 0)) || (in->Daemon_0._pc.var != 0)) != 0;
	if (guards_only) return;
	label[94] = (in->Receiver_0._pc.var == 3);
	label[95] = (in->Sender_0._pc.var == 5);
	label[96] = (in->Sender_0._pc.var == 7);
	label[97] = (in->Sender_0._pc.var == 13);
	label[98] = ((in->Receiver_0._pc.var == 8) || (in->Sender_0._pc.var == 1));
	label[99] = ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((in->never._pc.var != 0) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 13))) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 1))) || ((in->never._pc.var == 0) && ((in->Sender_0._pc.var == 2) && (in->Environment_0._pc.var == 8)))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 5))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 9))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 5))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 6))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 6))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 4))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 4))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 2))) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->globals.K.filled.var > 0))) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 3))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->globals.L.filled.var < 1))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 4))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 4))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && (in->globals.K.filled.var > 0))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 5))) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->globals.K.filled.var < 1))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 6))) || ((in->never._pc.var == 0) && (in->Sender_0.i.var == in->globals.n.var))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 8))) || ((in->never._pc.var == 0) && in->Receiver_0.bN.var)) || (in->never._pc.var == 0)) || (in->never._pc.var == 0)) || ((in->never._pc.var == 0) && (in->Receiver_0._pc.var == 9))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && ((in->Receiver_0._pc.var == 0) && (in->Sender_0._pc.var == 9)))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 10))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 7))) || ((in->never._pc.var == 0) && (in->Environment_0._pc.var == 0))) || ((in->never._pc.var == 0) && ((in->globals.L.filled.var > 0) && (in->Daemon_0._pc.var == 0)))) || ((in->never._pc.var == 0) && (in->Sender_0._pc.var == 5))) || ((!in->globals.checknow.var) || (((!(in->globals.k.var > 0)) || ((((((((((!(in->globals.k.var >= 1)) || ((!(in->globals.e[1].ind.var != 1)) || (in->globals.e[1].val.var == in->globals.d[1].var))) && ((!(in->globals.k.var >= 2)) || ((!(in->globals.e[2].ind.var != 1)) || (in->globals.e[2].val.var == in->globals.d[2].var)))) && ((!(in->globals.k.var >= 3)) || ((!(in->globals.e[3].ind.var != 1)) || (in->globals.e[3].val.var == in->globals.d[3].var)))) && ((!(in->globals.n.var > 1)) || (in->globals.e[1].ind.var == 5))) && ((!(in->globals.k.var > 2)) || (in->globals.e[2].ind.var == 4))) && ((((in->globals.e[in->globals.k.var].ind.var == 3) || (in->globals.e[in->globals.k.var].ind.var == 1)) && ((!(in->globals.e[in->globals.k.var].ind.var == 3)) || (in->globals.k.var == in->globals.n.var))) && ((!(in->globals.e[in->globals.k.var].ind.var == 1)) || (in->globals.k.var > 1)))) && ((!(in->globals.sInd.var == 3)) || (in->globals.e[in->globals.k.var].ind.var == 3))) && ((!(in->globals.sInd.var == 1)) || (in->globals.e[in->globals.k.var].ind.var == 1))) && ((!(in->globals.sInd.var == 2)) || (in->globals.k.var == in->globals.n.var)))) && ((!(in->globals.k.var == 0)) || ((((in->globals.sInd.var == 2) && (in->globals.n.var == 1)) || ((in->globals.sInd.var != 2) && (in->globals.n.var != 1))) && (((in->globals.sInd.var == 1) && (in->globals.n.var > 1)) || ((in->globals.sInd.var != 1) && (in->globals.n.var <= 1))))))));
	label[100] = (in->Receiver_0._pc.var == 6);
	label[101] = (in->Sender_0._pc.var == 0);
	label[102] = ((4 == 0) || ((((in->Environment_0._pc.var == -1) && (in->Sender_0._pc.var == -1)) && (in->Receiver_0._pc.var == -1)) && (in->Daemon_0._pc.var == -1)));
	label[103] = (in->Receiver_0._pc.var == 2);
	label[104] = (in->Sender_0._pc.var == 3);
	label[105] = (in->Receiver_0._pc.var == 0);
}

void spins_get_labels_all(void* model, sj_struct_state_t* in, int* label) {
	(void)model;
	spins_get_labels_many(model, in, label, false);
}

void spins_get_guards_all(void* model, sj_struct_state_t* in, int* label) {
	(void)model;
	spins_get_labels_many(model, in, label, true);
}

static pthread_key_t spins_local_key2;

__attribute__((constructor)) void spins_initialize_key2() {
    pthread_key_create (&spins_local_key2, NULL);
}

__attribute__((destructor)) void spins_destroy_key2() {
    pthread_key_delete (spins_local_key2);
}

static int *spins_get_guards_array () {
    int *array = pthread_getspecific (spins_local_key2);
    if (EXPECT_FALSE(array == NULL)) {
        array = malloc(sizeof(int[spins_get_guard_count()]));
        pthread_setspecific (spins_local_key2, array);
    }
    return array;
}
int *spins_get_guards(sj_struct_state_t* in) {
	int *guards = spins_get_guards_array();
	spins_get_guards_all(NULL, in, guards);
	return guards;
}

const int* spins_get_label_matrix(int g) {
	assert(g < 106, "spins_get_label_matrix: invalid guard index %d", g);
	return gm_dm[g];
}

const int* spins_get_trans_commutes_matrix(int t) {
	assert(t < 64, "spins_get_trans_commutes_matrix: invalid trans index %d", t);
	return commutes_dm[t];
}

const int* spins_get_trans_do_not_accord_matrix(int t) {
	assert(t < 64, "spins_get_label_do_not_accord_matrix: invalid trans index %d", t);
	return dna_dm[t];
}

const int* spins_get_label_may_be_coenabled_matrix(int g) {
	assert(g < 106, "spins_get_label_may_be_coenabled_matrix: invalid guard index %d", g);
	return co_dm[g];
}

const int* spins_get_label_nes_matrix(int g) {
	assert(g < 106, "spins_get_label_nes_matrix: invalid guard index %d", g);
	return nes_dm[g];
}

const int* spins_get_label_nds_matrix(int g) {
	assert(g < 106, "spins_get_label_nds_matrix: invalid guard index %d", g);
	return nds_dm[g];
}

static const char* var_names[] = {
	"never._pc",
	"Environment_0._pc",
	"Environment_0.i",
	"Environment_0.v",
	"Sender_0._pc",
	"Sender_0.ab",
	"Sender_0.rc",
	"Sender_0.i",
	"K.filled",
	"K.buffer[0].m0",
	"K.buffer[0].m1",
	"K.buffer[0].m2",
	"K.buffer[0].m3",
	"L.filled",
	"L.buffer[0].m0",
	"n",
	"d[0]",
	"d[1]",
	"d[2]",
	"d[3]",
	"sInd",
	"k",
	"e[0].ind",
	"e[0].val",
	"e[1].ind",
	"e[1].val",
	"e[2].ind",
	"e[2].val",
	"e[3].ind",
	"e[3].val",
	"checknow",
	"Receiver_0._pc",
	"Receiver_0.b1",
	"Receiver_0.bN",
	"Receiver_0.ab",
	"Receiver_0.v",
	"Receiver_0.exp_ab",
	"Daemon_0._pc",
	"Daemon_0.b",
	"Daemon_0.b1",
	"Daemon_0.bN",
	"Daemon_0.ab",
	"Daemon_0.v"
};

static const char* var_types[] = {
	"bool",
	"guard",
	"pc",
	"byte",
	"bit",
	"short",
	"statement",
	"action",
	""
};

static const int var_type[] = {
	2,
	2,
	3,
	3,
	2,
	4,
	3,
	3,
	5,
	4,
	4,
	4,
	3,
	5,
	4,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	4,
	2,
	4,
	4,
	4,
	3,
	4,
	2,
	4,
	4,
	4,
	4,
	3,
	-1
};

static const int var_type_value_count[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	64,
	3,
	-1
};

static const char* const var_type_bool[] = {
};

static const char* const var_type_guard[] = {
};

static const char* const var_type_pc[] = {
};

static const char* const var_type_byte[] = {
};

static const char* const var_type_bit[] = {
};

static const char* const var_type_short[] = {
};

static const char* const var_type_statement[] = {
	"group 0 (Environment_0) brp.pr:65 (state 2) <invalid end state> [Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 1 (Environment_0) brp.pr:65 (state 2) <invalid end state> [Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 2 (Sender_0) brp.pr:121 (state 4) <invalid end state> [K!(Sender_0.i == 1),(Sender_0.i == n),Sender_0.ab,d[Sender_0.i] X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 3 (Sender_0) brp.pr:122 (state 5) <invalid end state> [Sender_0.rc = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 4 (Sender_0) brp.pr:127 (state 13) <invalid end state> [L?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 5 (Sender_0) brp.pr:142 (state 14) <invalid end state> [(Sender_0.i == n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 6 (Sender_0) brp.pr:142 (state 1) <invalid end state> [Sout!Iok X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 7 (Sender_0) brp.pr:144 (state 3) <invalid end state> [(Sender_0.i < n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 8 (Environment_0) brp.pr:66 (state 11) <invalid end state> [(n > 0) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 9 (Environment_0) brp.pr:66 (state 12) <invalid end state> [checknow = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 10 (Environment_0) brp.pr:67 (state 3) <invalid end state> [checknow = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 11 (Environment_0) brp.pr:70 (state 4) <invalid end state> [d[1] = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 12 (Environment_0) brp.pr:72 (state 5) <invalid end state> [n = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 13 (Environment_0) brp.pr:77 (state 10) <invalid end state> [(n == 1) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 14 (Environment_0) brp.pr:78 (state 7) <invalid end state> [d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 15 (Environment_0) brp.pr:90 (state 8) <invalid end state> [k = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 16 (Environment_0) brp.pr:92 (state 0) <invalid end state> [Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 17 (Environment_0) brp.pr:92 (state 0) <invalid end state> [Sin!1 X Sin?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 18 (Environment_0) brp.pr:80 (state 9) <invalid end state> [(n == 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 19 (Environment_0) brp.pr:81 (state 7) <invalid end state> [d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 20 (Environment_0) brp.pr:82 (state 7) <invalid end state> [d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 21 (Environment_0) brp.pr:84 (state 6) <invalid end state> [(n == 3) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 22 (Environment_0) brp.pr:85 (state 7) <invalid end state> [d[1] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 23 (Environment_0) brp.pr:86 (state 7) <invalid end state> [d[2] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 24 (Environment_0) brp.pr:87 (state 7) <invalid end state> [d[3] = 1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 25 (Environment_0) brp.pr:73 (state 5) <invalid end state> [n = 2 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 26 (Environment_0) brp.pr:74 (state 5) <invalid end state> [n = 3 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 27 (Environment_0) brp.pr:-1 (state 3) <invalid end state> [tau X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 28 (Sender_0) brp.pr:111 (state 1) <invalid end state> [Sender_0.ab = 0 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 29 (Receiver_0) brp.pr:165 (state 2) <invalid end state> [K?Receiver_0.b1,Receiver_0.bN,Receiver_0.ab,Receiver_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 30 (Receiver_0) brp.pr:171 (state 3) <invalid end state> [Receiver_0.exp_ab = Receiver_0.ab X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 31 (Receiver_0) brp.pr:176 (state 15) <invalid end state> [(Receiver_0.ab != Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 32 (Receiver_0) brp.pr:177 (state 8) <invalid end state> [L!1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 33 (Receiver_0) brp.pr:196 (state 3) <invalid end state> [K?Receiver_0.b1,Receiver_0.bN,Receiver_0.ab,Receiver_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 34 (Receiver_0) brp.pr:180 (state 4) <invalid end state> [(Receiver_0.ab == Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 35 (Receiver_0) brp.pr:182 (state 14) <invalid end state> [((b1 != 0 ) && (!(bN != 0 ))) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 36 (Receiver_0) brp.pr:182 (state 6) <invalid end state> [Rout!Ifst,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 37 (Environment_0) brp.pr:97 (state 0) <invalid end state> [k++ X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 38 (Receiver_0) brp.pr:190 (state 7) <invalid end state> [L!1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 39 (Receiver_0) brp.pr:191 (state 8) <invalid end state> [Receiver_0.exp_ab = (1 - Receiver_0.exp_ab) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 40 (Receiver_0) brp.pr:183 (state 13) <invalid end state> [((!(b1 != 0 )) && (!(bN != 0 ))) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 41 (Receiver_0) brp.pr:183 (state 6) <invalid end state> [Rout!Iinc,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 42 (Receiver_0) brp.pr:184 (state 5) <invalid end state> [Receiver_0.bN X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 43 (Receiver_0) brp.pr:184 (state 6) <invalid end state> [Rout!Iok,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 44 (Daemon_0) brp.pr:213 (state 2) <invalid end state> [K?Daemon_0.b1,Daemon_0.bN,Daemon_0.ab,Daemon_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 45 (Daemon_0) brp.pr:213 (state 0) <invalid end state> [ChunkTimeout!1 X ChunkTimeout?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 46 (Sender_0) brp.pr:133 (state 12) <invalid end state> [(Sender_0.rc < 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 47 (Sender_0) brp.pr:134 (state 5) <invalid end state> [K!(Sender_0.i == 1),(Sender_0.i == n),Sender_0.ab,d[Sender_0.i] X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 48 (Sender_0) brp.pr:136 (state 7) <invalid end state> [(Sender_0.rc >= 2) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 49 (Sender_0) brp.pr:150 (state 11) <invalid end state> [(Sender_0.i == n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 50 (Sender_0) brp.pr:150 (state 9) <invalid end state> [Sout!Idk X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 51 (Sender_0) brp.pr:153 (state 10) <invalid end state> [SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 52 (Receiver_0) brp.pr:201 (state 12) <invalid end state> [Receiver_0.bN X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 53 (Receiver_0) brp.pr:201 (state 11) <invalid end state> [skip X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 54 (Receiver_0) brp.pr:204 (state 0) <invalid end state> [SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 55 (Receiver_0) brp.pr:202 (state 10) <invalid end state> [(!(bN != 0 )) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 56 (Receiver_0) brp.pr:202 (state 11) <invalid end state> [Rout!Inok,Receiver_0.v X Rout?Environment_0.i,Environment_0.v X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 57 (Sender_0) brp.pr:153 (state 10) <invalid end state> [SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 58 (Receiver_0) brp.pr:167 (state 0) <invalid end state> [SyncWait!1 X SyncWait?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 59 (Sender_0) brp.pr:151 (state 8) <invalid end state> [(Sender_0.i != n) X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 60 (Sender_0) brp.pr:151 (state 9) <invalid end state> [Sout!Inok X Sout?sInd X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 61 (Daemon_0) brp.pr:214 (state 1) <invalid end state> [L?Daemon_0.b X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 62 (Daemon_0) brp.pr:214 (state 0) <invalid end state> [ChunkTimeout!1 X ChunkTimeout?1 X assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	"group 63 (never) brp.pr:220 (state 0) <invalid end state> [assert ((!(checknow != 0 )) || (((!(k > 0)) || ((((((((((!(k >= 1)) || ((!(e[1] != 1)) || (e[1] == d[1]))) && ((!(k >= 2)) || ((!(e[2] != 1)) || (e[2] == d[2])))) && ((!(k >= 3)) || ((!(e[3] != 1)) || (e[3] == d[3])))) && ((!(n > 1)) || (e[1] == 5))) && ((!(k > 2)) || (e[2] == 4))) && ((((e[k] == 3) || (e[k] == 1)) && ((!(e[k] == 3)) || (k == n))) && ((!(e[k] == 1)) || (k > 1)))) && ((!(sInd == 3)) || (e[k] == 3))) && ((!(sInd == 1)) || (e[k] == 1))) && ((!(sInd == 2)) || (k == n)))) && ((!(k == 0)) || ((((sInd == 2) && (n == 1)) || ((sInd != 2) && (n != 1))) && (((sInd == 1) && (n > 1)) || ((sInd != 1) && (n <= 1)))))))] -1",
	""
};

static const char* const var_type_action[] = {
	"",
	"assert",
	"progress",
	""
};

static const char* const * const var_type_values[] = {
	var_type_bool,
	var_type_guard,
	var_type_pc,
	var_type_byte,
	var_type_bit,
	var_type_short,
	var_type_statement,
	var_type_action,
	NULL
};

extern const char* spins_get_state_variable_name(unsigned int var) {
	assert(var < 43, "spins_get_state_variable_name: invalid variable index %d", var);
	return var_names[var];
}

extern int spins_get_type_count() {
	return 8;
}

extern const char* spins_get_type_name(int type) {
	assert(type > -1 && type < 8, "spins_get_type_name: invalid type index %d", type);
	return var_types[type];
}

extern int spins_get_type_value_count(int type) {
	assert(type > -1 && type < 8, "spins_get_type_value_count: invalid type index %d", type);
	return var_type_value_count[type];
}

extern const char* spins_get_type_value_name(int type, int value) {
	assert(type > -1 && type < 8, "spins_get_type_value_name: invalid type %d", type);
	assert(value <= var_type_value_count[type], "spins_get_type_value_name: invalid type %d", value);
	return var_type_values[type][value];
}

extern int spins_get_state_variable_type(int var) {
	assert(var > -1 && var < 43, "spins_get_state_variable_type: invalid variable %d", var);
	return var_type[var];
}

static const char* edge_names[] = {
	"statement",
	"action"
};

extern const char* spins_get_edge_name(int index) {
	assert(index < 2, "spins_get_edge_name: invalid type index %d", index);
	return edge_names[index];
}

static const int edge_type[] = {
	6,
	7,
	-1
};

extern int spins_get_edge_count() {
	return 2;
}

extern int spins_get_edge_type(int edge) {
	assert(edge < 2, "spins_get_edge_type: invalid type index %d", edge);
	return edge_type[edge];
}


#ifndef SPINS_TEST_CODE

#ifndef fgetln
#include <errno.h>
char *
fgetln(fp, len)
    FILE *fp;
    size_t *len;
{
    static char *buf = NULL;
    static size_t bufsiz = 0;
    char *ptr;


    if (buf == NULL) {
        bufsiz = BUFSIZ;
        if ((buf = malloc(bufsiz)) == NULL)
            return NULL;
    }

    if (fgets(buf, bufsiz, fp) == NULL)
        return NULL;
    *len = 0;

    while ((ptr = strchr(&buf[*len], '\n')) == NULL) {
        size_t nbufsiz = bufsiz + BUFSIZ;
        char *nbuf = realloc(buf, nbufsiz);

        if (nbuf == NULL) {
            int oerrno = errno;
            free(buf);
            errno = oerrno;
            buf = NULL;
            return NULL;
        } else
            buf = nbuf;

        *len = bufsiz;
        if (fgets(&buf[bufsiz], BUFSIZ, fp) == NULL)
            return buf;

        bufsiz = nbufsiz;
    }

    *len = (ptr - buf) + 1;
    return buf;
}
#endif


typedef bool (*check_f)(int,int);

bool
has_guard (int t, check_f check, int o)
{
    int x;
    int len = gm_trans[t][0];
    for (x = 1; x <= len; x++) {
        int guard = gm_trans[t][x];
        if (check(guard, o)) return true;
    }
    return false;
}

bool disabled_by (int guard, int o) {
    return dm_must_disable[guard][o];
}

bool nes_has (int guard, int o) {
    return nes_dm[guard][o];
}

bool nds_has (int guard, int o) {
    return nds_dm[guard][o];
}

bool not_coenabled (int guard, int o) {
    return !co_dm[guard][o];
}

bool not_coenabled_with_guard_of (int guard, int o) {
    return has_guard(o, not_coenabled, guard);
}

static int *t2g = NULL;
static int *dnb = NULL;
static int *dna = NULL;
static int *t2r = NULL;
static int *t2w = NULL;

void
spins_create_matrices ()
{
    int l = spins_get_label_count();
    int g = spins_get_guard_count();
    int t = spins_get_transition_groups();
    int s = spins_get_state_size();
    int i, j, k;

    // create t2w / t2r
    t2w = malloc (sizeof(int[t][s]));
    t2r = malloc (sizeof(int[t][s]));
    for (i = 0; i < t; i++) {
        for (j = 0; j < s; j++) {
            t2r[i * s + j] = transition_dependency[i][0][j];
            t2w[i * s + j] = transition_dependency[i][1][j];
        }
    }

    // create G_T
    t2g = malloc (sizeof(int[t][l]));
    for (i = 0; i < t; i++) {
        for (j = 0; j < l; j++) {
            t2g[i * l + j] = 0;
        }
        int len = gm_trans[i][0];
        for (j = 1; j <= len; j++) {
            int guard = gm_trans[i][j];
            t2g[i * l + guard] = 1;
        }
    }

    // DNA
    dna = malloc (sizeof(int[t][t]));
    for (i = 0; i < t; i++) {
        for (j = 0; j < t; j++) {
            dna[i * t + j] = (i == j);

            if (i == j) continue; // 1

            if (has_guard(i, not_coenabled_with_guard_of, j)) { // i and j are never coenabled
                continue;// 0
            }

            if (!dna_dm[i][j]) {
                continue; // 0
            }

            // i and j may disable eachother
            if (has_guard(i, nds_has, j) || has_guard(j, nds_has, i)) {
                dna[i * t + j] = 1;
                continue;// 0
            }

            // is even dependent? Front-end might miss it.
            for (k = 0; k < s; k++) {
                if ((transition_dependency[i][1][k] && actions_read_dependency[j][k]) ||
                    (actions_read_dependency[i][k] && transition_dependency[j][1][k]) ) {
                    dna[i * t + j] = 1;
                    break;
                }
            }
        }
    }

    // create DNB
    dnb = malloc (sizeof(int[t][t]));
    for (i = 0; i < t; i++) {
        for (j = 0; j < t; j++) {
            k = dnb[i * t + j] = dna[i * t + j];

            if (has_guard(i, disabled_by, j)) { // j must-disable a guard of i
                dnb[i * t + j] = 0;
                continue; // 0
            }

            if (has_guard(i, nes_has, j)) { // j could enable guard of i
                dnb[i * t + j] = 1;
            }
        }
    }
}

void
spins_use_query()
{
    int l = spins_get_label_count();
    int g = spins_get_guard_count();
    int t = spins_get_transition_groups();
    int s = spins_get_state_size();

    printf("Dependency inspector.\n");
    printf("Groups: %d\n", t);
    printf("Guards: %d\n", g);
    printf("Labels: %d\n", l);
    printf("Slots : %d\n", s);
    printf("\n");
    printf("The following matrix commands are implemented (with in and out dimensions):\n");
    printf("- {0 ..%4d} g {0 ..%4d}\tprint G_T (transition guard function).\n",    t-1, l-1);
    printf("- {0 ..%4d} u {0 ..%4d}\tprint COM (transition^2 commutes).\n",        t-1, t-1);
    printf("- {0 ..%4d} a {0 ..%4d}\tprint DNA (transition^2 do-not-accord).\n",   t-1, t-1);
    printf("- {0 ..%4d} A {0 ..%4d}\tprint DNA-(transition^2 do-not-accord).\n",   t-1, t-1);
    printf("- {0 ..%4d} b {0 ..%4d}\tprint DNB (transition^2 not-left-accord).\n", t-1, t-1);
    printf("- {0 ..%4d} e {0 ..%4d}\tprint NES (guard-trans necessary enabling set).\n", l-1, t-1);
    printf("- {0 ..%4d} d {0 ..%4d}\tprint NDS (guard-trans necessary disabling set).\n",l-1, t-1);
    printf("- {0 ..%4d} m {0 ..%4d}\tprint MDS (guard-trans must disable set).\n", l-1, t-1);
    printf("- {0 ..%4d} c {0 ..%4d}\tprint MCE (guard^2 may-be coenabled).\n",     l-1, l-1);
    printf("- {0 ..%4d} t {0 ..%4d}\tprint GDM (guard-slot test set).\n",          l-1, s-1);
    printf("- {0 ..%4d} r {0 ..%4d}\tprint A2R (actions read set).\n",             t-1, s-1);
    printf("- {0 ..%4d} R {0 ..%4d}\tprint T2R (transition read set).\n",          t-1, s-1);
    printf("- {0 ..%4d} w {0 ..%4d}\tprint T2W (transition write set).\n",         t-1, s-1);
    printf("&\n");
    printf("* Combine commands to multiply matrices, e.g. '4ge' (get the NESs for a transition 4).\n");
//    printf("* Inverse order to reverse operation, e.g.: g5 (all transitions that have guard 5).\n");
    printf("* Use a minus sign anywhere to invert matrices, e.g.: '-4d-e' (all the NESs for guards that have transition 4 in an NDS).\n");
    printf("  Note that the minus sign is a switch, e.g.: in '-6ge' both G_T and NES are inverted.\n");
    printf("\n");
    printf("Enter a command:\n");
}

// TODO: type check (now only range checks, but nr guards may equal nr transitions)
// TODO: 'ge4' should be the same as '4-eg', i.e. print all transitions that have transition 4 in a NES (now it only checks whether one exits)
// TODO: pretty print (see io_print; apply should store results as set or lists or lists of lists)
// TODO: identify empty NESs? (counter end-object)
// TODO: auto use matrices

static inline bool
spins_check (int num, int min, int max)
{
    if (!(num >= min && num < max)) {
        printf("Out of range: %d (min %d, max %d)\n", num, min, max-1);
        return true;
    }
    return false;
}

static bool SPINS_DEBUG = true;

typedef struct visitor_s visitor_t;

typedef void (*print_f)(visitor_t *visitor);
typedef void (*object_f)(visitor_t *visitor);
typedef bool  (*apply_f)(visitor_t *visitor, int arg);

typedef struct matrix_s {
    int            *dm;
    int             rows;
    int             cols;
    bool            invert;
    char            c;
    int             check;
} matrix_t;

struct visitor_s {
    void           *ctx;
    apply_f         apply;
    print_f         print;
    object_f        object;
    visitor_t      *next;
    visitor_t      *prev;
    int             in_dim;
    int             out_dim;
    char           *name;
};

bool
io_end (visitor_t *this, int v)
{
    (void) this;
    printf("%d, ", v);
    return false;
}

bool
io_end2 (visitor_t *this, int v)
{
    if ((long)this->ctx == v) {
        printf ("true");
        return true; // shortcut
    }
    return false;
}

bool
io_end3 (visitor_t *this, int v)
{
    int *array = ((int*)this->ctx);
    int s = array[0];
    int i;
    for (i = 1; i <= s; i++) {
        if (array[i] == v) return false;
    }
    array[s+1] = v;
    array[0]++;
    return false;
}

void
io_print3(visitor_t *this)
{
    int *array = ((int*)this->ctx);
    int s = array[0];
    int i;
    printf ("{ ");
    for (i = 1; i <= s; i++) {
        printf ("%d, ", array[i]);
    }
    printf (" }\n");
}

bool
io_start (visitor_t *this, int v)
{
    (void) v;
    this->next->apply(this->next, (long)this->ctx);
    return false;
}

bool
io_start_forall(visitor_t *this, int x)
{
    (void) x;
    int i;
    for (i = 0; i < this->out_dim; i++) {
        if (this->next->apply(this->next, i)) return true;
    }
    return false;
}

void io_object(visitor_t *this) {
    char *name = this->out_dim != -1 ? "start" : "end";
    printf("%s(%zu)", name, (size_t)this->ctx);
}

void no_print(visitor_t *this) { (void) this; }

visitor_t *
io_create_end ()
{
    visitor_t *visitor = calloc(sizeof(visitor_t), 1);
    visitor->ctx = (void *) (long) 0;
    visitor->apply = io_end;
    visitor->object = io_object;
    visitor->print = no_print;
    visitor->in_dim  = 0;
    visitor->out_dim =  -1;
    return visitor;
}

visitor_t *
io_create_end2 (int v)
{
    visitor_t *visitor = calloc(sizeof(visitor_t), 1);
    visitor->ctx = (void *) (long) v;
    visitor->apply = io_end2;
    visitor->object = io_object;
    visitor->print = no_print;
    visitor->in_dim  = 0;
    visitor->out_dim =  -1;
    return visitor;
}

static int *array = NULL;
visitor_t *
io_create_end3 (int dim)
{
    visitor_t *visitor = calloc(sizeof(visitor_t), 1);
    if (array == NULL) {
        array = malloc (sizeof(int[99999]));
    }
    assert (dim < 99998);
    visitor->ctx = array;
    visitor->apply = io_end3;
    visitor->object = io_object;
    visitor->print = io_print3;
    visitor->in_dim  = dim;
    visitor->out_dim =  -1;
    return visitor;
}

visitor_t *
io_create_start (int v)
{
    visitor_t *visitor = calloc(sizeof(visitor_t), 1);
    visitor->ctx = (void *) (long) v;
    visitor->apply = io_start;
    visitor->object = io_object;
    visitor->in_dim  = -1;
    visitor->out_dim =  0;
    return visitor;
}

visitor_t *
io_create_forall (int v)
{
    visitor_t *visitor = calloc(sizeof(visitor_t), 1);
    visitor->ctx = (void *) (long) v;
    visitor->apply = io_start_forall;
    visitor->object = io_object;
    visitor->in_dim  = -1;
    visitor->out_dim = v;
    return visitor;
}

bool
matrix_visit_row (visitor_t *this, int row) // todo: merge with col usei invert
{
    matrix_t *matrix = (matrix_t *) this->ctx;
    int i;
    if (spins_check(row, 0, matrix->rows)) return true;
    for (i = 0; i < matrix->cols; i++) {
        if (matrix->dm[matrix->cols * row + i] == matrix->check) {
            if (this->next->apply(this->next, i)) return true;
        }
    }
    return false;
}

bool
matrix_visit_col(visitor_t *this, int col)
{
    matrix_t *matrix = (matrix_t *) this->ctx;
    int i;
    if (spins_check(col, 0, matrix->cols)) return true;
    for (i = 0; i < matrix->rows; i++) {
        if (matrix->dm[matrix->cols * i + col] == matrix->check) {
            if (this->next->apply(this->next, i)) return true;
        }
    }
    return false;
}

void matrix_object(visitor_t *this) {
    matrix_t *matrix = (matrix_t *) this->ctx;
    printf("matrix%s(%c)", matrix->invert ? "-1" : "", matrix->c);
}

void matrix_print(visitor_t *this) {
    matrix_t *matrix = (matrix_t *) this->ctx;

}

visitor_t *
spins_create_matrix_visitor (int *dm, int rows, int cols, bool invert, char c,
                             int check)
{
    visitor_t *visitor = calloc(sizeof(visitor_t), 1);
    matrix_t *matrix = calloc(sizeof(matrix_t), 1);
    matrix->rows = rows;
    matrix->cols = cols;
    matrix->dm = dm;
    matrix->c = c;
    matrix->invert = invert;
    matrix->check = check;
    visitor->ctx = matrix;
    visitor->object = matrix_object;
    visitor->in_dim = invert ? cols : rows;
    visitor->out_dim = invert ? rows : cols;
    visitor->apply = invert ? matrix_visit_col : matrix_visit_row;
    //if (SPINS_DEBUG) matrix_print(visitor);
    return visitor;
}

visitor_t *
spins_create_matrix_visitor2 (char c, bool invert, bool negate)
{
    int l = spins_get_label_count();
    int g = spins_get_guard_count();
    int t = spins_get_transition_groups();
    int s = spins_get_state_size();
    int check = negate ? 0 : 1;

    switch(c) {
    case 'g': return spins_create_matrix_visitor(t2g, t, l, invert, c, check);
    case 'e': return spins_create_matrix_visitor(nes_dm[0], l, t, invert, c, check);
    case 'd': return spins_create_matrix_visitor(nds_dm[0], l, t, invert, c, check);
    case 'u': return spins_create_matrix_visitor(commutes_dm[0], t, t, invert, c, check);
    case 'a': return spins_create_matrix_visitor(dna_dm[0], t, t, invert, c, check);
    case 'A': return spins_create_matrix_visitor(dna, t, t, invert, c, check);
    case 'b': return spins_create_matrix_visitor(dnb, t, t, invert, c, check);
    case 'c': return spins_create_matrix_visitor(co_dm[0], l, l, invert, c, check);
    case 't': return spins_create_matrix_visitor(gm_dm[0], t, t, invert, c, check);
    case 'm': return spins_create_matrix_visitor(dm_must_disable[0], l, t, invert, c, check);
    case 'r': return spins_create_matrix_visitor(actions_read_dependency[0], t, s, invert, c, check);
    case 'R': return spins_create_matrix_visitor(t2r, t, s, invert, c, check);
    case 'w': return spins_create_matrix_visitor(t2w, t, s, invert, c, check);
    default: return NULL;
    }
}

void
spins_visitor_destroy (visitor_t *visitor)
{
    if (visitor->ctx != NULL) {
        if (((long)visitor->ctx) > 99999999) free (visitor->ctx); // reusing pointer
    }
    if (visitor->next != NULL) {
        spins_visitor_destroy (visitor->next);
    }
    free (visitor);
}

typedef struct printer_s {
    visitor_t      *first;
    visitor_t      *last;
} printer_t;

void
printer_reinit (printer_t *p)
{
    if (p->first != NULL)
        spins_visitor_destroy (p->first);
    p->first = p->last = NULL;
}

bool
printer_chain (printer_t *p, visitor_t *v)
{
    if (p->first == NULL || p->last == NULL) {
        printf("Failed chaining "); v->object(v); printf(" (no chain)\n");
        return true;
    }
    if (p->last->out_dim != v->in_dim && p->last->out_dim != 0 && v->in_dim != 0) {
        printf ("Failed chaining "); v->object(v); printf(" to ");
        p->last->object(p->last); printf(" (dimension mismatch: %d ~ %d)\n", p->last->out_dim, v->in_dim);
        return true;
    }
    visitor_t *prev = p->last;
    p->last = p->last->next = v;
    p->last->prev = prev;
    return false;
}

bool
printer_add (printer_t *p, int val)
{
    if (p->first == NULL) {
        p->first = p->last = io_create_start(val);
    } else if (val >= 0 ) {
        visitor_t *v = io_create_end2(val);
        if (printer_chain(p, v)) {
            return true;
        }
    }
    return false; // ok
}

bool
printer_add3 (printer_t *p, char **n)
{
    if (**n == '@') {
        (*n)++;
        if (p->last == NULL) {
            printf("Failed adding '%c', no previous", **n);
            return true;
        }
        visitor_t *v = io_create_end3(p->last->out_dim);
        if (printer_chain(p, v)) return true;
    }
    return false; // ok
}

#include <ctype.h>

bool
printer_add2 (printer_t *p, char c, bool invert, bool *negate)
{
    if (!isalpha(c)) return false;
    visitor_t *v = spins_create_matrix_visitor2 (c, invert, *negate);
    if (*negate) *negate = false;

    if (v == NULL) {
        printf ("Wrong command: '%c'\n", c);
        return true;
    }

    if (p->first == NULL) { // create default forall visitor suited for this matrix
        p->first = p->last = io_create_forall(v->in_dim);
    }
    if (p->last->out_dim == -1) {
        printf ("Failed creating "); p->last->object(p->last); printf(" (previous command provides no input)\n");
        return true;
    }

    if (printer_chain(p, v))
        return true;
    return false; // ok
}

bool
printer_print (printer_t *p)
{
    if (p->first == NULL) return false; // ok: empty command

    if (p->first->out_dim == -1) {
        printf("Failed executing "); p->first->object(p->last); printf(" (first command provides no output)\n");
        return true;
    }

    if (p->last->out_dim != -1) { // add default visitor
        visitor_t *v = io_create_end(); // prints all
        if (printer_chain(p, v)) {
            return true;
        }
    }

    // do stuff
    bool premature = p->first->apply (p->first, -1);
    if (SPINS_DEBUG) printf("%s\n", premature ? " (shortcutted)" : "");

    if (p->last->print == NULL) {
        printf("Failed printing "); p->last->object(p->last); printf(" (last command provides no print function)\n");
        return true;
    }
    p->last->print (p->last);
    return false;
}

void
spins_query()
{
    spins_create_matrices();

use:spins_use_query();

    printer_t p;
    p.first = p.last = NULL;
    while (true) { // parse
        size_t len;
        char *begin;
        char *in = begin = fgetln(stdin, &len);
        if (feof(stdin) || ferror(stdin)) break;
        if (len == 0) continue;

        printer_reinit(&p);
        bool invert = false;
        bool negate = false;
        char *end = in, *term = in + len;
        while (end != term) {
            if (end[0] == '-') {
                invert = !invert;
                end++;
                continue;
            } else if (end[0] == '!') {
                negate = !negate;
                end++;
            }

            in = end;
            int v = strtol(in, &end, 10);
            if (end != in) { // parsed number

                if (printer_add(&p, v)) goto use; // may fail

            } else { // must be a command:

                if (printer_add3(&p, &end)) goto use;

                if ((end == term)) { printf("Premature end after ! at pos %d", (int)(end - begin)); break; }
                char command = end++[0];

                if (printer_add2(&p, command, invert, &negate)) goto use; // may fail
            }
        }

        if (printer_print(&p)) goto use;
    }

    printer_reinit(&p); // destroy stuff
    free (t2g);
    free (dnb);
}

int
main(int argc, char **argv)
{
    spins_query();
}

#endif

typedef struct spins_args_s {
    void               *model;
    void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy);
    void               *arg;
    size_t              outs;
    int                 sid;
    transition_info_t  *ti_orig;
    void               *table;
} spins_args_t;

extern void spins_simple_dfs (spins_args_t *args, state_t *state, int atomic, int *cpy);

void
spins_simple_atomic_cb (void* arg, transition_info_t *transition_info, state_t *out, int atomic, int *cpy)
{
    spins_args_t *args = (spins_args_t *)arg;
    if (leaves_atomic[transition_info->group]) {
        args->callback (args->arg, args->ti_orig, out, cpy);
        args->outs++;
    } else {
        spins_simple_dfs (args, out, atomic, cpy);
    }
}

void
spins_simple_dfs (spins_args_t *args, state_t *state, int atomic, int *cpy)
{
    state_t out;
    int count = spins_get_successor_sid (args->model, state, args, &out, atomic, cpy);
    if (count == 0) {
        args->callback (args->arg, args->ti_orig, state, cpy);
        args->outs++;
    }
}

inline int
spins_simple_reach (void* model, transition_info_t *transition_info, state_t *in,
       void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy),
       void *arg, int sid, int *cpy) {
    spins_args_t args;
    args.table = NULL;
    args.model = model;
    args.callback = callback;
    args.arg = arg;
    args.outs = 0;
    args.sid = sid;
    args.ti_orig = transition_info;
    spins_simple_dfs (&args, in, sid, cpy);
    return args.outs;
}

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include <errno.h>

#undef get16bits
#if (defined(__GNUC__) && defined(__i386__)) || defined(__WATCOMC__) \
  || defined(_MSC_VER) || defined (__BORLANDC__) || defined (__TURBOC__)
#define get16bits(d) (*((const uint16_t *) (d)))
#endif

#if !defined (get16bits)
#define get16bits(d) ((((uint32_t)(((const uint8_t *)(d))[1])) << 8)\
                       +(uint32_t)(((const uint8_t *)(d))[0]) )
#endif

uint32_t
spins_hash (const void *data_, int len, uint32_t hash)
{
    const unsigned char *data = data_;
    uint32_t tmp;
    int rem;

    if (len <= 0 || data == NULL) return 0;

    rem = len & 3;
    len >>= 2;

    /* Main loop */
    for (;len > 0; len--) {
        hash  += get16bits (data);
        tmp    = (get16bits (data+2) << 11) ^ hash;
        hash   = (hash << 16) ^ tmp;
        data  += 2*sizeof (uint16_t);
        hash  += hash >> 11;
    }

    /* Handle end cases */
    switch (rem) {
        case 3: hash += get16bits (data);
                hash ^= hash << 16;
                hash ^= data[sizeof (uint16_t)] << 18;
                hash += hash >> 11;
                break;
        case 2: hash += get16bits (data);
                hash ^= hash << 11;
                hash += hash >> 17;
                break;
        case 1: hash += *data;
                hash ^= hash << 10;
                hash += hash >> 1;
    }

    /* Force "avalanching" of final 127 bits */
    hash ^= hash << 3;
    hash += hash >> 5;
    hash ^= hash << 4;
    hash += hash >> 17;
    hash ^= hash << 25;
    hash += hash >> 6;

    return hash;
}

void *
spins_align (size_t align, size_t size)
{
    void *ret;
    errno = posix_memalign (&ret, align, size);
    if (errno) {
    switch (errno) {
        case ENOMEM:
            printf ("Out of memory - ");
            exit (1);
        case EINVAL:
            printf ("Invalid alignment %zu - ", align);
            exit (1);
        default:
            printf("error allocating %zu bytes aligned at %zu\n", size, align);
            exit (1);
    }}
    return ret;
}

typedef uint32_t spins_mem_hash_t;

typedef struct spins_state_db_s {
    size_t              length;
    size_t              bytes;
    size_t              size;
    size_t              size3;
    size_t              init_size;
    size_t              init_size3;
    size_t              mask;
    size_t				max;
    int                *data;
    spins_mem_hash_t         *hash;
    size_t				load;
} spins_state_db_t;

#define STATE_DB_FULL -1

#define EMPTY 0
#define CACHE_LINE 6
static const size_t SJ_CACHE_LINE_SIZE = 1 << CACHE_LINE;
static const size_t SJ_CACHE_LINE_MEM_SIZE =   (1UL<<CACHE_LINE) / sizeof (spins_mem_hash_t);
static const size_t SJ_CACHE_LINE_MEM_MASK = -((1UL<<CACHE_LINE) / sizeof (spins_mem_hash_t));
static const spins_mem_hash_t SJ_FULL = ((spins_mem_hash_t)-1) ^ (((spins_mem_hash_t)-1)>>1); // 1000
static const spins_mem_hash_t SJ_MASK = ((spins_mem_hash_t)-1)>>1;                      // 0111
static const spins_mem_hash_t SJ_TOMB = 1;                                        // 0001
static const size_t SJ_NONE = -1UL;

extern int spins_state_db_lookup_hash (spins_state_db_t *dbs, const int *v, spins_mem_hash_t *pre);

static inline spins_mem_hash_t *
spins_memoized (const spins_state_db_t *dbs, size_t ref)
{
    return &dbs->hash[ref];
}

static inline int *
spins_state (const spins_state_db_t *dbs, size_t ref)
{
    size_t              l = dbs->length;
    return &dbs->data[ref * l];
}

int
spins_resize (spins_state_db_t *dbs)
{
    if (dbs->size == (dbs->max >> 1))
        return false;
    size_t i;
    size_t size = dbs->size;
    size_t newsize = dbs->size <<= 1;
    dbs->size3 <<= 1;
    dbs->mask = dbs->size - 1;

    // collect elements at dbs->table + newsize
    int todos = 0;
    for (i = 0; i < size; i++) {
        spins_mem_hash_t h = *spins_memoized(dbs,i);
        if (EMPTY == h || (h&SJ_MASK) == i) continue;
        size_t newidx = newsize + todos;
        *spins_memoized(dbs,newidx) = h;
        memcpy(spins_state(dbs,newidx),spins_state(dbs,i),dbs->bytes);
        *spins_memoized(dbs,i) = EMPTY;
    }
    memset (dbs->hash + size, 0, sizeof (spins_mem_hash_t[size]));
    for (i = newsize; i < newsize + todos; i++) {
        spins_mem_hash_t h = *spins_memoized(dbs,i);
        spins_state_db_lookup_hash (dbs, spins_state(dbs,i), &h);
    }
    return true;
}

int
spins_state_db_lookup (spins_state_db_t *dbs, const int *v)
{
    return spins_state_db_lookup_hash (dbs, v, NULL);
}

int
spins_state_db_lookup_hash (spins_state_db_t *dbs, const int *v, spins_mem_hash_t *pre)
{
    size_t 				i;
    size_t              seed = 0;
    size_t              tomb = SJ_NONE;
    size_t              b = dbs->bytes;
    spins_mem_hash_t          h = (NULL==pre ? spins_hash ((char *)v, b, 0) : *pre);
    spins_mem_hash_t          mem = h;
    while ((dbs->load << 2) < dbs->size3) { // while >75% full
        size_t              ref = h & dbs->mask;
        size_t              line_begin = ref & SJ_CACHE_LINE_MEM_MASK;
        size_t              line_end = line_begin + SJ_CACHE_LINE_MEM_SIZE;
        for (i = 0; i < SJ_CACHE_LINE_MEM_SIZE; i++) {
            if (tomb == SJ_NONE && SJ_TOMB == *spins_memoized(dbs,ref))
                tomb = ref;
			if (EMPTY == *spins_memoized(dbs,ref)) {
			    if (tomb != SJ_NONE)
			        ref = tomb;
			    *spins_memoized(dbs,ref) = mem | SJ_FULL;
				dbs->load++;
				memcpy (spins_state(dbs,ref), v, b);
				return false;
			}
            if ( ((mem | SJ_FULL) == *spins_memoized(dbs,ref)) &&
                  0 == memcmp (spins_state(dbs,ref), v, b) ) {
                if (tomb != SJ_NONE) {
                    *spins_memoized(dbs,tomb) = mem | SJ_FULL;
                    memcpy (spins_state(dbs,tomb), v, b);
                    *spins_memoized(dbs,ref) = SJ_TOMB;
                }
				return true;
            }
            ref = (ref+1 == line_end ? line_begin : ref+1);
        }
        h = spins_hash ((char *)v, b, h + (seed++));
    }
    if (spins_resize (dbs)) {
        return spins_state_db_lookup_hash (dbs, v, &mem);
    } else {
        return STATE_DB_FULL;
    }
}

void
spins_state_db_clear (spins_state_db_t *dbs)
{
    dbs->load = 0;
    dbs->size = dbs->init_size;
    dbs->size3 = dbs->init_size3;
    dbs->mask = dbs->size - 1;
    memset (dbs->hash, 0, sizeof (spins_mem_hash_t[dbs->size]));
}

spins_state_db_t *
spins_state_db_create (size_t length, size_t init_size, size_t max_size)
{
    assert (init_size < max_size);
    spins_state_db_t           *dbs = spins_align (SJ_CACHE_LINE_SIZE, sizeof (spins_state_db_t));
    dbs->length = length;
    dbs->bytes = sizeof (int[length]);
    dbs->max = 1UL << max_size;
    dbs->data = spins_align (SJ_CACHE_LINE_SIZE, sizeof (int[dbs->max][length]));
    dbs->hash = spins_align (SJ_CACHE_LINE_SIZE, sizeof (spins_mem_hash_t[dbs->max]));
    dbs->init_size = 1UL<<init_size;
    dbs->init_size3 = dbs->init_size * 3;
    dbs->size = dbs->init_size;
    dbs->size3 = dbs->init_size3;
    dbs->mask = dbs->size - 1;
	spins_state_db_clear (dbs);
    return dbs;
}

void
spins_state_db_free (spins_state_db_t *dbs)
{
    free (dbs->data);
    free (dbs->hash);
    free (dbs);
}

void
spins_test ()
{
    spins_state_db_t *dbs = spins_state_db_create (10, 2, 10);
    int state[10];
    size_t x, i, j;
    for (x = 0; x < 500; x++)
    for (i = 0; i < 768; i++) {
        for (j = 0; j < 10; j++)
            state[j] = i;
        int seen = spins_state_db_lookup (dbs, state);
        if (seen && !x) {
            printf("seen = %d at x=%zu i=%zu load=%zu size=%zu\n", seen, x, i, dbs->load, dbs->size);
            assert (false);
        }
    }
    int seen = spins_state_db_lookup (dbs, state);
    assert (seen == STATE_DB_FULL);
    spins_state_db_free (dbs);
}


static const size_t 	DB_INIT_SIZE = 4;
static const size_t 	DB_MAX_SIZE = 15;

void
spins_free_args (void *a)
{
    if (a != NULL) {
        spins_state_db_free ((spins_state_db_t *) a);
    }
}

static pthread_once_t spins_key_once = PTHREAD_ONCE_INIT;
static pthread_key_t spins_local_key;

void
spins_initialize_key() {
    pthread_key_create (&spins_local_key, spins_free_args);
}

void
spins_destroy_key() {
    pthread_key_delete (spins_local_key);
}

void
spins_get_table_from_tls (spins_args_t *args)
{
    if (EXPECT_FALSE(args->table == NULL)) {

        (void) pthread_once (&spins_key_once, spins_initialize_key); // barrier
        args->table = pthread_getspecific (spins_local_key);

        if (EXPECT_FALSE(args->table == NULL)) {
            args->table = spins_state_db_create (spins_get_state_size(),
                                                 DB_INIT_SIZE, DB_MAX_SIZE);
            pthread_setspecific (spins_local_key, args->table);
        } else {
            spins_state_db_clear (args->table);
        }
    }
}

extern void spins_dfs (spins_args_t *args, state_t *state, int atomic, int *cpy);

void
spins_atomic_cb (void* arg, transition_info_t *transition_info, state_t *out, int atomic, int *cpy)
{
	spins_args_t *args = (spins_args_t *)arg;
	if (leaves_atomic[transition_info->group]) {
		args->callback (args->arg, args->ti_orig, out, cpy);
		args->outs++;
	} else {
		spins_dfs (args, out, atomic, cpy);
	}
}
void
spins_dfs (spins_args_t *args, state_t *state, int atomic, int *cpy)
{
    spins_get_table_from_tls (args);
	int result = spins_state_db_lookup (args->table, (const int*)state);
	switch ( result ) {
	case false: { // new state
		state_t out;
		int count = spins_get_successor_sid (args->model, state, args, &out, atomic, cpy);
		if (count == 0) {
			args->callback (args->arg, args->ti_orig, state, cpy);
			args->outs++;
		}
		break;
	}
	case STATE_DB_FULL: // full database
		printf ("ERROR: model's internal atomic state database is filled "
		        "(max size = 2^%zu). Increase DB_MAX_SIZE.", DB_MAX_SIZE);
		exit (1);
	case true: break; // seen state
	default: break;
	}
}

inline int
spins_reach (void* model, transition_info_t *transition_info, state_t *in,
	   void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy),
	   void *arg, int sid, int *cpy) {
    spins_args_t args;
    args.table = NULL;
    args.model = model;
    args.callback = callback;
    args.arg = arg;
    args.outs = 0;
    args.sid = sid;
    args.ti_orig = transition_info;
	spins_dfs (&args, in, sid, cpy);
	return args.outs;
}

static int spins_to_get;
static int spins_choice;
static int spins_pilot = false;
static int spins_match_tid = false;
static int statement_type = -1;

void
spins_sim_cb(void* arg, transition_info_t *ti, state_t *out, int *cpy)
{
	state_t *state = (state_t *)arg;
	if (-1 == spins_to_get) {
		printf("\tchoice %d: %s\n", ++spins_choice, spins_get_type_value_name(statement_type, ti->group));
	} else {
		++spins_choice;
		if (spins_match_tid ? ti->group == spins_to_get : spins_choice == spins_to_get) {
			memcpy(state, out, sizeof(state_t));
		}
	}
}

void
spins_print_state(state_t *state)
{
	int *s = (int *)state;
	int i;
	for (i = 0; i < spins_get_state_size(); i++) {
		printf("%-30s", spins_get_state_variable_name(i));
		printf("= ");
		int type = spins_get_state_variable_type(i);
		int c = spins_get_type_value_count(type);
		if (0 == c) {
			printf("%3d\n", s[i]);
		} else {
			printf("%s\n", spins_get_type_value_name(type, s[i]));
		}
	}
}

void
spins_dm()
{
	int i, j;
	int k = spins_get_transition_groups();
	int n = spins_get_state_size();
	for (i = 0; i < k; i++) {
		printf("%d)\t%s\t", i, spins_get_type_value_name(statement_type, i));
		const int *write = spins_get_transition_may_write_dependencies(i);
        const int *must = spins_get_transition_must_write_dependencies(i);
		const int *read = spins_get_transition_read_dependencies(i);
		for (j = 0; j < n; j++) {
			if (read[j]) printf("R(%s), ", spins_get_state_variable_name(j));
			if (must[j]) printf("w(%s), ", spins_get_state_variable_name(j));
			else if (write[j]) printf("W(%s), ", spins_get_state_variable_name(j));
		}
		printf("\n");
	}
}

void
spins_mce()
{
	int i, j;
	int g = spins_get_label_count();
	for (i = 0; i < g; i++) {
		printf("!%d)\t", i);
		const int *mce = NULL;//spins_get_label_may_be_coenabled_matrix(i);
		for (j = i+1; j < g; j++) {
			if (!mce[j]) printf("%d, ", j);
		}
		printf("\n");
	}
}

static int
main2(int argc, char **argv)
{
	if (argc > 1) {
		if (0 == strcmp(argv[1], "--dm")) {
			spins_dm();
			return 0;
		}
		if (0 == strcmp(argv[1], "--mce")) {
			spins_mce();
			return 0;
		}
		printf("Use %s without arguments to simulate the model behavior. Or use --dm.\n", argv[0]);
		return 0;
	}
	int trans = 0;
	printf("Enter one of the following numbers:\n");
	printf("\t[0-X] to execute a transition.\n");
	printf("\t-1 to print the state.\n");
	printf("\t-2 to change input to group number instead of choice number and back.\n");
	printf("\t-3 to turn on/off the auto pilot (it detects loops).\n");
	printf("\n");
	spins_state_db_t *seen = spins_state_db_create(spins_get_state_size(), DB_INIT_SIZE, DB_MAX_SIZE);
	state_t state;
	spins_get_initial_state(&state);
	int k = spins_get_transition_groups();
	for (statement_type = 0; statement_type < spins_get_type_count(); statement_type++)
	    if (0 == strcmp(spins_get_type_name(statement_type),"statement")) break;
	while (true) {
		int result = spins_state_db_lookup(seen, (const int*)&state);
		if (STATE_DB_FULL == result) {
			printf ("ERROR: state database is filled (max size = 2^%zu). Increase DB_MAX_SIZE.", DB_MAX_SIZE);
			exit(-10);
		}
		printf("Select a statement(%d)\n", trans++);
		spins_to_get = -1;
		spins_choice = 0;
		int count = spins_get_successor_all(NULL, &state, spins_sim_cb, NULL);
		if (0 == count) {
			printf("no executable choices\n\n");
    		spins_print_state(&state);
			exit(0);
		} if (1 == count && spins_pilot && false == result) {
        	printf ("Select [%d-%d]: 1\n", spins_match_tid ? 0 : 1,
        									spins_match_tid ? k : spins_choice);
			int match_tid_old = spins_match_tid;
			spins_match_tid = false;
			spins_to_get = 1;
			spins_choice = 0;
			spins_get_successor_all(NULL, &state, spins_sim_cb, &state);
			//print_state(&state);
			spins_match_tid = match_tid_old;
		} else {
        	do {
	        	printf("Select [%d-%d]: ", spins_match_tid ? 0 : 1,
	        								spins_match_tid ? k : spins_choice);
	        	if (scanf("%d", &spins_to_get) != 1) exit(-1);
	        	if (-1 == spins_to_get)
	        		spins_print_state(&state);
	        	if (-2 == spins_to_get) {
	        		spins_match_tid = !spins_match_tid;
	        		printf ("Turned %s matching of transition ids.\n", spins_match_tid?"on":"off");
	        	}
	        	if (-3 == spins_to_get) {
	        		spins_pilot = !spins_pilot;
	        		printf ("Turned %s autopilot.\n", spins_pilot?"on":"off");
	        	}
	        } while (spins_to_get < (spins_match_tid?0:1) ||(spins_match_tid ? spins_to_get > k : spins_to_get > spins_choice));
			spins_choice = 0;
			spins_get_successor_all(NULL, &state, spins_sim_cb, &state);
		}
	}
}

