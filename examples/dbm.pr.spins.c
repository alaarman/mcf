/** Generated LTSmin model - dbm.pr
 * State size:  46 elements (184 bytes)
 * Transitions: 34
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

typedef struct sj_struct_P_0_t {
	sj_int16 _pc;
	sj_uint8 _pid;
	sj_uint8 i;
	sj_uint8 j;
} sj_struct_P_0_t;

typedef struct sj_struct_P_1_t {
	sj_int16 _pc;
	sj_uint8 _pid;
	sj_uint8 i;
	sj_uint8 j;
} sj_struct_P_1_t;

typedef struct sj_struct_P_2_t {
	sj_int16 _pc;
	sj_uint8 _pid;
	sj_uint8 i;
	sj_uint8 j;
} sj_struct_P_2_t;

typedef struct sj_struct_P_3_t {
	sj_int16 _pc;
	sj_uint8 _pid;
	sj_uint8 i;
	sj_uint8 j;
} sj_struct_P_3_t;

typedef struct sj_struct_P_4_t {
	sj_int16 _pc;
	sj_uint8 _pid;
	sj_uint8 i;
	sj_uint8 j;
} sj_struct_P_4_t;

typedef struct sj_struct_P_5_t {
	sj_int16 _pc;
	sj_uint8 _pid;
	sj_uint8 i;
	sj_uint8 j;
} sj_struct_P_5_t;

typedef struct sj_struct_P_6_t {
	sj_int16 _pc;
	sj_uint8 _pid;
	sj_uint8 i;
	sj_uint8 j;
} sj_struct_P_6_t;

typedef struct sj_struct_globals_t {
	sj_int32 _nr_pr;
	sj_uint8 holder;
	sj_uint1 up[7];
	sj_uint8 ack[7];
} sj_struct_globals_t;

typedef struct sj_struct_init_0_t {
	sj_int16 _pc;
	sj_uint8 i;
} sj_struct_init_0_t;

typedef struct sj_struct_state_t {
	sj_struct_P_0_t P_0;
	sj_struct_P_1_t P_1;
	sj_struct_P_2_t P_2;
	sj_struct_P_3_t P_3;
	sj_struct_P_4_t P_4;
	sj_struct_P_5_t P_5;
	sj_struct_P_6_t P_6;
	sj_struct_globals_t globals;
	sj_struct_init_0_t init_0;
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
	return 46;
}

sj_struct_state_t initial = (sj_struct_state_t) {
	.P_0._pc.pad                             = 0,
	.P_0._pc.var                             = -1, // 0
	.P_0._pid.pad                            = 0,
	.P_0._pid.var                            = -1, // 1
	.P_0.i.pad                               = 0,
	.P_0.i.var                               = 0, // 2
	.P_0.j.pad                               = 0,
	.P_0.j.var                               = 0, // 3
	.P_1._pc.pad                             = 0,
	.P_1._pc.var                             = -1, // 4
	.P_1._pid.pad                            = 0,
	.P_1._pid.var                            = -1, // 5
	.P_1.i.pad                               = 0,
	.P_1.i.var                               = 0, // 6
	.P_1.j.pad                               = 0,
	.P_1.j.var                               = 0, // 7
	.P_2._pc.pad                             = 0,
	.P_2._pc.var                             = -1, // 8
	.P_2._pid.pad                            = 0,
	.P_2._pid.var                            = -1, // 9
	.P_2.i.pad                               = 0,
	.P_2.i.var                               = 0, // 10
	.P_2.j.pad                               = 0,
	.P_2.j.var                               = 0, // 11
	.P_3._pc.pad                             = 0,
	.P_3._pc.var                             = -1, // 12
	.P_3._pid.pad                            = 0,
	.P_3._pid.var                            = -1, // 13
	.P_3.i.pad                               = 0,
	.P_3.i.var                               = 0, // 14
	.P_3.j.pad                               = 0,
	.P_3.j.var                               = 0, // 15
	.P_4._pc.pad                             = 0,
	.P_4._pc.var                             = -1, // 16
	.P_4._pid.pad                            = 0,
	.P_4._pid.var                            = -1, // 17
	.P_4.i.pad                               = 0,
	.P_4.i.var                               = 0, // 18
	.P_4.j.pad                               = 0,
	.P_4.j.var                               = 0, // 19
	.P_5._pc.pad                             = 0,
	.P_5._pc.var                             = -1, // 20
	.P_5._pid.pad                            = 0,
	.P_5._pid.var                            = -1, // 21
	.P_5.i.pad                               = 0,
	.P_5.i.var                               = 0, // 22
	.P_5.j.pad                               = 0,
	.P_5.j.var                               = 0, // 23
	.P_6._pc.pad                             = 0,
	.P_6._pc.var                             = -1, // 24
	.P_6._pid.pad                            = 0,
	.P_6._pid.var                            = -1, // 25
	.P_6.i.pad                               = 0,
	.P_6.i.var                               = 0, // 26
	.P_6.j.pad                               = 0,
	.P_6.j.var                               = 0, // 27
	.globals._nr_pr.pad                      = 0,
	.globals._nr_pr.var                      = 1, // 28
	.globals.holder.pad                      = 0,
	.globals.holder.var                      = 7, // 29
	.globals.up[0].pad                       = 0,
	.globals.up[0].var                       = 0, // 30
	.globals.up[1].pad                       = 0,
	.globals.up[1].var                       = 0, // 31
	.globals.up[2].pad                       = 0,
	.globals.up[2].var                       = 0, // 32
	.globals.up[3].pad                       = 0,
	.globals.up[3].var                       = 0, // 33
	.globals.up[4].pad                       = 0,
	.globals.up[4].var                       = 0, // 34
	.globals.up[5].pad                       = 0,
	.globals.up[5].var                       = 0, // 35
	.globals.up[6].pad                       = 0,
	.globals.up[6].var                       = 0, // 36
	.globals.ack[0].pad                      = 0,
	.globals.ack[0].var                      = 0, // 37
	.globals.ack[1].pad                      = 0,
	.globals.ack[1].var                      = 0, // 38
	.globals.ack[2].pad                      = 0,
	.globals.ack[2].var                      = 0, // 39
	.globals.ack[3].pad                      = 0,
	.globals.ack[3].var                      = 0, // 40
	.globals.ack[4].pad                      = 0,
	.globals.ack[4].var                      = 0, // 41
	.globals.ack[5].pad                      = 0,
	.globals.ack[5].var                      = 0, // 42
	.globals.ack[6].pad                      = 0,
	.globals.ack[6].var                      = 0, // 43
	.init_0._pc.pad                          = 0,
	.init_0._pc.var                          = 0, // 44
	.init_0.i.pad                            = 0,
	.init_0.i.var                            = 0
};

extern void spins_get_initial_state( state_t *to )
{
	assert(46*4 == sizeof(sj_struct_state_t),
		"state_t SIZE MISMATCH!: state: %zu != %i", 
		sizeof(sj_struct_state_t), 46*4);
	memcpy(to, (char*)&initial, sizeof(sj_struct_state_t));
}

char leaves_atomic[34] = {
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
	false,	// 15
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
	true,	// 31
	false,	// 32
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
	int cpy[46] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, };
	int i;
	int j;

	switch(t) {
	case 0: {
		// P_0(0-->2)	[(holder == 7)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_0._pc.var = 2;
		cpy[((int *)&out->P_0._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = out->P_0.i.var;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		int do_label_1_var = true;
do_label_10:	while (do_label_1_var) {
			if ((out->P_0.j.var < 7)) {
				out->globals.up[out->P_0.j.var].var = 1;
				cpy[((int *)&out->globals.up[out->P_0.j.var].pad - (int *)out)] = 0;
				out->P_0.j.var++;
				cpy[((int *)&out->P_0.j.pad - (int *)out)] = 0;
			} else if (true) {
				out->P_0.j.var = 0;
				cpy[((int *)&out->P_0.j.pad - (int *)out)] = 0;
				do_label_1_var = false;
				goto do_label_10;
			} else { assert(false, "Blocking loop in d_step"); }
		}
		transition_labels[0] = 0;
		transition_info.group = 0;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 1: {
		// P_0(2-->0)	[(ack[P_0.i] == (7 - 1))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_0._pc.var = 0;
		cpy[((int *)&out->P_0._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = 7;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		out->globals.ack[out->P_0.i.var].var = 0;
		cpy[((int *)&out->globals.ack[out->P_0.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 1;
		transition_info.group = 1;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 2: {
		// P_0(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_0._pc.var = 1;
		cpy[((int *)&out->P_0._pc.pad - (int *)out)] = 0;
		out->globals.up[out->P_0.i.var].var = 0;
		cpy[((int *)&out->globals.up[out->P_0.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 2;
		transition_info.group = 2;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 3: {
		// P_0(1-->0)	[ack[holder]++] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_0._pc.var = 0;
		cpy[((int *)&out->P_0._pc.pad - (int *)out)] = 0;
		out->globals.ack[out->globals.holder.var].var++;
		cpy[((int *)&out->globals.ack[out->globals.holder.var].pad - (int *)out)] = 0;
		transition_labels[0] = 3;
		transition_info.group = 3;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 4: {
		// P_1(0-->2)	[(holder == 7)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_1._pc.var = 2;
		cpy[((int *)&out->P_1._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = out->P_1.i.var;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		int do_label_2_var = true;
do_label_21:	while (do_label_2_var) {
			if ((out->P_1.j.var < 7)) {
				out->globals.up[out->P_1.j.var].var = 1;
				cpy[((int *)&out->globals.up[out->P_1.j.var].pad - (int *)out)] = 0;
				out->P_1.j.var++;
				cpy[((int *)&out->P_1.j.pad - (int *)out)] = 0;
			} else if (true) {
				out->P_1.j.var = 0;
				cpy[((int *)&out->P_1.j.pad - (int *)out)] = 0;
				do_label_2_var = false;
				goto do_label_21;
			} else { assert(false, "Blocking loop in d_step"); }
		}
		transition_labels[0] = 4;
		transition_info.group = 4;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 5: {
		// P_1(2-->0)	[(ack[P_1.i] == (7 - 1))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_1._pc.var = 0;
		cpy[((int *)&out->P_1._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = 7;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		out->globals.ack[out->P_1.i.var].var = 0;
		cpy[((int *)&out->globals.ack[out->P_1.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 5;
		transition_info.group = 5;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 6: {
		// P_1(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_1._pc.var = 1;
		cpy[((int *)&out->P_1._pc.pad - (int *)out)] = 0;
		out->globals.up[out->P_1.i.var].var = 0;
		cpy[((int *)&out->globals.up[out->P_1.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 6;
		transition_info.group = 6;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 7: {
		// P_1(1-->0)	[ack[holder]++] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_1._pc.var = 0;
		cpy[((int *)&out->P_1._pc.pad - (int *)out)] = 0;
		out->globals.ack[out->globals.holder.var].var++;
		cpy[((int *)&out->globals.ack[out->globals.holder.var].pad - (int *)out)] = 0;
		transition_labels[0] = 7;
		transition_info.group = 7;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 8: {
		// P_2(0-->2)	[(holder == 7)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_2._pc.var = 2;
		cpy[((int *)&out->P_2._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = out->P_2.i.var;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		int do_label_3_var = true;
do_label_32:	while (do_label_3_var) {
			if ((out->P_2.j.var < 7)) {
				out->globals.up[out->P_2.j.var].var = 1;
				cpy[((int *)&out->globals.up[out->P_2.j.var].pad - (int *)out)] = 0;
				out->P_2.j.var++;
				cpy[((int *)&out->P_2.j.pad - (int *)out)] = 0;
			} else if (true) {
				out->P_2.j.var = 0;
				cpy[((int *)&out->P_2.j.pad - (int *)out)] = 0;
				do_label_3_var = false;
				goto do_label_32;
			} else { assert(false, "Blocking loop in d_step"); }
		}
		transition_labels[0] = 8;
		transition_info.group = 8;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 9: {
		// P_2(2-->0)	[(ack[P_2.i] == (7 - 1))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_2._pc.var = 0;
		cpy[((int *)&out->P_2._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = 7;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		out->globals.ack[out->P_2.i.var].var = 0;
		cpy[((int *)&out->globals.ack[out->P_2.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 9;
		transition_info.group = 9;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 10: {
		// P_2(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_2._pc.var = 1;
		cpy[((int *)&out->P_2._pc.pad - (int *)out)] = 0;
		out->globals.up[out->P_2.i.var].var = 0;
		cpy[((int *)&out->globals.up[out->P_2.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 10;
		transition_info.group = 10;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 11: {
		// P_2(1-->0)	[ack[holder]++] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_2._pc.var = 0;
		cpy[((int *)&out->P_2._pc.pad - (int *)out)] = 0;
		out->globals.ack[out->globals.holder.var].var++;
		cpy[((int *)&out->globals.ack[out->globals.holder.var].pad - (int *)out)] = 0;
		transition_labels[0] = 11;
		transition_info.group = 11;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 12: {
		// P_3(0-->2)	[(holder == 7)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_3._pc.var = 2;
		cpy[((int *)&out->P_3._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = out->P_3.i.var;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		int do_label_4_var = true;
do_label_43:	while (do_label_4_var) {
			if ((out->P_3.j.var < 7)) {
				out->globals.up[out->P_3.j.var].var = 1;
				cpy[((int *)&out->globals.up[out->P_3.j.var].pad - (int *)out)] = 0;
				out->P_3.j.var++;
				cpy[((int *)&out->P_3.j.pad - (int *)out)] = 0;
			} else if (true) {
				out->P_3.j.var = 0;
				cpy[((int *)&out->P_3.j.pad - (int *)out)] = 0;
				do_label_4_var = false;
				goto do_label_43;
			} else { assert(false, "Blocking loop in d_step"); }
		}
		transition_labels[0] = 12;
		transition_info.group = 12;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 13: {
		// P_3(2-->0)	[(ack[P_3.i] == (7 - 1))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_3._pc.var = 0;
		cpy[((int *)&out->P_3._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = 7;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		out->globals.ack[out->P_3.i.var].var = 0;
		cpy[((int *)&out->globals.ack[out->P_3.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 13;
		transition_info.group = 13;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 14: {
		// P_3(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_3._pc.var = 1;
		cpy[((int *)&out->P_3._pc.pad - (int *)out)] = 0;
		out->globals.up[out->P_3.i.var].var = 0;
		cpy[((int *)&out->globals.up[out->P_3.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 14;
		transition_info.group = 14;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 15: {
		// P_3(1-->0)	[ack[holder]++] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_3._pc.var = 0;
		cpy[((int *)&out->P_3._pc.pad - (int *)out)] = 0;
		out->globals.ack[out->globals.holder.var].var++;
		cpy[((int *)&out->globals.ack[out->globals.holder.var].pad - (int *)out)] = 0;
		transition_labels[0] = 15;
		transition_info.group = 15;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 16: {
		// P_4(0-->2)	[(holder == 7)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_4._pc.var = 2;
		cpy[((int *)&out->P_4._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = out->P_4.i.var;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		int do_label_5_var = true;
do_label_54:	while (do_label_5_var) {
			if ((out->P_4.j.var < 7)) {
				out->globals.up[out->P_4.j.var].var = 1;
				cpy[((int *)&out->globals.up[out->P_4.j.var].pad - (int *)out)] = 0;
				out->P_4.j.var++;
				cpy[((int *)&out->P_4.j.pad - (int *)out)] = 0;
			} else if (true) {
				out->P_4.j.var = 0;
				cpy[((int *)&out->P_4.j.pad - (int *)out)] = 0;
				do_label_5_var = false;
				goto do_label_54;
			} else { assert(false, "Blocking loop in d_step"); }
		}
		transition_labels[0] = 16;
		transition_info.group = 16;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 17: {
		// P_4(2-->0)	[(ack[P_4.i] == (7 - 1))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_4._pc.var = 0;
		cpy[((int *)&out->P_4._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = 7;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		out->globals.ack[out->P_4.i.var].var = 0;
		cpy[((int *)&out->globals.ack[out->P_4.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 17;
		transition_info.group = 17;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 18: {
		// P_4(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_4._pc.var = 1;
		cpy[((int *)&out->P_4._pc.pad - (int *)out)] = 0;
		out->globals.up[out->P_4.i.var].var = 0;
		cpy[((int *)&out->globals.up[out->P_4.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 18;
		transition_info.group = 18;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 19: {
		// P_4(1-->0)	[ack[holder]++] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_4._pc.var = 0;
		cpy[((int *)&out->P_4._pc.pad - (int *)out)] = 0;
		out->globals.ack[out->globals.holder.var].var++;
		cpy[((int *)&out->globals.ack[out->globals.holder.var].pad - (int *)out)] = 0;
		transition_labels[0] = 19;
		transition_info.group = 19;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 20: {
		// P_5(0-->2)	[(holder == 7)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_5._pc.var = 2;
		cpy[((int *)&out->P_5._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = out->P_5.i.var;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		int do_label_6_var = true;
do_label_65:	while (do_label_6_var) {
			if ((out->P_5.j.var < 7)) {
				out->globals.up[out->P_5.j.var].var = 1;
				cpy[((int *)&out->globals.up[out->P_5.j.var].pad - (int *)out)] = 0;
				out->P_5.j.var++;
				cpy[((int *)&out->P_5.j.pad - (int *)out)] = 0;
			} else if (true) {
				out->P_5.j.var = 0;
				cpy[((int *)&out->P_5.j.pad - (int *)out)] = 0;
				do_label_6_var = false;
				goto do_label_65;
			} else { assert(false, "Blocking loop in d_step"); }
		}
		transition_labels[0] = 20;
		transition_info.group = 20;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 21: {
		// P_5(2-->0)	[(ack[P_5.i] == (7 - 1))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_5._pc.var = 0;
		cpy[((int *)&out->P_5._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = 7;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		out->globals.ack[out->P_5.i.var].var = 0;
		cpy[((int *)&out->globals.ack[out->P_5.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 21;
		transition_info.group = 21;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 22: {
		// P_5(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_5._pc.var = 1;
		cpy[((int *)&out->P_5._pc.pad - (int *)out)] = 0;
		out->globals.up[out->P_5.i.var].var = 0;
		cpy[((int *)&out->globals.up[out->P_5.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 22;
		transition_info.group = 22;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 23: {
		// P_5(1-->0)	[ack[holder]++] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_5._pc.var = 0;
		cpy[((int *)&out->P_5._pc.pad - (int *)out)] = 0;
		out->globals.ack[out->globals.holder.var].var++;
		cpy[((int *)&out->globals.ack[out->globals.holder.var].pad - (int *)out)] = 0;
		transition_labels[0] = 23;
		transition_info.group = 23;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 24: {
		// P_6(0-->2)	[(holder == 7)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_6._pc.var = 2;
		cpy[((int *)&out->P_6._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = out->P_6.i.var;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		int do_label_7_var = true;
do_label_76:	while (do_label_7_var) {
			if ((out->P_6.j.var < 7)) {
				out->globals.up[out->P_6.j.var].var = 1;
				cpy[((int *)&out->globals.up[out->P_6.j.var].pad - (int *)out)] = 0;
				out->P_6.j.var++;
				cpy[((int *)&out->P_6.j.pad - (int *)out)] = 0;
			} else if (true) {
				out->P_6.j.var = 0;
				cpy[((int *)&out->P_6.j.pad - (int *)out)] = 0;
				do_label_7_var = false;
				goto do_label_76;
			} else { assert(false, "Blocking loop in d_step"); }
		}
		transition_labels[0] = 24;
		transition_info.group = 24;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 25: {
		// P_6(2-->0)	[(ack[P_6.i] == (7 - 1))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_6._pc.var = 0;
		cpy[((int *)&out->P_6._pc.pad - (int *)out)] = 0;
		out->globals.holder.var = 7;
		cpy[((int *)&out->globals.holder.pad - (int *)out)] = 0;
		out->globals.ack[out->P_6.i.var].var = 0;
		cpy[((int *)&out->globals.ack[out->P_6.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 25;
		transition_info.group = 25;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 26: {
		// P_6(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_6._pc.var = 1;
		cpy[((int *)&out->P_6._pc.pad - (int *)out)] = 0;
		out->globals.up[out->P_6.i.var].var = 0;
		cpy[((int *)&out->globals.up[out->P_6.i.var].pad - (int *)out)] = 0;
		transition_labels[0] = 26;
		transition_info.group = 26;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 27: {
		// P_6(1-->0)	[ack[holder]++] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->P_6._pc.var = 0;
		cpy[((int *)&out->P_6._pc.pad - (int *)out)] = 0;
		out->globals.ack[out->globals.holder.var].var++;
		cpy[((int *)&out->globals.ack[out->globals.holder.var].pad - (int *)out)] = 0;
		transition_labels[0] = 27;
		transition_info.group = 27;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 28: {
		// init_0(0-->2)	[(init_0.i < 7)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->init_0._pc.var = 2;
		cpy[((int *)&out->init_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 28;
		transition_info.group = 28;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 29: {
		// init_0(2-->3)	[run P(i)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->init_0._pc.var = 3;
		cpy[((int *)&out->init_0._pc.pad - (int *)out)] = 0;
		int __active_1 = ((out->P_6._pc.var != -1) + ((out->P_5._pc.var != -1) + ((out->P_4._pc.var != -1) + ((out->P_3._pc.var != -1) + ((out->P_2._pc.var != -1) + ((out->P_1._pc.var != -1) + (out->P_0._pc.var != -1)))))));
		if (__active_1 >= 7) {
			printf ("Error, too many instances for  P: %d.\n", __active_1);
			printf ("Exiting on 'run P(i)'.\n");
			exit (1);
		}
		if (-1 != ((sj_struct_P_0_t*)&out->P_0)[__active_1]._pc.var) {
			printf ("Instance %d of process P was already started.\n", __active_1);
			printf ("Exiting on 'run P(i)'.\n");
			exit (1);
		}
		((sj_struct_P_0_t*)&out->P_0)[__active_1]._pid.var = out->globals._nr_pr.var;
		cpy[((int *)&((sj_struct_P_0_t*)&out->P_0)[__active_1]._pid.pad - (int *)out)] = 0;
		((sj_struct_P_0_t*)&out->P_0)[__active_1]._pc.var = 0;
		cpy[((int *)&((sj_struct_P_0_t*)&out->P_0)[__active_1]._pc.pad - (int *)out)] = 0;
		++(out->globals._nr_pr.var);
		cpy[((int *)&out->globals._nr_pr.pad - (int *)out)] = 0;
		((sj_struct_P_0_t*)&out->P_0)[__active_1].i.var = out->init_0.i.var;
		cpy[((int *)&((sj_struct_P_0_t*)&out->P_0)[__active_1].i.pad - (int *)out)] = 0;
		out->init_0.i.var++;
		cpy[((int *)&out->init_0.i.pad - (int *)out)] = 0;
		transition_labels[0] = 29;
		transition_info.group = 29;
		int count = spins_simple_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 30: {
		// init_0(3-->2)	[(init_0.i < 7)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->init_0._pc.var = 2;
		cpy[((int *)&out->init_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 30;
		transition_info.group = 30;
		int count = spins_reach (model, &transition_info, out, callback, arg, 0, cpy);
		states_emitted += count;
		return states_emitted;
	}
	case 31: {
		// init_0(3-->1)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->init_0._pc.var = 1;
		cpy[((int *)&out->init_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 31;
		transition_info.group = 31;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 32: {
		// init_0(1-->end)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		#ifndef NORESETPROCESS
		memcpy(&out->init_0, (char*)&(initial.init_0), sizeof(sj_struct_init_0_t));
		memset(&((state_t *)cpy)->init_0, 0, sizeof(sj_struct_init_0_t));
		cpy[44] = 0;
		cpy[45] = 0;
		#endif
		out->globals._nr_pr.var--;
		out->init_0._pc.var = -1;
		cpy[((int *)&out->globals._nr_pr.pad - (int *)out)] = 0;
		cpy[((int *)&out->init_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 32;
		transition_info.group = 32;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 33: {
		// init_0(0-->1)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->init_0._pc.var = 1;
		cpy[((int *)&out->init_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 33;
		transition_info.group = 33;
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
		// P_0(0-->2)	[(holder == 7)] -1
		if ((in->P_0._pc.var == 0) &&
			(in->globals.holder.var == 7)) {
			states_emitted += spins_get_actions (model, 0, in, callback, arg);
		}
		return states_emitted;
	}
	case 1: {
		// P_0(2-->0)	[(ack[P_0.i] == (7 - 1))] -1
		if ((in->P_0._pc.var == 2) &&
			(in->globals.ack[in->P_0.i.var].var == (7 - 1))) {
			states_emitted += spins_get_actions (model, 1, in, callback, arg);
		}
		return states_emitted;
	}
	case 2: {
		// P_0(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		if ((in->P_0._pc.var == 0) &&
			((in->globals.holder.var < 7) && in->globals.up[in->P_0.i.var].var)) {
			states_emitted += spins_get_actions (model, 2, in, callback, arg);
		}
		return states_emitted;
	}
	case 3: {
		// P_0(1-->0)	[ack[holder]++] -1
		if ((in->P_0._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 3, in, callback, arg);
		}
		return states_emitted;
	}
	case 4: {
		// P_1(0-->2)	[(holder == 7)] -1
		if ((in->P_1._pc.var == 0) &&
			(in->globals.holder.var == 7)) {
			states_emitted += spins_get_actions (model, 4, in, callback, arg);
		}
		return states_emitted;
	}
	case 5: {
		// P_1(2-->0)	[(ack[P_1.i] == (7 - 1))] -1
		if ((in->P_1._pc.var == 2) &&
			(in->globals.ack[in->P_1.i.var].var == (7 - 1))) {
			states_emitted += spins_get_actions (model, 5, in, callback, arg);
		}
		return states_emitted;
	}
	case 6: {
		// P_1(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		if ((in->P_1._pc.var == 0) &&
			((in->globals.holder.var < 7) && in->globals.up[in->P_1.i.var].var)) {
			states_emitted += spins_get_actions (model, 6, in, callback, arg);
		}
		return states_emitted;
	}
	case 7: {
		// P_1(1-->0)	[ack[holder]++] -1
		if ((in->P_1._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 7, in, callback, arg);
		}
		return states_emitted;
	}
	case 8: {
		// P_2(0-->2)	[(holder == 7)] -1
		if ((in->P_2._pc.var == 0) &&
			(in->globals.holder.var == 7)) {
			states_emitted += spins_get_actions (model, 8, in, callback, arg);
		}
		return states_emitted;
	}
	case 9: {
		// P_2(2-->0)	[(ack[P_2.i] == (7 - 1))] -1
		if ((in->P_2._pc.var == 2) &&
			(in->globals.ack[in->P_2.i.var].var == (7 - 1))) {
			states_emitted += spins_get_actions (model, 9, in, callback, arg);
		}
		return states_emitted;
	}
	case 10: {
		// P_2(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		if ((in->P_2._pc.var == 0) &&
			((in->globals.holder.var < 7) && in->globals.up[in->P_2.i.var].var)) {
			states_emitted += spins_get_actions (model, 10, in, callback, arg);
		}
		return states_emitted;
	}
	case 11: {
		// P_2(1-->0)	[ack[holder]++] -1
		if ((in->P_2._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 11, in, callback, arg);
		}
		return states_emitted;
	}
	case 12: {
		// P_3(0-->2)	[(holder == 7)] -1
		if ((in->P_3._pc.var == 0) &&
			(in->globals.holder.var == 7)) {
			states_emitted += spins_get_actions (model, 12, in, callback, arg);
		}
		return states_emitted;
	}
	case 13: {
		// P_3(2-->0)	[(ack[P_3.i] == (7 - 1))] -1
		if ((in->P_3._pc.var == 2) &&
			(in->globals.ack[in->P_3.i.var].var == (7 - 1))) {
			states_emitted += spins_get_actions (model, 13, in, callback, arg);
		}
		return states_emitted;
	}
	case 14: {
		// P_3(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		if ((in->P_3._pc.var == 0) &&
			((in->globals.holder.var < 7) && in->globals.up[in->P_3.i.var].var)) {
			states_emitted += spins_get_actions (model, 14, in, callback, arg);
		}
		return states_emitted;
	}
	case 15: {
		// P_3(1-->0)	[ack[holder]++] -1
		if ((in->P_3._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 15, in, callback, arg);
		}
		return states_emitted;
	}
	case 16: {
		// P_4(0-->2)	[(holder == 7)] -1
		if ((in->P_4._pc.var == 0) &&
			(in->globals.holder.var == 7)) {
			states_emitted += spins_get_actions (model, 16, in, callback, arg);
		}
		return states_emitted;
	}
	case 17: {
		// P_4(2-->0)	[(ack[P_4.i] == (7 - 1))] -1
		if ((in->P_4._pc.var == 2) &&
			(in->globals.ack[in->P_4.i.var].var == (7 - 1))) {
			states_emitted += spins_get_actions (model, 17, in, callback, arg);
		}
		return states_emitted;
	}
	case 18: {
		// P_4(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		if ((in->P_4._pc.var == 0) &&
			((in->globals.holder.var < 7) && in->globals.up[in->P_4.i.var].var)) {
			states_emitted += spins_get_actions (model, 18, in, callback, arg);
		}
		return states_emitted;
	}
	case 19: {
		// P_4(1-->0)	[ack[holder]++] -1
		if ((in->P_4._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 19, in, callback, arg);
		}
		return states_emitted;
	}
	case 20: {
		// P_5(0-->2)	[(holder == 7)] -1
		if ((in->P_5._pc.var == 0) &&
			(in->globals.holder.var == 7)) {
			states_emitted += spins_get_actions (model, 20, in, callback, arg);
		}
		return states_emitted;
	}
	case 21: {
		// P_5(2-->0)	[(ack[P_5.i] == (7 - 1))] -1
		if ((in->P_5._pc.var == 2) &&
			(in->globals.ack[in->P_5.i.var].var == (7 - 1))) {
			states_emitted += spins_get_actions (model, 21, in, callback, arg);
		}
		return states_emitted;
	}
	case 22: {
		// P_5(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		if ((in->P_5._pc.var == 0) &&
			((in->globals.holder.var < 7) && in->globals.up[in->P_5.i.var].var)) {
			states_emitted += spins_get_actions (model, 22, in, callback, arg);
		}
		return states_emitted;
	}
	case 23: {
		// P_5(1-->0)	[ack[holder]++] -1
		if ((in->P_5._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 23, in, callback, arg);
		}
		return states_emitted;
	}
	case 24: {
		// P_6(0-->2)	[(holder == 7)] -1
		if ((in->P_6._pc.var == 0) &&
			(in->globals.holder.var == 7)) {
			states_emitted += spins_get_actions (model, 24, in, callback, arg);
		}
		return states_emitted;
	}
	case 25: {
		// P_6(2-->0)	[(ack[P_6.i] == (7 - 1))] -1
		if ((in->P_6._pc.var == 2) &&
			(in->globals.ack[in->P_6.i.var].var == (7 - 1))) {
			states_emitted += spins_get_actions (model, 25, in, callback, arg);
		}
		return states_emitted;
	}
	case 26: {
		// P_6(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
		if ((in->P_6._pc.var == 0) &&
			((in->globals.holder.var < 7) && in->globals.up[in->P_6.i.var].var)) {
			states_emitted += spins_get_actions (model, 26, in, callback, arg);
		}
		return states_emitted;
	}
	case 27: {
		// P_6(1-->0)	[ack[holder]++] -1
		if ((in->P_6._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 27, in, callback, arg);
		}
		return states_emitted;
	}
	case 28: {
		// init_0(0-->2)	[(init_0.i < 7)] -1
		if ((in->init_0._pc.var == 0) &&
			(in->init_0.i.var < 7)) {
			states_emitted += spins_get_actions (model, 28, in, callback, arg);
		}
		return states_emitted;
	}
	case 29: {
		// init_0(2-->3)	[run P(i)] -1
		if ((in->init_0._pc.var == 2) &&
			(in->globals._nr_pr.var != 255)) {
			states_emitted += spins_get_actions (model, 29, in, callback, arg);
		}
		return states_emitted;
	}
	case 30: {
		// init_0(3-->2)	[(init_0.i < 7)] -1
		if ((in->init_0._pc.var == 3) &&
			(in->init_0.i.var < 7)) {
			states_emitted += spins_get_actions (model, 30, in, callback, arg);
		}
		return states_emitted;
	}
	case 31: {
		// init_0(3-->1)	[tau] -1
		if ((in->init_0._pc.var == 3) &&
			(in->init_0.i.var >= 7)) {
			states_emitted += spins_get_actions (model, 31, in, callback, arg);
		}
		return states_emitted;
	}
	case 32: {
		// init_0(1-->end)	[tau] -1
		if ((in->init_0._pc.var == 1) &&
			((0 + 1) == in->globals._nr_pr.var)) {
			states_emitted += spins_get_actions (model, 32, in, callback, arg);
		}
		return states_emitted;
	}
	case 33: {
		// init_0(0-->1)	[tau] -1
		if ((in->init_0._pc.var == 0) &&
			(in->init_0.i.var >= 7)) {
			states_emitted += spins_get_actions (model, 33, in, callback, arg);
		}
		return states_emitted;
	}
	}
	return 0;
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

int spins_get_successor_sid4( void* model, state_t *in, void *arg, state_t *out, int *cpy_src) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int i;
	int j;

	return states_emitted;
}

int spins_get_successor_sid5( void* model, state_t *in, void *arg, state_t *out, int *cpy_src) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int i;
	int j;

	return states_emitted;
}

int spins_get_successor_sid6( void* model, state_t *in, void *arg, state_t *out, int *cpy_src) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int i;
	int j;

	return states_emitted;
}

int spins_get_successor_sid7( void* model, state_t *in, void *arg, state_t *out, int *cpy_src) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int i;
	int j;

	return states_emitted;
}

int spins_get_successor_sid0( void* model, state_t *in, void *arg, state_t *out, int *cpy_src) {
	int transition_labels[2] = {0, 0, };
	transition_info_t transition_info = { transition_labels, -1 };
	int states_emitted = 0;
	int i;
	int j;

	// init_0(2-->3)	[run P(i)] -1
	if ((in->init_0._pc.var == 2)
	&&(in->globals._nr_pr.var != 255)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[46]; memcpy(cpy, cpy_src, sizeof(int[46]));

		out->init_0._pc.var = 3;
		cpy[((int *)&out->init_0._pc.pad - (int *)out)] = 0;
		int __active_2 = ((out->P_6._pc.var != -1) + ((out->P_5._pc.var != -1) + ((out->P_4._pc.var != -1) + ((out->P_3._pc.var != -1) + ((out->P_2._pc.var != -1) + ((out->P_1._pc.var != -1) + (out->P_0._pc.var != -1)))))));
		if (__active_2 >= 7) {
			printf ("Error, too many instances for  P: %d.\n", __active_2);
			printf ("Exiting on 'run P(i)'.\n");
			exit (1);
		}
		if (-1 != ((sj_struct_P_0_t*)&out->P_0)[__active_2]._pc.var) {
			printf ("Instance %d of process P was already started.\n", __active_2);
			printf ("Exiting on 'run P(i)'.\n");
			exit (1);
		}
		((sj_struct_P_0_t*)&out->P_0)[__active_2]._pid.var = out->globals._nr_pr.var;
		cpy[((int *)&((sj_struct_P_0_t*)&out->P_0)[__active_2]._pid.pad - (int *)out)] = 0;
		((sj_struct_P_0_t*)&out->P_0)[__active_2]._pc.var = 0;
		cpy[((int *)&((sj_struct_P_0_t*)&out->P_0)[__active_2]._pc.pad - (int *)out)] = 0;
		++(out->globals._nr_pr.var);
		cpy[((int *)&out->globals._nr_pr.pad - (int *)out)] = 0;
		((sj_struct_P_0_t*)&out->P_0)[__active_2].i.var = out->init_0.i.var;
		cpy[((int *)&((sj_struct_P_0_t*)&out->P_0)[__active_2].i.pad - (int *)out)] = 0;
		out->init_0.i.var++;
		cpy[((int *)&out->init_0.i.pad - (int *)out)] = 0;
		transition_info.group = 29;
		spins_simple_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// init_0(3-->2)	[(init_0.i < 7)] -1
	if ((in->init_0._pc.var == 3)
	&&(in->init_0.i.var < 7)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[46]; memcpy(cpy, cpy_src, sizeof(int[46]));

		out->init_0._pc.var = 2;
		cpy[((int *)&out->init_0._pc.pad - (int *)out)] = 0;
		transition_info.group = 30;
		spins_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	// init_0(3-->1)	[tau] -1
	if ((in->init_0._pc.var == 3)
	&&(in->init_0.i.var >= 7)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[46]; memcpy(cpy, cpy_src, sizeof(int[46]));

		out->init_0._pc.var = 1;
		cpy[((int *)&out->init_0._pc.pad - (int *)out)] = 0;
		transition_info.group = 31;
		spins_simple_atomic_cb(arg,&transition_info,out,0,cpy);
		++states_emitted;
	}
	return states_emitted;
}

int spins_get_successor_sid( void* model, state_t *in, void *arg, state_t *out, int atomic, int *cpy_src) {
	switch (atomic) {
	case 1: return spins_get_successor_sid1(model, in, arg, out, cpy_src); break;
	case 2: return spins_get_successor_sid2(model, in, arg, out, cpy_src); break;
	case 3: return spins_get_successor_sid3(model, in, arg, out, cpy_src); break;
	case 4: return spins_get_successor_sid4(model, in, arg, out, cpy_src); break;
	case 5: return spins_get_successor_sid5(model, in, arg, out, cpy_src); break;
	case 6: return spins_get_successor_sid6(model, in, arg, out, cpy_src); break;
	case 7: return spins_get_successor_sid7(model, in, arg, out, cpy_src); break;
	case 0: return spins_get_successor_sid0(model, in, arg, out, cpy_src); break;
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

	// P_0(0-->2)	[(holder == 7)] -1
	if (__guards[0] &&
		__guards[1]) {
		states_emitted += spins_get_actions (model, 0, in, callback, arg);
	}
	// P_0(2-->0)	[(ack[P_0.i] == (7 - 1))] -1
	if (__guards[2] &&
		__guards[3]) {
		states_emitted += spins_get_actions (model, 1, in, callback, arg);
	}
	// P_0(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
	if (__guards[0] &&
		__guards[4] &&
		__guards[5]) {
		states_emitted += spins_get_actions (model, 2, in, callback, arg);
	}
	// P_0(1-->0)	[ack[holder]++] -1
	if (__guards[6]) {
		states_emitted += spins_get_actions (model, 3, in, callback, arg);
	}
	// P_1(0-->2)	[(holder == 7)] -1
	if (__guards[7] &&
		__guards[1]) {
		states_emitted += spins_get_actions (model, 4, in, callback, arg);
	}
	// P_1(2-->0)	[(ack[P_1.i] == (7 - 1))] -1
	if (__guards[8] &&
		__guards[9]) {
		states_emitted += spins_get_actions (model, 5, in, callback, arg);
	}
	// P_1(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
	if (__guards[7] &&
		__guards[4] &&
		__guards[10]) {
		states_emitted += spins_get_actions (model, 6, in, callback, arg);
	}
	// P_1(1-->0)	[ack[holder]++] -1
	if (__guards[11]) {
		states_emitted += spins_get_actions (model, 7, in, callback, arg);
	}
	// P_2(0-->2)	[(holder == 7)] -1
	if (__guards[12] &&
		__guards[1]) {
		states_emitted += spins_get_actions (model, 8, in, callback, arg);
	}
	// P_2(2-->0)	[(ack[P_2.i] == (7 - 1))] -1
	if (__guards[13] &&
		__guards[14]) {
		states_emitted += spins_get_actions (model, 9, in, callback, arg);
	}
	// P_2(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
	if (__guards[12] &&
		__guards[4] &&
		__guards[15]) {
		states_emitted += spins_get_actions (model, 10, in, callback, arg);
	}
	// P_2(1-->0)	[ack[holder]++] -1
	if (__guards[16]) {
		states_emitted += spins_get_actions (model, 11, in, callback, arg);
	}
	// P_3(0-->2)	[(holder == 7)] -1
	if (__guards[17] &&
		__guards[1]) {
		states_emitted += spins_get_actions (model, 12, in, callback, arg);
	}
	// P_3(2-->0)	[(ack[P_3.i] == (7 - 1))] -1
	if (__guards[18] &&
		__guards[19]) {
		states_emitted += spins_get_actions (model, 13, in, callback, arg);
	}
	// P_3(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
	if (__guards[17] &&
		__guards[4] &&
		__guards[20]) {
		states_emitted += spins_get_actions (model, 14, in, callback, arg);
	}
	// P_3(1-->0)	[ack[holder]++] -1
	if (__guards[21]) {
		states_emitted += spins_get_actions (model, 15, in, callback, arg);
	}
	// P_4(0-->2)	[(holder == 7)] -1
	if (__guards[22] &&
		__guards[1]) {
		states_emitted += spins_get_actions (model, 16, in, callback, arg);
	}
	// P_4(2-->0)	[(ack[P_4.i] == (7 - 1))] -1
	if (__guards[23] &&
		__guards[24]) {
		states_emitted += spins_get_actions (model, 17, in, callback, arg);
	}
	// P_4(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
	if (__guards[22] &&
		__guards[4] &&
		__guards[25]) {
		states_emitted += spins_get_actions (model, 18, in, callback, arg);
	}
	// P_4(1-->0)	[ack[holder]++] -1
	if (__guards[26]) {
		states_emitted += spins_get_actions (model, 19, in, callback, arg);
	}
	// P_5(0-->2)	[(holder == 7)] -1
	if (__guards[27] &&
		__guards[1]) {
		states_emitted += spins_get_actions (model, 20, in, callback, arg);
	}
	// P_5(2-->0)	[(ack[P_5.i] == (7 - 1))] -1
	if (__guards[28] &&
		__guards[29]) {
		states_emitted += spins_get_actions (model, 21, in, callback, arg);
	}
	// P_5(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
	if (__guards[27] &&
		__guards[4] &&
		__guards[30]) {
		states_emitted += spins_get_actions (model, 22, in, callback, arg);
	}
	// P_5(1-->0)	[ack[holder]++] -1
	if (__guards[31]) {
		states_emitted += spins_get_actions (model, 23, in, callback, arg);
	}
	// P_6(0-->2)	[(holder == 7)] -1
	if (__guards[32] &&
		__guards[1]) {
		states_emitted += spins_get_actions (model, 24, in, callback, arg);
	}
	// P_6(2-->0)	[(ack[P_6.i] == (7 - 1))] -1
	if (__guards[33] &&
		__guards[34]) {
		states_emitted += spins_get_actions (model, 25, in, callback, arg);
	}
	// P_6(0-->1)	[((holder < 7) && (up[i] != 0 ))] -1
	if (__guards[32] &&
		__guards[4] &&
		__guards[35]) {
		states_emitted += spins_get_actions (model, 26, in, callback, arg);
	}
	// P_6(1-->0)	[ack[holder]++] -1
	if (__guards[36]) {
		states_emitted += spins_get_actions (model, 27, in, callback, arg);
	}
	// init_0(0-->2)	[(init_0.i < 7)] -1
	if (__guards[37] &&
		__guards[38]) {
		states_emitted += spins_get_actions (model, 28, in, callback, arg);
	}
	// init_0(2-->3)	[run P(i)] -1
	if (__guards[39] &&
		__guards[40]) {
		states_emitted += spins_get_actions (model, 29, in, callback, arg);
	}
	// init_0(3-->2)	[(init_0.i < 7)] -1
	if (__guards[41] &&
		__guards[38]) {
		states_emitted += spins_get_actions (model, 30, in, callback, arg);
	}
	// init_0(3-->1)	[tau] -1
	if (__guards[41] &&
		__guards[42]) {
		states_emitted += spins_get_actions (model, 31, in, callback, arg);
	}
	// init_0(1-->end)	[tau] -1
	if (__guards[43] &&
		__guards[44]) {
		states_emitted += spins_get_actions (model, 32, in, callback, arg);
	}
	// init_0(0-->1)	[tau] -1
	if (__guards[37] &&
		__guards[42]) {
		states_emitted += spins_get_actions (model, 33, in, callback, arg);
	}
	return states_emitted;
}

extern int spins_get_transition_groups() {
	return 34;
}

int *act_dm[2][34] = {
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
	},
};


extern const int spins_transition_has_edge(int t, int e, int v)
{
  assert(t < 34, "spins_transition_has_edge: invalid group index %d\n", t);
  assert(e < 2, "spins_transition_has_edge: invalid edge label index %d\n", e);
	int *ar = act_dm[e][t];
	int i;
	for (i = 1; i <= ar[0]; i++) {
	  if (ar[i] == v) return 1;
	}
	return 0;
}

int actions_read_dependency[][46] = {
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 3
	{0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 7
	{0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 11
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 15
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 27
	{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}, // 28
	{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}, // 29
	{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int transition_dependency[][3][46] = {
	// { ... read ...}, { ... may write ...}, { ... must write ... }
	{{1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 0
	{{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 1
	{{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 2
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 3
	{{0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 4
	{{0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 5
	{{0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 6
	{{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 7
	{{0,0,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 8
	{{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 9
	{{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 10
	{{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 11
	{{0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 12
	{{0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 13
	{{0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 14
	{{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 15
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 16
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 17
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 18
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 19
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 20
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 21
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 22
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 23
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 24
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 25
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 26
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 27
	{{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 28
	{{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 29
	{{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 30
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}}, // 31
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}}, // 32
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}}};

extern const int* spins_get_transition_read_dependencies(int t)
{
	if (t>=0 && t < 34) return transition_dependency[t][0];
	return NULL;
}

extern const int* spins_get_transition_may_write_dependencies(int t)
{
  if (t>=0 && t < 34) return transition_dependency[t][1];
  return NULL;
}

// for backwards compatibility:
extern const int* spins_get_transition_write_dependencies(int t)
{
  if (t>=0 && t < 34) return transition_dependency[t][1];
  return NULL;
}

extern const int* spins_get_transition_must_write_dependencies(int t)
{
  if (t>=0 && t < 34) return transition_dependency[t][2];
  return NULL;
}

extern const int* spins_get_actions_read_dependencies(int t)
{
  if (t>=0 && t < 34) return actions_read_dependency[t];
  return NULL;
}


// Label(Guard)-Dependency Matrix:
int gm_dm[][46] = {
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 3
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0}, // 5
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 9
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}};

// Transition-Guard Matrix:
int* gm_trans[34] = {
((int[]){ 2, 0, 1 }),	// trans     0
((int[]){ 2, 2, 3 }),	// trans     1
((int[]){ 3, 0, 4, 5 }),	// trans     2
((int[]){ 1, 6 }),	// trans     3
((int[]){ 2, 7, 1 }),	// trans     4
((int[]){ 2, 8, 9 }),	// trans     5
((int[]){ 3, 7, 4, 10 }),	// trans     6
((int[]){ 1, 11 }),	// trans     7
((int[]){ 2, 12, 1 }),	// trans     8
((int[]){ 2, 13, 14 }),	// trans     9
((int[]){ 3, 12, 4, 15 }),	// trans    10
((int[]){ 1, 16 }),	// trans    11
((int[]){ 2, 17, 1 }),	// trans    12
((int[]){ 2, 18, 19 }),	// trans    13
((int[]){ 3, 17, 4, 20 }),	// trans    14
((int[]){ 1, 21 }),	// trans    15
((int[]){ 2, 22, 1 }),	// trans    16
((int[]){ 2, 23, 24 }),	// trans    17
((int[]){ 3, 22, 4, 25 }),	// trans    18
((int[]){ 1, 26 }),	// trans    19
((int[]){ 2, 27, 1 }),	// trans    20
((int[]){ 2, 28, 29 }),	// trans    21
((int[]){ 3, 27, 4, 30 }),	// trans    22
((int[]){ 1, 31 }),	// trans    23
((int[]){ 2, 32, 1 }),	// trans    24
((int[]){ 2, 33, 34 }),	// trans    25
((int[]){ 3, 32, 4, 35 }),	// trans    26
((int[]){ 1, 36 }),	// trans    27
((int[]){ 2, 37, 38 }),	// trans    28
((int[]){ 2, 39, 40 }),	// trans    29
((int[]){ 2, 41, 38 }),	// trans    30
((int[]){ 2, 41, 42 }),	// trans    31
((int[]){ 2, 43, 44 }),	// trans    32
((int[]){ 2, 37, 42 })	// trans    33
};


// Maybe Co-Enabled Matrix:
int co_dm[][46] = {
	{1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 0
	{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 1
	{0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 2
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 3
	{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 4
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 5
	{0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 6
	{1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 7
	{1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 8
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 9
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 10
	{1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 11
	{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 12
	{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 13
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 14
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 15
	{1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 16
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 17
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 18
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 19
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 20
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 21
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 22
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 23
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 24
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 25
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 26
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 27
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 28
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 29
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 30
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 31
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1}, // 32
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1}, // 33
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 34
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 35
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 36
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,1}, // 37
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 38
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1}, // 39
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 40
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,0,1,1}, // 41
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1}, // 42
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,1}, // 43
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 44
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};


// Do Not Accord Matrix:
int dna_dm[][34] = {
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 0
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 1
	{1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0}, // 2
	{1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,0,0,0}, // 3
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 4
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 5
	{1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0}, // 6
	{1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,0,0,0}, // 7
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 8
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 9
	{1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0}, // 10
	{1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,0,0,0}, // 11
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 12
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 13
	{1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0}, // 14
	{1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,0,0,0}, // 15
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 16
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 17
	{1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,0,0}, // 18
	{1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,0,0,0}, // 19
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 20
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 21
	{1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 22
	{1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,1,0,0,0}, // 23
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 24
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0}, // 25
	{1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,0,0}, // 26
	{1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,0,0,0}, // 27
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 28
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 29
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1}};


// Commute Matrix:
int commutes_dm[][34] = {
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}, // 0
	{0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,1,1,1}, // 1
	{0,0,1,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0,1,1,1}, // 2
	{0,0,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,1,1,1}, // 3
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}, // 4
	{0,1,1,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,1,1,1}, // 5
	{0,1,1,1,0,0,1,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0,1,1,1}, // 6
	{0,0,1,1,0,0,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,1,1,1}, // 7
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}, // 8
	{0,1,1,0,0,1,1,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,1,1,1}, // 9
	{0,1,1,1,0,1,1,1,0,0,1,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0,1,1,1}, // 10
	{0,0,1,1,0,0,1,1,0,0,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,1,1,1}, // 11
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}, // 12
	{0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,1,1,1}, // 13
	{0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0,1,1,1}, // 14
	{0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,1,1,1}, // 15
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}, // 16
	{0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,0,0,1,1,0,0,1,1,0,0,0,0,1,1,1}, // 17
	{0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1}, // 18
	{0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,1,0,0,1,1,0,0,1,1,0,0,0,1,1,1}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}, // 20
	{0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,0,0,1,1,0,0,0,0,1,1,1}, // 21
	{0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,0,1,1,1,0,0,0,1,1,1}, // 22
	{0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,1,0,0,1,1,0,0,0,1,1,1}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}, // 24
	{0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,0,0,0,0,1,1,1}, // 25
	{0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,0,0,0,1,1,1}, // 26
	{0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,1,0,0,0,1,1,1}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,1}, // 31
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0}, // 32
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,1}};


// Necessary Enabling Matrix:
int nes_dm[][34] = {
	{0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 0
	{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0}, // 1
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 3
	{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 4
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 5
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 7
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 9
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 10
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 14
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 19
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 24
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,1,1,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,1,1,0,0,0}, // 29
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 33
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,1,1,1,0,0,0}, // 34
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}};


// Necessary Disabling Matrix:
int nds_dm[][34] = {
	{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0
	{1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 1
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 2
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 3
	{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0}, // 4
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 5
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 6
	{0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 8
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 9
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 10
	{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 11
	{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 13
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 14
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 18
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 19
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 23
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 24
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,0,0,0}, // 28
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 29
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0}, // 33
	{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,0,0,0}, // 34
	{1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0}};


static const char *matrices[] = {
	"dm_mce_invert1",
	"dm_must_disable",
	"dm_must_enable",
	""
};

static const int matrix_dimensions[][2] = {
	{46, 46},
	{46, 34},
	{46, 34},
	0
};

int dm_mce_invert1[][46] = {
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 0
	{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 1
	{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 2
	{1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 3
	{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 4
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 5
	{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 6
	{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 7
	{1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 8
	{1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 9
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 10
	{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 11
	{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 12
	{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 13
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 14
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 15
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 16
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 17
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 18
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 19
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 20
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 21
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 22
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 23
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 24
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 25
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 26
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 27
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 28
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 29
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 30
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 31
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 32
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 33
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1}, // 34
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 35
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1}, // 36
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1}, // 37
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1}, // 38
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1}, // 39
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 40
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1}, // 41
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 42
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}, // 43
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1}, // 44
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

int dm_must_disable[][34] = {
	{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 2
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0}, // 4
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 6
	{0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 8
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 11
	{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 13
	{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,1,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

int dm_must_enable[][34] = {
	{0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 0
	{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0}, // 1
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 7
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

const int* spins_get_matrix(int m, int x) {
	assert(m < 3, "spins_get_matrix: invalid matrix index %d", m);
	switch(m) {
	case 0: {
		assert(x < 46, "spins_get_matrix: invalid row index %d", x);
		return dm_mce_invert1[x];
	}
	case 1: {
		assert(x < 46, "spins_get_matrix: invalid row index %d", x);
		return dm_must_disable[x];
	}
	case 2: {
		assert(x < 46, "spins_get_matrix: invalid row index %d", x);
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
	return 45;
}

int spins_get_label_count() {
	return 46;
}

const int* spins_get_labels(int t) {
	assert(t < 34, "spins_get_labels: invalid transition index %d", t);
	return gm_trans[t];
}

const int*** spins_get_all_labels() {
	return (const int***)&gm_trans;
}

int spins_get_label(void* model, int g, sj_struct_state_t* in) {
	(void)model;
	assert(g < 46, "spins_get_label: invalid state label index %d", g);
	switch(g) {
		case 0: return (in->P_0._pc.var == 0) != 0;
		case 1: return (in->globals.holder.var == 7) != 0;
		case 2: return (in->P_0._pc.var == 2) != 0;
		case 3: return (0 || in->P_0.i.var < 0 || in->P_0.i.var >= 7) ? 2 :
						(in->globals.ack[in->P_0.i.var].var == (7 - 1)) != 0;
		case 4: return (in->globals.holder.var < 7) != 0;
		case 5: return (0 || in->P_0.i.var < 0 || in->P_0.i.var >= 7) ? 2 :
						in->globals.up[in->P_0.i.var].var != 0;
		case 6: return (in->P_0._pc.var == 1) != 0;
		case 7: return (in->P_1._pc.var == 0) != 0;
		case 8: return (in->P_1._pc.var == 2) != 0;
		case 9: return (0 || in->P_1.i.var < 0 || in->P_1.i.var >= 7) ? 2 :
						(in->globals.ack[in->P_1.i.var].var == (7 - 1)) != 0;
		case 10: return (0 || in->P_1.i.var < 0 || in->P_1.i.var >= 7) ? 2 :
						in->globals.up[in->P_1.i.var].var != 0;
		case 11: return (in->P_1._pc.var == 1) != 0;
		case 12: return (in->P_2._pc.var == 0) != 0;
		case 13: return (in->P_2._pc.var == 2) != 0;
		case 14: return (0 || in->P_2.i.var < 0 || in->P_2.i.var >= 7) ? 2 :
						(in->globals.ack[in->P_2.i.var].var == (7 - 1)) != 0;
		case 15: return (0 || in->P_2.i.var < 0 || in->P_2.i.var >= 7) ? 2 :
						in->globals.up[in->P_2.i.var].var != 0;
		case 16: return (in->P_2._pc.var == 1) != 0;
		case 17: return (in->P_3._pc.var == 0) != 0;
		case 18: return (in->P_3._pc.var == 2) != 0;
		case 19: return (0 || in->P_3.i.var < 0 || in->P_3.i.var >= 7) ? 2 :
						(in->globals.ack[in->P_3.i.var].var == (7 - 1)) != 0;
		case 20: return (0 || in->P_3.i.var < 0 || in->P_3.i.var >= 7) ? 2 :
						in->globals.up[in->P_3.i.var].var != 0;
		case 21: return (in->P_3._pc.var == 1) != 0;
		case 22: return (in->P_4._pc.var == 0) != 0;
		case 23: return (in->P_4._pc.var == 2) != 0;
		case 24: return (0 || in->P_4.i.var < 0 || in->P_4.i.var >= 7) ? 2 :
						(in->globals.ack[in->P_4.i.var].var == (7 - 1)) != 0;
		case 25: return (0 || in->P_4.i.var < 0 || in->P_4.i.var >= 7) ? 2 :
						in->globals.up[in->P_4.i.var].var != 0;
		case 26: return (in->P_4._pc.var == 1) != 0;
		case 27: return (in->P_5._pc.var == 0) != 0;
		case 28: return (in->P_5._pc.var == 2) != 0;
		case 29: return (0 || in->P_5.i.var < 0 || in->P_5.i.var >= 7) ? 2 :
						(in->globals.ack[in->P_5.i.var].var == (7 - 1)) != 0;
		case 30: return (0 || in->P_5.i.var < 0 || in->P_5.i.var >= 7) ? 2 :
						in->globals.up[in->P_5.i.var].var != 0;
		case 31: return (in->P_5._pc.var == 1) != 0;
		case 32: return (in->P_6._pc.var == 0) != 0;
		case 33: return (in->P_6._pc.var == 2) != 0;
		case 34: return (0 || in->P_6.i.var < 0 || in->P_6.i.var >= 7) ? 2 :
						(in->globals.ack[in->P_6.i.var].var == (7 - 1)) != 0;
		case 35: return (0 || in->P_6.i.var < 0 || in->P_6.i.var >= 7) ? 2 :
						in->globals.up[in->P_6.i.var].var != 0;
		case 36: return (in->P_6._pc.var == 1) != 0;
		case 37: return (in->init_0._pc.var == 0) != 0;
		case 38: return (in->init_0.i.var < 7) != 0;
		case 39: return (in->init_0._pc.var == 2) != 0;
		case 40: return (in->globals._nr_pr.var != 255) != 0;
		case 41: return (in->init_0._pc.var == 3) != 0;
		case 42: return (in->init_0.i.var >= 7) != 0;
		case 43: return (in->init_0._pc.var == 1) != 0;
		case 44: return ((0 + 1) == in->globals._nr_pr.var) != 0;
		case 45: return ((in->globals._nr_pr.var == 0) || ((((((((in->P_0._pc.var == -1) && (in->P_1._pc.var == -1)) && (in->P_2._pc.var == -1)) && (in->P_3._pc.var == -1)) && (in->P_4._pc.var == -1)) && (in->P_5._pc.var == -1)) && (in->P_6._pc.var == -1)) && (in->init_0._pc.var == -1)));
	}
	return false;
}

const char *spins_get_label_name(int g) {
	assert(g < 46, "spins_get_label_name: invalid state label index %d", g);
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
		case 45: return "end_";
	}
	return "";
}

void spins_get_labels_many (void* model, sj_struct_state_t* in, int* label, bool guards_only) {
	(void)model;
	label[0] = (in->P_0._pc.var == 0) != 0;
	label[1] = (in->globals.holder.var == 7) != 0;
	label[2] = (in->P_0._pc.var == 2) != 0;
	label[3] = (0 || in->P_0.i.var < 0 || in->P_0.i.var >= 7) ? 2 :
			(in->globals.ack[in->P_0.i.var].var == (7 - 1)) != 0;
	label[4] = (in->globals.holder.var < 7) != 0;
	label[5] = (0 || in->P_0.i.var < 0 || in->P_0.i.var >= 7) ? 2 :
			in->globals.up[in->P_0.i.var].var != 0;
	label[6] = (in->P_0._pc.var == 1) != 0;
	label[7] = (in->P_1._pc.var == 0) != 0;
	label[8] = (in->P_1._pc.var == 2) != 0;
	label[9] = (0 || in->P_1.i.var < 0 || in->P_1.i.var >= 7) ? 2 :
			(in->globals.ack[in->P_1.i.var].var == (7 - 1)) != 0;
	label[10] = (0 || in->P_1.i.var < 0 || in->P_1.i.var >= 7) ? 2 :
			in->globals.up[in->P_1.i.var].var != 0;
	label[11] = (in->P_1._pc.var == 1) != 0;
	label[12] = (in->P_2._pc.var == 0) != 0;
	label[13] = (in->P_2._pc.var == 2) != 0;
	label[14] = (0 || in->P_2.i.var < 0 || in->P_2.i.var >= 7) ? 2 :
			(in->globals.ack[in->P_2.i.var].var == (7 - 1)) != 0;
	label[15] = (0 || in->P_2.i.var < 0 || in->P_2.i.var >= 7) ? 2 :
			in->globals.up[in->P_2.i.var].var != 0;
	label[16] = (in->P_2._pc.var == 1) != 0;
	label[17] = (in->P_3._pc.var == 0) != 0;
	label[18] = (in->P_3._pc.var == 2) != 0;
	label[19] = (0 || in->P_3.i.var < 0 || in->P_3.i.var >= 7) ? 2 :
			(in->globals.ack[in->P_3.i.var].var == (7 - 1)) != 0;
	label[20] = (0 || in->P_3.i.var < 0 || in->P_3.i.var >= 7) ? 2 :
			in->globals.up[in->P_3.i.var].var != 0;
	label[21] = (in->P_3._pc.var == 1) != 0;
	label[22] = (in->P_4._pc.var == 0) != 0;
	label[23] = (in->P_4._pc.var == 2) != 0;
	label[24] = (0 || in->P_4.i.var < 0 || in->P_4.i.var >= 7) ? 2 :
			(in->globals.ack[in->P_4.i.var].var == (7 - 1)) != 0;
	label[25] = (0 || in->P_4.i.var < 0 || in->P_4.i.var >= 7) ? 2 :
			in->globals.up[in->P_4.i.var].var != 0;
	label[26] = (in->P_4._pc.var == 1) != 0;
	label[27] = (in->P_5._pc.var == 0) != 0;
	label[28] = (in->P_5._pc.var == 2) != 0;
	label[29] = (0 || in->P_5.i.var < 0 || in->P_5.i.var >= 7) ? 2 :
			(in->globals.ack[in->P_5.i.var].var == (7 - 1)) != 0;
	label[30] = (0 || in->P_5.i.var < 0 || in->P_5.i.var >= 7) ? 2 :
			in->globals.up[in->P_5.i.var].var != 0;
	label[31] = (in->P_5._pc.var == 1) != 0;
	label[32] = (in->P_6._pc.var == 0) != 0;
	label[33] = (in->P_6._pc.var == 2) != 0;
	label[34] = (0 || in->P_6.i.var < 0 || in->P_6.i.var >= 7) ? 2 :
			(in->globals.ack[in->P_6.i.var].var == (7 - 1)) != 0;
	label[35] = (0 || in->P_6.i.var < 0 || in->P_6.i.var >= 7) ? 2 :
			in->globals.up[in->P_6.i.var].var != 0;
	label[36] = (in->P_6._pc.var == 1) != 0;
	label[37] = (in->init_0._pc.var == 0) != 0;
	label[38] = (in->init_0.i.var < 7) != 0;
	label[39] = (in->init_0._pc.var == 2) != 0;
	label[40] = (in->globals._nr_pr.var != 255) != 0;
	label[41] = (in->init_0._pc.var == 3) != 0;
	label[42] = (in->init_0.i.var >= 7) != 0;
	label[43] = (in->init_0._pc.var == 1) != 0;
	label[44] = ((0 + 1) == in->globals._nr_pr.var) != 0;
	if (guards_only) return;
	label[45] = ((in->globals._nr_pr.var == 0) || ((((((((in->P_0._pc.var == -1) && (in->P_1._pc.var == -1)) && (in->P_2._pc.var == -1)) && (in->P_3._pc.var == -1)) && (in->P_4._pc.var == -1)) && (in->P_5._pc.var == -1)) && (in->P_6._pc.var == -1)) && (in->init_0._pc.var == -1)));
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
	assert(g < 46, "spins_get_label_matrix: invalid guard index %d", g);
	return gm_dm[g];
}

const int* spins_get_trans_commutes_matrix(int t) {
	assert(t < 34, "spins_get_trans_commutes_matrix: invalid trans index %d", t);
	return commutes_dm[t];
}

const int* spins_get_trans_do_not_accord_matrix(int t) {
	assert(t < 34, "spins_get_label_do_not_accord_matrix: invalid trans index %d", t);
	return dna_dm[t];
}

const int* spins_get_label_may_be_coenabled_matrix(int g) {
	assert(g < 46, "spins_get_label_may_be_coenabled_matrix: invalid guard index %d", g);
	return co_dm[g];
}

const int* spins_get_label_nes_matrix(int g) {
	assert(g < 46, "spins_get_label_nes_matrix: invalid guard index %d", g);
	return nes_dm[g];
}

const int* spins_get_label_nds_matrix(int g) {
	assert(g < 46, "spins_get_label_nds_matrix: invalid guard index %d", g);
	return nds_dm[g];
}

static const char* var_names[] = {
	"P_0._pc",
	"P_0._pid",
	"P_0.i",
	"P_0.j",
	"P_1._pc",
	"P_1._pid",
	"P_1.i",
	"P_1.j",
	"P_2._pc",
	"P_2._pid",
	"P_2.i",
	"P_2.j",
	"P_3._pc",
	"P_3._pid",
	"P_3.i",
	"P_3.j",
	"P_4._pc",
	"P_4._pid",
	"P_4.i",
	"P_4.j",
	"P_5._pc",
	"P_5._pid",
	"P_5.i",
	"P_5.j",
	"P_6._pc",
	"P_6._pid",
	"P_6.i",
	"P_6.j",
	"_nr_pr",
	"holder",
	"up[0]",
	"up[1]",
	"up[2]",
	"up[3]",
	"up[4]",
	"up[5]",
	"up[6]",
	"ack[0]",
	"ack[1]",
	"ack[2]",
	"ack[3]",
	"ack[4]",
	"ack[5]",
	"ack[6]",
	"init_0._pc",
	"init_0.i"
};

static const char* var_types[] = {
	"bool",
	"guard",
	"pc",
	"pid",
	"byte",
	"int",
	"statement",
	"action",
	""
};

static const int var_type[] = {
	2,
	3,
	4,
	4,
	2,
	3,
	4,
	4,
	2,
	3,
	4,
	4,
	2,
	3,
	4,
	4,
	2,
	3,
	4,
	4,
	2,
	3,
	4,
	4,
	2,
	3,
	4,
	4,
	5,
	4,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	2,
	4,
	-1
};

static const int var_type_value_count[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	34,
	3,
	-1
};

static const char* const var_type_bool[] = {
};

static const char* const var_type_guard[] = {
};

static const char* const var_type_pc[] = {
};

static const char* const var_type_pid[] = {
};

static const char* const var_type_byte[] = {
};

static const char* const var_type_int[] = {
};

static const char* const var_type_statement[] = {
	"group 0 (P_0) dbm.pr:26 (state 2) <invalid end state> [(holder == 7)] -1",
	"group 1 (P_0) dbm.pr:38 (state 0) <invalid end state> [(ack[P_0.i] == (7 - 1))] -1",
	"group 2 (P_0) dbm.pr:47 (state 1) <invalid end state> [((holder < 7) && (up[i] != 0 ))] -1",
	"group 3 (P_0) dbm.pr:50 (state 0) <invalid end state> [ack[holder]++] -1",
	"group 4 (P_1) dbm.pr:26 (state 2) <invalid end state> [(holder == 7)] -1",
	"group 5 (P_1) dbm.pr:38 (state 0) <invalid end state> [(ack[P_1.i] == (7 - 1))] -1",
	"group 6 (P_1) dbm.pr:47 (state 1) <invalid end state> [((holder < 7) && (up[i] != 0 ))] -1",
	"group 7 (P_1) dbm.pr:50 (state 0) <invalid end state> [ack[holder]++] -1",
	"group 8 (P_2) dbm.pr:26 (state 2) <invalid end state> [(holder == 7)] -1",
	"group 9 (P_2) dbm.pr:38 (state 0) <invalid end state> [(ack[P_2.i] == (7 - 1))] -1",
	"group 10 (P_2) dbm.pr:47 (state 1) <invalid end state> [((holder < 7) && (up[i] != 0 ))] -1",
	"group 11 (P_2) dbm.pr:50 (state 0) <invalid end state> [ack[holder]++] -1",
	"group 12 (P_3) dbm.pr:26 (state 2) <invalid end state> [(holder == 7)] -1",
	"group 13 (P_3) dbm.pr:38 (state 0) <invalid end state> [(ack[P_3.i] == (7 - 1))] -1",
	"group 14 (P_3) dbm.pr:47 (state 1) <invalid end state> [((holder < 7) && (up[i] != 0 ))] -1",
	"group 15 (P_3) dbm.pr:50 (state 0) <invalid end state> [ack[holder]++] -1",
	"group 16 (P_4) dbm.pr:26 (state 2) <invalid end state> [(holder == 7)] -1",
	"group 17 (P_4) dbm.pr:38 (state 0) <invalid end state> [(ack[P_4.i] == (7 - 1))] -1",
	"group 18 (P_4) dbm.pr:47 (state 1) <invalid end state> [((holder < 7) && (up[i] != 0 ))] -1",
	"group 19 (P_4) dbm.pr:50 (state 0) <invalid end state> [ack[holder]++] -1",
	"group 20 (P_5) dbm.pr:26 (state 2) <invalid end state> [(holder == 7)] -1",
	"group 21 (P_5) dbm.pr:38 (state 0) <invalid end state> [(ack[P_5.i] == (7 - 1))] -1",
	"group 22 (P_5) dbm.pr:47 (state 1) <invalid end state> [((holder < 7) && (up[i] != 0 ))] -1",
	"group 23 (P_5) dbm.pr:50 (state 0) <invalid end state> [ack[holder]++] -1",
	"group 24 (P_6) dbm.pr:26 (state 2) <invalid end state> [(holder == 7)] -1",
	"group 25 (P_6) dbm.pr:38 (state 0) <invalid end state> [(ack[P_6.i] == (7 - 1))] -1",
	"group 26 (P_6) dbm.pr:47 (state 1) <invalid end state> [((holder < 7) && (up[i] != 0 ))] -1",
	"group 27 (P_6) dbm.pr:50 (state 0) <invalid end state> [ack[holder]++] -1",
	"group 28 (init_0) dbm.pr:63 (state 2) <invalid end state> [(init_0.i < 7)] -1",
	"group 29 (init_0) dbm.pr:63 (state 3) <invalid end state> [run P(i)] -1",
	"group 30 (init_0) dbm.pr:63 (state 2) <invalid end state> [(init_0.i < 7)] -1",
	"group 31 (init_0) dbm.pr:-1 (state 1) <valid end state> [tau] -1",
	"group 32 (init_0) dbm.pr:-1 (state -1) <valid end state> [tau] -1",
	"group 33 (init_0) dbm.pr:-1 (state 1) <valid end state> [tau] -1",
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
	var_type_pid,
	var_type_byte,
	var_type_int,
	var_type_statement,
	var_type_action,
	NULL
};

extern const char* spins_get_state_variable_name(unsigned int var) {
	assert(var < 46, "spins_get_state_variable_name: invalid variable index %d", var);
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
	assert(var > -1 && var < 46, "spins_get_state_variable_type: invalid variable %d", var);
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

