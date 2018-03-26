/** Generated LTSmin model - i3.pr
 * State size:  29 elements (116 bytes)
 * Transitions: 55
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

typedef struct sj_struct_medium1_0_t {
	sj_int16 _pc;
	sj_uint8 pty;
	sj_uint8 seq;
	sj_uint8 ak;
} sj_struct_medium1_0_t;

typedef struct sj_struct_medium2_0_t {
	sj_int16 _pc;
	sj_uint8 pty;
	sj_uint8 seq;
	sj_uint8 ak;
} sj_struct_medium2_0_t;

typedef struct sj_struct_globals_t {
} sj_struct_globals_t;

typedef struct sj_struct_sender_0_t {
	sj_int16 _pc;
	sj_uint8 sendseq;
	sj_uint8 rack;
	sj_uint8 pty;
	sj_uint8 seq;
	sj_uint8 ak;
} sj_struct_sender_0_t;

typedef struct sj_struct_recver_0_t {
	sj_int16 _pc;
	sj_uint8 recseq;
	sj_uint8 lack;
	sj_uint1 recbuf[4];
	sj_uint1 nakd[4];
	sj_uint8 pty;
	sj_uint8 seq;
	sj_uint8 ak;
	sj_uint8 tmp;
} sj_struct_recver_0_t;

typedef struct sj_struct_state_t {
	sj_struct_medium1_0_t medium1_0;
	sj_struct_medium2_0_t medium2_0;
	sj_struct_globals_t globals;
	sj_struct_sender_0_t sender_0;
	sj_struct_recver_0_t recver_0;
} sj_struct_state_t;

typedef sj_struct_state_t state_t;

extern inline int spins_simple_reach (void* model, transition_info_t *transition_info, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg, int pid, int *cpy);
extern int spins_get_successor_all (void* model, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg);
extern int spins_get_successor (void* model, int t, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg);
extern int spins_get_actions (void* model, int t, state_t *in, void (*callback)(void* arg, transition_info_t *transition_info, state_t *out, int *cpy), void *arg);
extern void spins_atomic_cb (void* arg, transition_info_t *transition_info, state_t *out, int atomic, int *cpy);
extern void spins_simple_atomic_cb (void* arg, transition_info_t *transition_info, state_t *out, int atomic, int *cpy);
extern int *spins_get_guards (state_t *in);

extern const int spins_get_state_size() {
	return 29;
}

sj_struct_state_t initial = (sj_struct_state_t) {
	.medium1_0._pc.pad                       = 0,
	.medium1_0._pc.var                       = 0, // 0
	.medium1_0.pty.pad                       = 0,
	.medium1_0.pty.var                       = 0, // 1
	.medium1_0.seq.pad                       = 0,
	.medium1_0.seq.var                       = 0, // 2
	.medium1_0.ak.pad                        = 0,
	.medium1_0.ak.var                        = 0, // 3
	.medium2_0._pc.pad                       = 0,
	.medium2_0._pc.var                       = 0, // 4
	.medium2_0.pty.pad                       = 0,
	.medium2_0.pty.var                       = 0, // 5
	.medium2_0.seq.pad                       = 0,
	.medium2_0.seq.var                       = 0, // 6
	.medium2_0.ak.pad                        = 0,
	.medium2_0.ak.var                        = 0, // 7
	.sender_0._pc.pad                        = 0,
	.sender_0._pc.var                        = 0, // 8
	.sender_0.sendseq.pad                    = 0,
	.sender_0.sendseq.var                    = 1, // 9
	.sender_0.rack.pad                       = 0,
	.sender_0.rack.var                       = 0, // 10
	.sender_0.pty.pad                        = 0,
	.sender_0.pty.var                        = 0, // 11
	.sender_0.seq.pad                        = 0,
	.sender_0.seq.var                        = 0, // 12
	.sender_0.ak.pad                         = 0,
	.sender_0.ak.var                         = 0, // 13
	.recver_0._pc.pad                        = 0,
	.recver_0._pc.var                        = 0, // 14
	.recver_0.recseq.pad                     = 0,
	.recver_0.recseq.var                     = 0, // 15
	.recver_0.lack.pad                       = 0,
	.recver_0.lack.var                       = 0, // 16
	.recver_0.recbuf[0].pad                  = 0,
	.recver_0.recbuf[0].var                  = 0, // 17
	.recver_0.recbuf[1].pad                  = 0,
	.recver_0.recbuf[1].var                  = 0, // 18
	.recver_0.recbuf[2].pad                  = 0,
	.recver_0.recbuf[2].var                  = 0, // 19
	.recver_0.recbuf[3].pad                  = 0,
	.recver_0.recbuf[3].var                  = 0, // 20
	.recver_0.nakd[0].pad                    = 0,
	.recver_0.nakd[0].var                    = 0, // 21
	.recver_0.nakd[1].pad                    = 0,
	.recver_0.nakd[1].var                    = 0, // 22
	.recver_0.nakd[2].pad                    = 0,
	.recver_0.nakd[2].var                    = 0, // 23
	.recver_0.nakd[3].pad                    = 0,
	.recver_0.nakd[3].var                    = 0, // 24
	.recver_0.pty.pad                        = 0,
	.recver_0.pty.var                        = 0, // 25
	.recver_0.seq.pad                        = 0,
	.recver_0.seq.var                        = 0, // 26
	.recver_0.ak.pad                         = 0,
	.recver_0.ak.var                         = 0, // 27
	.recver_0.tmp.pad                        = 0,
	.recver_0.tmp.var                        = 0
};

extern void spins_get_initial_state( state_t *to )
{
	assert(29*4 == sizeof(sj_struct_state_t),
		"state_t SIZE MISMATCH!: state: %zu != %i", 
		sizeof(sj_struct_state_t), 29*4);
	memcpy(to, (char*)&initial, sizeof(sj_struct_state_t));
}

char leaves_atomic[55] = {
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
	true,	// 24
	false,	// 25
	false,	// 26
	false,	// 27
	false,	// 28
	false,	// 29
	false,	// 30
	false,	// 31
	true,	// 32
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
	int cpy[29] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, };
	int i;
	int j;

	switch(t) {
	case 0: {
		// sender_0(0-->9)	[((Math.abs(((sendseq + 4) - rack) % 4) <= (4 / 2)) && (sendseq != rack))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 9;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 0;
		transition_info.group = 0;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 1: {
		// sender_0(9-->10) X medium1_0(0-->1)	[s2m!data,sender_0.sendseq,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium1_0.pty.var = 1;
		cpy[((int *)&out->medium1_0.pty.pad - (int *)out)] = 0;
		out->medium1_0.seq.var = out->sender_0.sendseq.var;
		cpy[((int *)&out->medium1_0.seq.pad - (int *)out)] = 0;
		out->medium1_0.ak.var = 0;
		cpy[((int *)&out->medium1_0.ak.pad - (int *)out)] = 0;
		out->sender_0._pc.var = 10;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		out->medium1_0._pc.var = 1;
		cpy[((int *)&out->medium1_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 1;
		transition_info.group = 1;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 2: {
		// medium1_0(1-->0) X recver_0(0-->2)	[m2r!medium1_0.pty,medium1_0.seq,medium1_0.ak X m2r?recver_0.pty,recver_0.seq,recver_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0.pty.var = out->medium1_0.pty.var;
		cpy[((int *)&out->recver_0.pty.pad - (int *)out)] = 0;
		out->recver_0.seq.var = out->medium1_0.seq.var;
		cpy[((int *)&out->recver_0.seq.pad - (int *)out)] = 0;
		out->recver_0.ak.var = out->medium1_0.ak.var;
		cpy[((int *)&out->recver_0.ak.pad - (int *)out)] = 0;
		out->medium1_0._pc.var = 0;
		cpy[((int *)&out->medium1_0._pc.pad - (int *)out)] = 0;
		out->recver_0._pc.var = 2;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 2;
		transition_info.group = 2;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 3: {
		// recver_0(2-->20)	[(recver_0.pty == nak)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 20;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 3;
		transition_info.group = 3;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 4: {
		// recver_0(20-->21) X medium2_0(0-->1)	[r2m!ack,recver_0.recseq,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium2_0.pty.var = 3;
		cpy[((int *)&out->medium2_0.pty.pad - (int *)out)] = 0;
		out->medium2_0.seq.var = out->recver_0.recseq.var;
		cpy[((int *)&out->medium2_0.seq.pad - (int *)out)] = 0;
		out->medium2_0.ak.var = out->recver_0.recseq.var;
		cpy[((int *)&out->medium2_0.ak.pad - (int *)out)] = 0;
		out->recver_0._pc.var = 21;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->medium2_0._pc.var = 1;
		cpy[((int *)&out->medium2_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 4;
		transition_info.group = 4;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 5: {
		// medium2_0(1-->0) X sender_0(0-->5)	[m2s!medium2_0.pty,medium2_0.seq,medium2_0.ak X m2s?sender_0.pty,sender_0.seq,sender_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0.pty.var = out->medium2_0.pty.var;
		cpy[((int *)&out->sender_0.pty.pad - (int *)out)] = 0;
		out->sender_0.seq.var = out->medium2_0.seq.var;
		cpy[((int *)&out->sender_0.seq.pad - (int *)out)] = 0;
		out->sender_0.ak.var = out->medium2_0.ak.var;
		cpy[((int *)&out->sender_0.ak.pad - (int *)out)] = 0;
		out->medium2_0._pc.var = 0;
		cpy[((int *)&out->medium2_0._pc.pad - (int *)out)] = 0;
		out->sender_0._pc.var = 5;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		if(!((out->sender_0.pty.var == 3) || (out->sender_0.pty.var == 2))) {
			transition_labels[1] = 1;
		}
		transition_labels[0] = 5;
		transition_info.group = 5;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 6: {
		// sender_0(5-->6)	[(!(((ak == sendseq) || (Math.abs(((ak + 4) - rack) % 4) > (4 / 2))) || (Math.abs(((sendseq + 4) - ak) % 4) > (4 / 2))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 6;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		out->sender_0.rack.var = out->sender_0.ak.var;
		cpy[((int *)&out->sender_0.rack.pad - (int *)out)] = 0;
		transition_labels[0] = 6;
		transition_info.group = 6;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 7: {
		// sender_0(6-->7)	[(sender_0.pty == nak)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 7;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 7;
		transition_info.group = 7;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 8: {
		// sender_0(7-->8)	[(!(((seq == sendseq) || (Math.abs(((seq + 4) - rack) % 4) > (4 / 2))) || (Math.abs(((sendseq + 4) - seq) % 4) > (4 / 2))))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 8;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 8;
		transition_info.group = 8;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 9: {
		// sender_0(8-->0) X medium1_0(0-->1)	[s2m!data,sender_0.seq,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium1_0.pty.var = 1;
		cpy[((int *)&out->medium1_0.pty.pad - (int *)out)] = 0;
		out->medium1_0.seq.var = out->sender_0.seq.var;
		cpy[((int *)&out->medium1_0.seq.pad - (int *)out)] = 0;
		out->medium1_0.ak.var = 0;
		cpy[((int *)&out->medium1_0.ak.pad - (int *)out)] = 0;
		out->sender_0._pc.var = 0;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		out->medium1_0._pc.var = 1;
		cpy[((int *)&out->medium1_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 9;
		transition_info.group = 9;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 10: {
		// sender_0(7-->0)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 0;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 10;
		transition_info.group = 10;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 11: {
		// sender_0(6-->0)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 0;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 11;
		transition_info.group = 11;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 12: {
		// sender_0(5-->6)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 6;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 12;
		transition_info.group = 12;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 13: {
		// medium2_0(1-->2)	[true] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium2_0._pc.var = 2;
		cpy[((int *)&out->medium2_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 13;
		transition_info.group = 13;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 14: {
		// medium2_0(2-->0)	[skip] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium2_0._pc.var = 0;
		cpy[((int *)&out->medium2_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 14;
		transition_labels[1] = 2;
		transition_info.group = 14;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 15: {
		// recver_0(21-->0)	[recver_0.lack = recver_0.recseq] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.lack.var = out->recver_0.recseq.var;
		cpy[((int *)&out->recver_0.lack.pad - (int *)out)] = 0;
		transition_labels[0] = 15;
		transition_info.group = 15;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 16: {
		// recver_0(0-->1) X medium2_0(0-->1)	[r2m!nak,((recver_0.recseq + 1) % 4),recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium2_0.pty.var = 2;
		cpy[((int *)&out->medium2_0.pty.pad - (int *)out)] = 0;
		out->medium2_0.seq.var = abs((out->recver_0.recseq.var + 1) % 4);
		cpy[((int *)&out->medium2_0.seq.pad - (int *)out)] = 0;
		out->medium2_0.ak.var = out->recver_0.recseq.var;
		cpy[((int *)&out->medium2_0.ak.pad - (int *)out)] = 0;
		out->recver_0._pc.var = 1;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->medium2_0._pc.var = 1;
		cpy[((int *)&out->medium2_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 16;
		transition_info.group = 16;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 17: {
		// recver_0(1-->0)	[recver_0.seq = 0] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.seq.var = 0;
		cpy[((int *)&out->recver_0.seq.pad - (int *)out)] = 0;
		int do_label_1_var = true;
do_label_10:	while (do_label_1_var) {
			if ((out->recver_0.seq.var < 4)) {
				out->recver_0.nakd[out->recver_0.seq.var].var = 0;
				cpy[((int *)&out->recver_0.nakd[out->recver_0.seq.var].pad - (int *)out)] = 0;
				out->recver_0.seq.var++;
				cpy[((int *)&out->recver_0.seq.pad - (int *)out)] = 0;
			} else if ((out->recver_0.seq.var == 4)) {
				do_label_1_var = false;
				goto do_label_10;
			} else { assert(false, "Blocking loop in d_step"); }
		}
		out->recver_0.lack.var = out->recver_0.recseq.var;
		cpy[((int *)&out->recver_0.lack.pad - (int *)out)] = 0;
		out->recver_0.nakd[abs((out->recver_0.recseq.var + 1) % 4)].var = 1;
		cpy[((int *)&out->recver_0.nakd[abs((out->recver_0.recseq.var + 1) % 4)].pad - (int *)out)] = 0;
		transition_labels[0] = 17;
		transition_labels[1] = 2;
		transition_info.group = 17;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 18: {
		// recver_0(2-->3)	[(recver_0.pty == data)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 3;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 18;
		transition_info.group = 18;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 19: {
		// recver_0(3-->0)	[((Math.abs(((seq + 4) - lack) % 4) > (4 / 2)) || (seq == lack))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 19;
		transition_info.group = 19;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 20: {
		// recver_0(3-->4)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 4;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 20;
		transition_info.group = 20;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 21: {
		// recver_0(4-->17)	[true] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 17;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 21;
		transition_info.group = 21;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 22: {
		// recver_0(17-->18)	[(((seq != recseq) && (!(recbuf[seq] != 0 ))) && (Math.abs(((seq + 4) - recseq) % 4) <= (4 / 2)))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 18;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 22;
		transition_labels[1] = 2;
		transition_info.group = 22;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 23: {
		// recver_0(18-->19) X medium2_0(0-->1)	[r2m!nak,recver_0.seq,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium2_0.pty.var = 2;
		cpy[((int *)&out->medium2_0.pty.pad - (int *)out)] = 0;
		out->medium2_0.seq.var = out->recver_0.seq.var;
		cpy[((int *)&out->medium2_0.seq.pad - (int *)out)] = 0;
		out->medium2_0.ak.var = out->recver_0.recseq.var;
		cpy[((int *)&out->medium2_0.ak.pad - (int *)out)] = 0;
		out->recver_0._pc.var = 19;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->medium2_0._pc.var = 1;
		cpy[((int *)&out->medium2_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 23;
		transition_info.group = 23;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 24: {
		// recver_0(19-->0)	[recver_0.lack = recver_0.recseq] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.lack.var = out->recver_0.recseq.var;
		cpy[((int *)&out->recver_0.lack.pad - (int *)out)] = 0;
		out->recver_0.nakd[out->recver_0.seq.var].var = 1;
		cpy[((int *)&out->recver_0.nakd[out->recver_0.seq.var].pad - (int *)out)] = 0;
		transition_labels[0] = 24;
		transition_info.group = 24;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 25: {
		// recver_0(17-->0)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 25;
		transition_labels[1] = 2;
		transition_info.group = 25;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 26: {
		// recver_0(4-->5)	[recver_0.nakd[recver_0.seq] = false] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 5;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.nakd[out->recver_0.seq.var].var = 0;
		cpy[((int *)&out->recver_0.nakd[out->recver_0.seq.var].pad - (int *)out)] = 0;
		transition_labels[0] = 26;
		transition_info.group = 26;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 27: {
		// recver_0(5-->11)	[(recver_0.seq != ((recver_0.recseq + 1) % 4))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 11;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 27;
		transition_info.group = 27;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 28: {
		// recver_0(11-->12)	[((seq != recseq) && (!(recbuf[seq] != 0 )))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 12;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.recbuf[out->recver_0.seq.var].var = 1;
		cpy[((int *)&out->recver_0.recbuf[out->recver_0.seq.var].pad - (int *)out)] = 0;
		out->recver_0.tmp.var = abs((out->recver_0.recseq.var + 1) % 4);
		cpy[((int *)&out->recver_0.tmp.pad - (int *)out)] = 0;
		transition_labels[0] = 28;
		transition_info.group = 28;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 29: {
		// recver_0(12-->13)	[(recver_0.tmp != recver_0.seq)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 13;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 29;
		transition_info.group = 29;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 30: {
		// recver_0(13-->15)	[(!((nakd[tmp] != 0 ) || (recbuf[tmp] != 0 )))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 15;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 30;
		transition_info.group = 30;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 31: {
		// recver_0(15-->16) X medium2_0(0-->1)	[r2m!nak,recver_0.tmp,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium2_0.pty.var = 2;
		cpy[((int *)&out->medium2_0.pty.pad - (int *)out)] = 0;
		out->medium2_0.seq.var = out->recver_0.tmp.var;
		cpy[((int *)&out->medium2_0.seq.pad - (int *)out)] = 0;
		out->medium2_0.ak.var = out->recver_0.recseq.var;
		cpy[((int *)&out->medium2_0.ak.pad - (int *)out)] = 0;
		out->recver_0._pc.var = 16;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->medium2_0._pc.var = 1;
		cpy[((int *)&out->medium2_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 31;
		transition_info.group = 31;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 32: {
		// recver_0(16-->14)	[recver_0.lack = recver_0.recseq] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 14;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.lack.var = out->recver_0.recseq.var;
		cpy[((int *)&out->recver_0.lack.pad - (int *)out)] = 0;
		out->recver_0.nakd[out->recver_0.tmp.var].var = 1;
		cpy[((int *)&out->recver_0.nakd[out->recver_0.tmp.var].pad - (int *)out)] = 0;
		transition_labels[0] = 32;
		transition_info.group = 32;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 33: {
		// recver_0(14-->12)	[recver_0.tmp = ((recver_0.tmp + 1) % 4)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 12;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.tmp.var = abs((out->recver_0.tmp.var + 1) % 4);
		cpy[((int *)&out->recver_0.tmp.pad - (int *)out)] = 0;
		transition_labels[0] = 33;
		transition_info.group = 33;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 34: {
		// recver_0(13-->14)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 14;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 34;
		transition_info.group = 34;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 35: {
		// recver_0(12-->0)	[(recver_0.tmp == recver_0.seq)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 35;
		transition_info.group = 35;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 36: {
		// recver_0(11-->0)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 36;
		transition_info.group = 36;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 37: {
		// recver_0(5-->6)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 6;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 37;
		transition_info.group = 37;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 38: {
		// recver_0(6-->7)	[recver_0.recseq = recver_0.seq] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 7;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.recseq.var = out->recver_0.seq.var;
		cpy[((int *)&out->recver_0.recseq.pad - (int *)out)] = 0;
		out->recver_0.tmp.var = abs((out->recver_0.seq.var + 1) % 4);
		cpy[((int *)&out->recver_0.tmp.pad - (int *)out)] = 0;
		transition_labels[0] = 38;
		transition_labels[1] = 2;
		transition_info.group = 38;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 39: {
		// recver_0(7-->7)	[recver_0.recbuf[recver_0.tmp]] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 7;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.recseq.var = out->recver_0.tmp.var;
		cpy[((int *)&out->recver_0.recseq.pad - (int *)out)] = 0;
		out->recver_0.recbuf[out->recver_0.tmp.var].var = 0;
		cpy[((int *)&out->recver_0.recbuf[out->recver_0.tmp.var].pad - (int *)out)] = 0;
		out->recver_0.tmp.var = abs((out->recver_0.tmp.var + 1) % 4);
		cpy[((int *)&out->recver_0.tmp.pad - (int *)out)] = 0;
		transition_labels[0] = 39;
		transition_info.group = 39;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 40: {
		// recver_0(7-->8)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 8;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 40;
		transition_info.group = 40;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 41: {
		// recver_0(8-->9)	[(!(Math.abs(((seq + 4) - lack) % 4) < (4 / 4)))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 9;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 41;
		transition_info.group = 41;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 42: {
		// recver_0(9-->10) X medium2_0(0-->1)	[r2m!ack,recver_0.seq,recver_0.seq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium2_0.pty.var = 3;
		cpy[((int *)&out->medium2_0.pty.pad - (int *)out)] = 0;
		out->medium2_0.seq.var = out->recver_0.seq.var;
		cpy[((int *)&out->medium2_0.seq.pad - (int *)out)] = 0;
		out->medium2_0.ak.var = out->recver_0.seq.var;
		cpy[((int *)&out->medium2_0.ak.pad - (int *)out)] = 0;
		out->recver_0._pc.var = 10;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->medium2_0._pc.var = 1;
		cpy[((int *)&out->medium2_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 42;
		transition_info.group = 42;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 43: {
		// recver_0(10-->0)	[recver_0.lack = recver_0.recseq] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.lack.var = out->recver_0.recseq.var;
		cpy[((int *)&out->recver_0.lack.pad - (int *)out)] = 0;
		transition_labels[0] = 43;
		transition_info.group = 43;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 44: {
		// recver_0(8-->0)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 44;
		transition_info.group = 44;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 45: {
		// medium1_0(1-->2)	[true] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium1_0._pc.var = 2;
		cpy[((int *)&out->medium1_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 45;
		transition_info.group = 45;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 46: {
		// medium1_0(2-->0)	[skip] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium1_0._pc.var = 0;
		cpy[((int *)&out->medium1_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 46;
		transition_labels[1] = 2;
		transition_info.group = 46;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 47: {
		// sender_0(10-->0)	[sender_0.sendseq = ((sender_0.sendseq + 1) % 4)] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 0;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		out->sender_0.sendseq.var = abs((out->sender_0.sendseq.var + 1) % 4);
		cpy[((int *)&out->sender_0.sendseq.pad - (int *)out)] = 0;
		transition_labels[0] = 47;
		transition_info.group = 47;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 48: {
		// sender_0(0-->1) X medium1_0(0-->1)	[s2m!nak,1,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium1_0.pty.var = 2;
		cpy[((int *)&out->medium1_0.pty.pad - (int *)out)] = 0;
		out->medium1_0.seq.var = 1;
		cpy[((int *)&out->medium1_0.seq.pad - (int *)out)] = 0;
		out->medium1_0.ak.var = 0;
		cpy[((int *)&out->medium1_0.ak.pad - (int *)out)] = 0;
		out->sender_0._pc.var = 1;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		out->medium1_0._pc.var = 1;
		cpy[((int *)&out->medium1_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 48;
		transition_info.group = 48;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 49: {
		// sender_0(1-->4)	[((Math.abs(((sendseq + 4) - rack) % 4) <= (4 / 2)) && (sendseq != rack))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 4;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 49;
		transition_info.group = 49;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 50: {
		// sender_0(4-->2)	[skip] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 2;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 50;
		transition_labels[1] = 2;
		transition_info.group = 50;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 51: {
		// sender_0(2-->3)	[(sender_0.sendseq != ((sender_0.rack + 1) % 4))] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 3;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 51;
		transition_info.group = 51;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 52: {
		// sender_0(3-->0) X medium1_0(0-->1)	[s2m!data,((sender_0.rack + 1) % 4),0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->medium1_0.pty.var = 1;
		cpy[((int *)&out->medium1_0.pty.pad - (int *)out)] = 0;
		out->medium1_0.seq.var = abs((out->sender_0.rack.var + 1) % 4);
		cpy[((int *)&out->medium1_0.seq.pad - (int *)out)] = 0;
		out->medium1_0.ak.var = 0;
		cpy[((int *)&out->medium1_0.ak.pad - (int *)out)] = 0;
		out->sender_0._pc.var = 0;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		out->medium1_0._pc.var = 1;
		cpy[((int *)&out->medium1_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 52;
		transition_info.group = 52;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 53: {
		// sender_0(2-->0)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 0;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 53;
		transition_info.group = 53;
		callback(arg,&transition_info,out,cpy);
		++states_emitted;
		return states_emitted;
	}
	case 54: {
		// sender_0(1-->2)	[tau] -1
		memcpy(out, in, sizeof(sj_struct_state_t));
		out->sender_0._pc.var = 2;
		cpy[((int *)&out->sender_0._pc.pad - (int *)out)] = 0;
		transition_labels[0] = 54;
		transition_info.group = 54;
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
		// sender_0(0-->9)	[((Math.abs(((sendseq + 4) - rack) % 4) <= (4 / 2)) && (sendseq != rack))] -1
		if ((in->sender_0._pc.var == 0) &&
			((abs(((in->sender_0.sendseq.var + 4) - in->sender_0.rack.var) % 4) <= (4 / 2)) && (in->sender_0.sendseq.var != in->sender_0.rack.var))) {
			states_emitted += spins_get_actions (model, 0, in, callback, arg);
		}
		return states_emitted;
	}
	case 1: {
		// sender_0(9-->10) X medium1_0(0-->1)	[s2m!data,sender_0.sendseq,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
		if ((in->sender_0._pc.var == 9) &&
			(in->medium1_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 1, in, callback, arg);
		}
		return states_emitted;
	}
	case 2: {
		// medium1_0(1-->0) X recver_0(0-->2)	[m2r!medium1_0.pty,medium1_0.seq,medium1_0.ak X m2r?recver_0.pty,recver_0.seq,recver_0.ak] -1
		if ((in->medium1_0._pc.var == 1) &&
			(in->recver_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 2, in, callback, arg);
		}
		return states_emitted;
	}
	case 3: {
		// recver_0(2-->20)	[(recver_0.pty == nak)] -1
		if ((in->recver_0._pc.var == 2) &&
			(in->recver_0.pty.var == 2)) {
			states_emitted += spins_get_actions (model, 3, in, callback, arg);
		}
		return states_emitted;
	}
	case 4: {
		// recver_0(20-->21) X medium2_0(0-->1)	[r2m!ack,recver_0.recseq,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		if ((in->recver_0._pc.var == 20) &&
			(in->medium2_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 4, in, callback, arg);
		}
		return states_emitted;
	}
	case 5: {
		// medium2_0(1-->0) X sender_0(0-->5)	[m2s!medium2_0.pty,medium2_0.seq,medium2_0.ak X m2s?sender_0.pty,sender_0.seq,sender_0.ak] -1
		if ((in->medium2_0._pc.var == 1) &&
			(in->sender_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 5, in, callback, arg);
		}
		return states_emitted;
	}
	case 6: {
		// sender_0(5-->6)	[(!(((ak == sendseq) || (Math.abs(((ak + 4) - rack) % 4) > (4 / 2))) || (Math.abs(((sendseq + 4) - ak) % 4) > (4 / 2))))] -1
		if ((in->sender_0._pc.var == 5) &&
			(!(((in->sender_0.ak.var == in->sender_0.sendseq.var) || (abs(((in->sender_0.ak.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2))) || (abs(((in->sender_0.sendseq.var + 4) - in->sender_0.ak.var) % 4) > (4 / 2))))) {
			states_emitted += spins_get_actions (model, 6, in, callback, arg);
		}
		return states_emitted;
	}
	case 7: {
		// sender_0(6-->7)	[(sender_0.pty == nak)] -1
		if ((in->sender_0._pc.var == 6) &&
			(in->sender_0.pty.var == 2)) {
			states_emitted += spins_get_actions (model, 7, in, callback, arg);
		}
		return states_emitted;
	}
	case 8: {
		// sender_0(7-->8)	[(!(((seq == sendseq) || (Math.abs(((seq + 4) - rack) % 4) > (4 / 2))) || (Math.abs(((sendseq + 4) - seq) % 4) > (4 / 2))))] -1
		if ((in->sender_0._pc.var == 7) &&
			(!(((in->sender_0.seq.var == in->sender_0.sendseq.var) || (abs(((in->sender_0.seq.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2))) || (abs(((in->sender_0.sendseq.var + 4) - in->sender_0.seq.var) % 4) > (4 / 2))))) {
			states_emitted += spins_get_actions (model, 8, in, callback, arg);
		}
		return states_emitted;
	}
	case 9: {
		// sender_0(8-->0) X medium1_0(0-->1)	[s2m!data,sender_0.seq,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
		if ((in->sender_0._pc.var == 8) &&
			(in->medium1_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 9, in, callback, arg);
		}
		return states_emitted;
	}
	case 10: {
		// sender_0(7-->0)	[tau] -1
		if ((in->sender_0._pc.var == 7) &&
			(((in->sender_0.seq.var == in->sender_0.sendseq.var) || (abs(((in->sender_0.seq.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2))) || (abs(((in->sender_0.sendseq.var + 4) - in->sender_0.seq.var) % 4) > (4 / 2)))) {
			states_emitted += spins_get_actions (model, 10, in, callback, arg);
		}
		return states_emitted;
	}
	case 11: {
		// sender_0(6-->0)	[tau] -1
		if ((in->sender_0._pc.var == 6) &&
			(in->sender_0.pty.var != 2)) {
			states_emitted += spins_get_actions (model, 11, in, callback, arg);
		}
		return states_emitted;
	}
	case 12: {
		// sender_0(5-->6)	[tau] -1
		if ((in->sender_0._pc.var == 5) &&
			(((in->sender_0.ak.var == in->sender_0.sendseq.var) || (abs(((in->sender_0.ak.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2))) || (abs(((in->sender_0.sendseq.var + 4) - in->sender_0.ak.var) % 4) > (4 / 2)))) {
			states_emitted += spins_get_actions (model, 12, in, callback, arg);
		}
		return states_emitted;
	}
	case 13: {
		// medium2_0(1-->2)	[true] -1
		if ((in->medium2_0._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 13, in, callback, arg);
		}
		return states_emitted;
	}
	case 14: {
		// medium2_0(2-->0)	[skip] -1
		if ((in->medium2_0._pc.var == 2)) {
			states_emitted += spins_get_actions (model, 14, in, callback, arg);
		}
		return states_emitted;
	}
	case 15: {
		// recver_0(21-->0)	[recver_0.lack = recver_0.recseq] -1
		if ((in->recver_0._pc.var == 21)) {
			states_emitted += spins_get_actions (model, 15, in, callback, arg);
		}
		return states_emitted;
	}
	case 16: {
		// recver_0(0-->1) X medium2_0(0-->1)	[r2m!nak,((recver_0.recseq + 1) % 4),recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		if ((in->recver_0._pc.var == 0) &&
			(in->medium2_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 16, in, callback, arg);
		}
		return states_emitted;
	}
	case 17: {
		// recver_0(1-->0)	[recver_0.seq = 0] -1
		if ((in->recver_0._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 17, in, callback, arg);
		}
		return states_emitted;
	}
	case 18: {
		// recver_0(2-->3)	[(recver_0.pty == data)] -1
		if ((in->recver_0._pc.var == 2) &&
			(in->recver_0.pty.var == 1)) {
			states_emitted += spins_get_actions (model, 18, in, callback, arg);
		}
		return states_emitted;
	}
	case 19: {
		// recver_0(3-->0)	[((Math.abs(((seq + 4) - lack) % 4) > (4 / 2)) || (seq == lack))] -1
		if ((in->recver_0._pc.var == 3) &&
			((abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) > (4 / 2)) || (in->recver_0.seq.var == in->recver_0.lack.var))) {
			states_emitted += spins_get_actions (model, 19, in, callback, arg);
		}
		return states_emitted;
	}
	case 20: {
		// recver_0(3-->4)	[tau] -1
		if ((in->recver_0._pc.var == 3) &&
			((abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) <= (4 / 2)) && (in->recver_0.seq.var != in->recver_0.lack.var))) {
			states_emitted += spins_get_actions (model, 20, in, callback, arg);
		}
		return states_emitted;
	}
	case 21: {
		// recver_0(4-->17)	[true] -1
		if ((in->recver_0._pc.var == 4)) {
			states_emitted += spins_get_actions (model, 21, in, callback, arg);
		}
		return states_emitted;
	}
	case 22: {
		// recver_0(17-->18)	[(((seq != recseq) && (!(recbuf[seq] != 0 ))) && (Math.abs(((seq + 4) - recseq) % 4) <= (4 / 2)))] -1
		if ((in->recver_0._pc.var == 17) &&
			(((in->recver_0.seq.var != in->recver_0.recseq.var) && (!in->recver_0.recbuf[in->recver_0.seq.var].var)) && (abs(((in->recver_0.seq.var + 4) - in->recver_0.recseq.var) % 4) <= (4 / 2)))) {
			states_emitted += spins_get_actions (model, 22, in, callback, arg);
		}
		return states_emitted;
	}
	case 23: {
		// recver_0(18-->19) X medium2_0(0-->1)	[r2m!nak,recver_0.seq,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		if ((in->recver_0._pc.var == 18) &&
			(in->medium2_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 23, in, callback, arg);
		}
		return states_emitted;
	}
	case 24: {
		// recver_0(19-->0)	[recver_0.lack = recver_0.recseq] -1
		if ((in->recver_0._pc.var == 19)) {
			states_emitted += spins_get_actions (model, 24, in, callback, arg);
		}
		return states_emitted;
	}
	case 25: {
		// recver_0(17-->0)	[tau] -1
		if ((in->recver_0._pc.var == 17) &&
			(((in->recver_0.seq.var == in->recver_0.recseq.var) || in->recver_0.recbuf[in->recver_0.seq.var].var) || (abs(((in->recver_0.seq.var + 4) - in->recver_0.recseq.var) % 4) > (4 / 2)))) {
			states_emitted += spins_get_actions (model, 25, in, callback, arg);
		}
		return states_emitted;
	}
	case 26: {
		// recver_0(4-->5)	[recver_0.nakd[recver_0.seq] = false] -1
		if ((in->recver_0._pc.var == 4)) {
			states_emitted += spins_get_actions (model, 26, in, callback, arg);
		}
		return states_emitted;
	}
	case 27: {
		// recver_0(5-->11)	[(recver_0.seq != ((recver_0.recseq + 1) % 4))] -1
		if ((in->recver_0._pc.var == 5) &&
			(in->recver_0.seq.var != abs((in->recver_0.recseq.var + 1) % 4))) {
			states_emitted += spins_get_actions (model, 27, in, callback, arg);
		}
		return states_emitted;
	}
	case 28: {
		// recver_0(11-->12)	[((seq != recseq) && (!(recbuf[seq] != 0 )))] -1
		if ((in->recver_0._pc.var == 11) &&
			((in->recver_0.seq.var != in->recver_0.recseq.var) && (!in->recver_0.recbuf[in->recver_0.seq.var].var))) {
			states_emitted += spins_get_actions (model, 28, in, callback, arg);
		}
		return states_emitted;
	}
	case 29: {
		// recver_0(12-->13)	[(recver_0.tmp != recver_0.seq)] -1
		if ((in->recver_0._pc.var == 12) &&
			(in->recver_0.tmp.var != in->recver_0.seq.var)) {
			states_emitted += spins_get_actions (model, 29, in, callback, arg);
		}
		return states_emitted;
	}
	case 30: {
		// recver_0(13-->15)	[(!((nakd[tmp] != 0 ) || (recbuf[tmp] != 0 )))] -1
		if ((in->recver_0._pc.var == 13) &&
			(!(in->recver_0.nakd[in->recver_0.tmp.var].var || in->recver_0.recbuf[in->recver_0.tmp.var].var))) {
			states_emitted += spins_get_actions (model, 30, in, callback, arg);
		}
		return states_emitted;
	}
	case 31: {
		// recver_0(15-->16) X medium2_0(0-->1)	[r2m!nak,recver_0.tmp,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		if ((in->recver_0._pc.var == 15) &&
			(in->medium2_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 31, in, callback, arg);
		}
		return states_emitted;
	}
	case 32: {
		// recver_0(16-->14)	[recver_0.lack = recver_0.recseq] -1
		if ((in->recver_0._pc.var == 16)) {
			states_emitted += spins_get_actions (model, 32, in, callback, arg);
		}
		return states_emitted;
	}
	case 33: {
		// recver_0(14-->12)	[recver_0.tmp = ((recver_0.tmp + 1) % 4)] -1
		if ((in->recver_0._pc.var == 14)) {
			states_emitted += spins_get_actions (model, 33, in, callback, arg);
		}
		return states_emitted;
	}
	case 34: {
		// recver_0(13-->14)	[tau] -1
		if ((in->recver_0._pc.var == 13) &&
			(in->recver_0.nakd[in->recver_0.tmp.var].var || in->recver_0.recbuf[in->recver_0.tmp.var].var)) {
			states_emitted += spins_get_actions (model, 34, in, callback, arg);
		}
		return states_emitted;
	}
	case 35: {
		// recver_0(12-->0)	[(recver_0.tmp == recver_0.seq)] -1
		if ((in->recver_0._pc.var == 12) &&
			(in->recver_0.tmp.var == in->recver_0.seq.var)) {
			states_emitted += spins_get_actions (model, 35, in, callback, arg);
		}
		return states_emitted;
	}
	case 36: {
		// recver_0(11-->0)	[tau] -1
		if ((in->recver_0._pc.var == 11) &&
			((in->recver_0.seq.var == in->recver_0.recseq.var) || in->recver_0.recbuf[in->recver_0.seq.var].var)) {
			states_emitted += spins_get_actions (model, 36, in, callback, arg);
		}
		return states_emitted;
	}
	case 37: {
		// recver_0(5-->6)	[tau] -1
		if ((in->recver_0._pc.var == 5) &&
			(in->recver_0.seq.var == abs((in->recver_0.recseq.var + 1) % 4))) {
			states_emitted += spins_get_actions (model, 37, in, callback, arg);
		}
		return states_emitted;
	}
	case 38: {
		// recver_0(6-->7)	[recver_0.recseq = recver_0.seq] -1
		if ((in->recver_0._pc.var == 6)) {
			states_emitted += spins_get_actions (model, 38, in, callback, arg);
		}
		return states_emitted;
	}
	case 39: {
		// recver_0(7-->7)	[recver_0.recbuf[recver_0.tmp]] -1
		if ((in->recver_0._pc.var == 7) &&
			in->recver_0.recbuf[in->recver_0.tmp.var].var) {
			states_emitted += spins_get_actions (model, 39, in, callback, arg);
		}
		return states_emitted;
	}
	case 40: {
		// recver_0(7-->8)	[tau] -1
		if ((in->recver_0._pc.var == 7) &&
			(!in->recver_0.recbuf[in->recver_0.tmp.var].var)) {
			states_emitted += spins_get_actions (model, 40, in, callback, arg);
		}
		return states_emitted;
	}
	case 41: {
		// recver_0(8-->9)	[(!(Math.abs(((seq + 4) - lack) % 4) < (4 / 4)))] -1
		if ((in->recver_0._pc.var == 8) &&
			(!(abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) < (4 / 4)))) {
			states_emitted += spins_get_actions (model, 41, in, callback, arg);
		}
		return states_emitted;
	}
	case 42: {
		// recver_0(9-->10) X medium2_0(0-->1)	[r2m!ack,recver_0.seq,recver_0.seq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
		if ((in->recver_0._pc.var == 9) &&
			(in->medium2_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 42, in, callback, arg);
		}
		return states_emitted;
	}
	case 43: {
		// recver_0(10-->0)	[recver_0.lack = recver_0.recseq] -1
		if ((in->recver_0._pc.var == 10)) {
			states_emitted += spins_get_actions (model, 43, in, callback, arg);
		}
		return states_emitted;
	}
	case 44: {
		// recver_0(8-->0)	[tau] -1
		if ((in->recver_0._pc.var == 8) &&
			(abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) < (4 / 4))) {
			states_emitted += spins_get_actions (model, 44, in, callback, arg);
		}
		return states_emitted;
	}
	case 45: {
		// medium1_0(1-->2)	[true] -1
		if ((in->medium1_0._pc.var == 1)) {
			states_emitted += spins_get_actions (model, 45, in, callback, arg);
		}
		return states_emitted;
	}
	case 46: {
		// medium1_0(2-->0)	[skip] -1
		if ((in->medium1_0._pc.var == 2)) {
			states_emitted += spins_get_actions (model, 46, in, callback, arg);
		}
		return states_emitted;
	}
	case 47: {
		// sender_0(10-->0)	[sender_0.sendseq = ((sender_0.sendseq + 1) % 4)] -1
		if ((in->sender_0._pc.var == 10)) {
			states_emitted += spins_get_actions (model, 47, in, callback, arg);
		}
		return states_emitted;
	}
	case 48: {
		// sender_0(0-->1) X medium1_0(0-->1)	[s2m!nak,1,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
		if ((in->sender_0._pc.var == 0) &&
			(in->medium1_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 48, in, callback, arg);
		}
		return states_emitted;
	}
	case 49: {
		// sender_0(1-->4)	[((Math.abs(((sendseq + 4) - rack) % 4) <= (4 / 2)) && (sendseq != rack))] -1
		if ((in->sender_0._pc.var == 1) &&
			((abs(((in->sender_0.sendseq.var + 4) - in->sender_0.rack.var) % 4) <= (4 / 2)) && (in->sender_0.sendseq.var != in->sender_0.rack.var))) {
			states_emitted += spins_get_actions (model, 49, in, callback, arg);
		}
		return states_emitted;
	}
	case 50: {
		// sender_0(4-->2)	[skip] -1
		if ((in->sender_0._pc.var == 4)) {
			states_emitted += spins_get_actions (model, 50, in, callback, arg);
		}
		return states_emitted;
	}
	case 51: {
		// sender_0(2-->3)	[(sender_0.sendseq != ((sender_0.rack + 1) % 4))] -1
		if ((in->sender_0._pc.var == 2) &&
			(in->sender_0.sendseq.var != abs((in->sender_0.rack.var + 1) % 4))) {
			states_emitted += spins_get_actions (model, 51, in, callback, arg);
		}
		return states_emitted;
	}
	case 52: {
		// sender_0(3-->0) X medium1_0(0-->1)	[s2m!data,((sender_0.rack + 1) % 4),0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
		if ((in->sender_0._pc.var == 3) &&
			(in->medium1_0._pc.var == 0)) {
			states_emitted += spins_get_actions (model, 52, in, callback, arg);
		}
		return states_emitted;
	}
	case 53: {
		// sender_0(2-->0)	[tau] -1
		if ((in->sender_0._pc.var == 2) &&
			(in->sender_0.sendseq.var == abs((in->sender_0.rack.var + 1) % 4))) {
			states_emitted += spins_get_actions (model, 53, in, callback, arg);
		}
		return states_emitted;
	}
	case 54: {
		// sender_0(1-->2)	[tau] -1
		if ((in->sender_0._pc.var == 1) &&
			((abs(((in->sender_0.sendseq.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2)) || (in->sender_0.sendseq.var == in->sender_0.rack.var))) {
			states_emitted += spins_get_actions (model, 54, in, callback, arg);
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

	// recver_0(19-->0)	[recver_0.lack = recver_0.recseq] -1
	if ((in->recver_0._pc.var == 19)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[29]; memcpy(cpy, cpy_src, sizeof(int[29]));

		out->recver_0._pc.var = 0;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.lack.var = out->recver_0.recseq.var;
		cpy[((int *)&out->recver_0.lack.pad - (int *)out)] = 0;
		out->recver_0.nakd[out->recver_0.seq.var].var = 1;
		cpy[((int *)&out->recver_0.nakd[out->recver_0.seq.var].pad - (int *)out)] = 0;
		transition_info.group = 24;
		spins_simple_atomic_cb(arg,&transition_info,out,3,cpy);
		++states_emitted;
	}
	// recver_0(16-->14)	[recver_0.lack = recver_0.recseq] -1
	if ((in->recver_0._pc.var == 16)) {
		memcpy(out, in, sizeof(sj_struct_state_t));
		int cpy[29]; memcpy(cpy, cpy_src, sizeof(int[29]));

		out->recver_0._pc.var = 14;
		cpy[((int *)&out->recver_0._pc.pad - (int *)out)] = 0;
		out->recver_0.lack.var = out->recver_0.recseq.var;
		cpy[((int *)&out->recver_0.lack.pad - (int *)out)] = 0;
		out->recver_0.nakd[out->recver_0.tmp.var].var = 1;
		cpy[((int *)&out->recver_0.nakd[out->recver_0.tmp.var].pad - (int *)out)] = 0;
		transition_info.group = 32;
		spins_simple_atomic_cb(arg,&transition_info,out,3,cpy);
		++states_emitted;
	}
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

	// sender_0(0-->9)	[((Math.abs(((sendseq + 4) - rack) % 4) <= (4 / 2)) && (sendseq != rack))] -1
	if (__guards[0] &&
		__guards[1] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 0, in, callback, arg);
	}
	// sender_0(9-->10) X medium1_0(0-->1)	[s2m!data,sender_0.sendseq,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
	if (__guards[3] &&
		__guards[4]) {
		states_emitted += spins_get_actions (model, 1, in, callback, arg);
	}
	// medium1_0(1-->0) X recver_0(0-->2)	[m2r!medium1_0.pty,medium1_0.seq,medium1_0.ak X m2r?recver_0.pty,recver_0.seq,recver_0.ak] -1
	if (__guards[5] &&
		__guards[6]) {
		states_emitted += spins_get_actions (model, 2, in, callback, arg);
	}
	// recver_0(2-->20)	[(recver_0.pty == nak)] -1
	if (__guards[7] &&
		__guards[8]) {
		states_emitted += spins_get_actions (model, 3, in, callback, arg);
	}
	// recver_0(20-->21) X medium2_0(0-->1)	[r2m!ack,recver_0.recseq,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
	if (__guards[9] &&
		__guards[10]) {
		states_emitted += spins_get_actions (model, 4, in, callback, arg);
	}
	// medium2_0(1-->0) X sender_0(0-->5)	[m2s!medium2_0.pty,medium2_0.seq,medium2_0.ak X m2s?sender_0.pty,sender_0.seq,sender_0.ak] -1
	if (__guards[11] &&
		__guards[0]) {
		states_emitted += spins_get_actions (model, 5, in, callback, arg);
		transition_labels[1] = 0;
	}
	// sender_0(5-->6)	[(!(((ak == sendseq) || (Math.abs(((ak + 4) - rack) % 4) > (4 / 2))) || (Math.abs(((sendseq + 4) - ak) % 4) > (4 / 2))))] -1
	if (__guards[12] &&
		__guards[13] &&
		__guards[14] &&
		__guards[15]) {
		states_emitted += spins_get_actions (model, 6, in, callback, arg);
	}
	// sender_0(6-->7)	[(sender_0.pty == nak)] -1
	if (__guards[16] &&
		__guards[17]) {
		states_emitted += spins_get_actions (model, 7, in, callback, arg);
	}
	// sender_0(7-->8)	[(!(((seq == sendseq) || (Math.abs(((seq + 4) - rack) % 4) > (4 / 2))) || (Math.abs(((sendseq + 4) - seq) % 4) > (4 / 2))))] -1
	if (__guards[18] &&
		__guards[19] &&
		__guards[20] &&
		__guards[21]) {
		states_emitted += spins_get_actions (model, 8, in, callback, arg);
	}
	// sender_0(8-->0) X medium1_0(0-->1)	[s2m!data,sender_0.seq,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
	if (__guards[22] &&
		__guards[4]) {
		states_emitted += spins_get_actions (model, 9, in, callback, arg);
	}
	// sender_0(7-->0)	[tau] -1
	if (__guards[18] &&
		__guards[23]) {
		states_emitted += spins_get_actions (model, 10, in, callback, arg);
	}
	// sender_0(6-->0)	[tau] -1
	if (__guards[16] &&
		__guards[24]) {
		states_emitted += spins_get_actions (model, 11, in, callback, arg);
	}
	// sender_0(5-->6)	[tau] -1
	if (__guards[12] &&
		__guards[25]) {
		states_emitted += spins_get_actions (model, 12, in, callback, arg);
	}
	// medium2_0(1-->2)	[true] -1
	if (__guards[11]) {
		states_emitted += spins_get_actions (model, 13, in, callback, arg);
	}
	// medium2_0(2-->0)	[skip] -1
	if (__guards[26]) {
		states_emitted += spins_get_actions (model, 14, in, callback, arg);
		transition_labels[1] = 0;
	}
	// recver_0(21-->0)	[recver_0.lack = recver_0.recseq] -1
	if (__guards[27]) {
		states_emitted += spins_get_actions (model, 15, in, callback, arg);
	}
	// recver_0(0-->1) X medium2_0(0-->1)	[r2m!nak,((recver_0.recseq + 1) % 4),recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
	if (__guards[6] &&
		__guards[10]) {
		states_emitted += spins_get_actions (model, 16, in, callback, arg);
	}
	// recver_0(1-->0)	[recver_0.seq = 0] -1
	if (__guards[28]) {
		states_emitted += spins_get_actions (model, 17, in, callback, arg);
		transition_labels[1] = 0;
	}
	// recver_0(2-->3)	[(recver_0.pty == data)] -1
	if (__guards[7] &&
		__guards[29]) {
		states_emitted += spins_get_actions (model, 18, in, callback, arg);
	}
	// recver_0(3-->0)	[((Math.abs(((seq + 4) - lack) % 4) > (4 / 2)) || (seq == lack))] -1
	if (__guards[30] &&
		__guards[31]) {
		states_emitted += spins_get_actions (model, 19, in, callback, arg);
	}
	// recver_0(3-->4)	[tau] -1
	if (__guards[30] &&
		__guards[32] &&
		__guards[33]) {
		states_emitted += spins_get_actions (model, 20, in, callback, arg);
	}
	// recver_0(4-->17)	[true] -1
	if (__guards[34]) {
		states_emitted += spins_get_actions (model, 21, in, callback, arg);
	}
	// recver_0(17-->18)	[(((seq != recseq) && (!(recbuf[seq] != 0 ))) && (Math.abs(((seq + 4) - recseq) % 4) <= (4 / 2)))] -1
	if (__guards[35] &&
		__guards[36] &&
		__guards[37] &&
		__guards[38]) {
		states_emitted += spins_get_actions (model, 22, in, callback, arg);
		transition_labels[1] = 0;
	}
	// recver_0(18-->19) X medium2_0(0-->1)	[r2m!nak,recver_0.seq,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
	if (__guards[39] &&
		__guards[10]) {
		states_emitted += spins_get_actions (model, 23, in, callback, arg);
	}
	// recver_0(19-->0)	[recver_0.lack = recver_0.recseq] -1
	if (__guards[40]) {
		states_emitted += spins_get_actions (model, 24, in, callback, arg);
	}
	// recver_0(17-->0)	[tau] -1
	if (__guards[35] &&
		__guards[41]) {
		states_emitted += spins_get_actions (model, 25, in, callback, arg);
		transition_labels[1] = 0;
	}
	// recver_0(4-->5)	[recver_0.nakd[recver_0.seq] = false] -1
	if (__guards[34]) {
		states_emitted += spins_get_actions (model, 26, in, callback, arg);
	}
	// recver_0(5-->11)	[(recver_0.seq != ((recver_0.recseq + 1) % 4))] -1
	if (__guards[42] &&
		__guards[43]) {
		states_emitted += spins_get_actions (model, 27, in, callback, arg);
	}
	// recver_0(11-->12)	[((seq != recseq) && (!(recbuf[seq] != 0 )))] -1
	if (__guards[44] &&
		__guards[36] &&
		__guards[37]) {
		states_emitted += spins_get_actions (model, 28, in, callback, arg);
	}
	// recver_0(12-->13)	[(recver_0.tmp != recver_0.seq)] -1
	if (__guards[45] &&
		__guards[46]) {
		states_emitted += spins_get_actions (model, 29, in, callback, arg);
	}
	// recver_0(13-->15)	[(!((nakd[tmp] != 0 ) || (recbuf[tmp] != 0 )))] -1
	if (__guards[47] &&
		__guards[48] &&
		__guards[49]) {
		states_emitted += spins_get_actions (model, 30, in, callback, arg);
	}
	// recver_0(15-->16) X medium2_0(0-->1)	[r2m!nak,recver_0.tmp,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
	if (__guards[50] &&
		__guards[10]) {
		states_emitted += spins_get_actions (model, 31, in, callback, arg);
	}
	// recver_0(16-->14)	[recver_0.lack = recver_0.recseq] -1
	if (__guards[51]) {
		states_emitted += spins_get_actions (model, 32, in, callback, arg);
	}
	// recver_0(14-->12)	[recver_0.tmp = ((recver_0.tmp + 1) % 4)] -1
	if (__guards[52]) {
		states_emitted += spins_get_actions (model, 33, in, callback, arg);
	}
	// recver_0(13-->14)	[tau] -1
	if (__guards[47] &&
		__guards[53]) {
		states_emitted += spins_get_actions (model, 34, in, callback, arg);
	}
	// recver_0(12-->0)	[(recver_0.tmp == recver_0.seq)] -1
	if (__guards[45] &&
		__guards[54]) {
		states_emitted += spins_get_actions (model, 35, in, callback, arg);
	}
	// recver_0(11-->0)	[tau] -1
	if (__guards[44] &&
		__guards[55]) {
		states_emitted += spins_get_actions (model, 36, in, callback, arg);
	}
	// recver_0(5-->6)	[tau] -1
	if (__guards[42] &&
		__guards[56]) {
		states_emitted += spins_get_actions (model, 37, in, callback, arg);
	}
	// recver_0(6-->7)	[recver_0.recseq = recver_0.seq] -1
	if (__guards[57]) {
		states_emitted += spins_get_actions (model, 38, in, callback, arg);
		transition_labels[1] = 0;
	}
	// recver_0(7-->7)	[recver_0.recbuf[recver_0.tmp]] -1
	if (__guards[58] &&
		__guards[59]) {
		states_emitted += spins_get_actions (model, 39, in, callback, arg);
	}
	// recver_0(7-->8)	[tau] -1
	if (__guards[58] &&
		__guards[49]) {
		states_emitted += spins_get_actions (model, 40, in, callback, arg);
	}
	// recver_0(8-->9)	[(!(Math.abs(((seq + 4) - lack) % 4) < (4 / 4)))] -1
	if (__guards[60] &&
		__guards[61]) {
		states_emitted += spins_get_actions (model, 41, in, callback, arg);
	}
	// recver_0(9-->10) X medium2_0(0-->1)	[r2m!ack,recver_0.seq,recver_0.seq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1
	if (__guards[62] &&
		__guards[10]) {
		states_emitted += spins_get_actions (model, 42, in, callback, arg);
	}
	// recver_0(10-->0)	[recver_0.lack = recver_0.recseq] -1
	if (__guards[63]) {
		states_emitted += spins_get_actions (model, 43, in, callback, arg);
	}
	// recver_0(8-->0)	[tau] -1
	if (__guards[60] &&
		__guards[64]) {
		states_emitted += spins_get_actions (model, 44, in, callback, arg);
	}
	// medium1_0(1-->2)	[true] -1
	if (__guards[5]) {
		states_emitted += spins_get_actions (model, 45, in, callback, arg);
	}
	// medium1_0(2-->0)	[skip] -1
	if (__guards[65]) {
		states_emitted += spins_get_actions (model, 46, in, callback, arg);
		transition_labels[1] = 0;
	}
	// sender_0(10-->0)	[sender_0.sendseq = ((sender_0.sendseq + 1) % 4)] -1
	if (__guards[66]) {
		states_emitted += spins_get_actions (model, 47, in, callback, arg);
	}
	// sender_0(0-->1) X medium1_0(0-->1)	[s2m!nak,1,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
	if (__guards[0] &&
		__guards[4]) {
		states_emitted += spins_get_actions (model, 48, in, callback, arg);
	}
	// sender_0(1-->4)	[((Math.abs(((sendseq + 4) - rack) % 4) <= (4 / 2)) && (sendseq != rack))] -1
	if (__guards[67] &&
		__guards[1] &&
		__guards[2]) {
		states_emitted += spins_get_actions (model, 49, in, callback, arg);
	}
	// sender_0(4-->2)	[skip] -1
	if (__guards[68]) {
		states_emitted += spins_get_actions (model, 50, in, callback, arg);
		transition_labels[1] = 0;
	}
	// sender_0(2-->3)	[(sender_0.sendseq != ((sender_0.rack + 1) % 4))] -1
	if (__guards[69] &&
		__guards[70]) {
		states_emitted += spins_get_actions (model, 51, in, callback, arg);
	}
	// sender_0(3-->0) X medium1_0(0-->1)	[s2m!data,((sender_0.rack + 1) % 4),0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1
	if (__guards[71] &&
		__guards[4]) {
		states_emitted += spins_get_actions (model, 52, in, callback, arg);
	}
	// sender_0(2-->0)	[tau] -1
	if (__guards[69] &&
		__guards[72]) {
		states_emitted += spins_get_actions (model, 53, in, callback, arg);
	}
	// sender_0(1-->2)	[tau] -1
	if (__guards[67] &&
		__guards[73]) {
		states_emitted += spins_get_actions (model, 54, in, callback, arg);
	}
	return states_emitted;
}

extern int spins_get_transition_groups() {
	return 55;
}

int *act_dm[2][55] = {
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
	},
	{
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 1 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 2 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 2 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 2 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 2 }),
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
		((int[]){ 1, 2 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 2 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 2 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
		((int[]){ 1, 0 }),
	},
};


extern const int spins_transition_has_edge(int t, int e, int v)
{
  assert(t < 55, "spins_transition_has_edge: invalid group index %d\n", t);
  assert(e < 2, "spins_transition_has_edge: invalid edge label index %d\n", e);
	int *ar = act_dm[e][t];
	int i;
	for (i = 1; i <= ar[0]; i++) {
	  if (ar[i] == v) return 1;
	}
	return 0;
}

int actions_read_dependency[][29] = {
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0
	{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 17
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 53
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int transition_dependency[][3][29] = {
	// { ... read ...}, { ... may write ...}, { ... must write ... }
	{{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 0
	{{1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 1
	{{1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0}}, // 2
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 3
	{{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 4
	{{0,0,0,0,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 5
	{{0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 6
	{{0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 7
	{{0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 8
	{{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 9
	{{0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 10
	{{0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 11
	{{0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 12
	{{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 13
	{{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 14
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0}}, // 15
	{{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 16
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,1,1,1,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0}}, // 17
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 18
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 19
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 20
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 21
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 22
	{{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 23
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,1,1,1,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0}}, // 24
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 25
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 26
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 27
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1}}, // 28
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 29
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 30
	{{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 31
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,1,1,1,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0}}, // 32
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1}}, // 33
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 34
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 35
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 36
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 37
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1}}, // 38
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1}}, // 39
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 40
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 41
	{{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 42
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0}}, // 43
	{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 44
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 45
	{{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 46
	{{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 47
	{{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 48
	{{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 49
	{{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 50
	{{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 51
	{{1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 52
	{{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}, // 53
	{{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}};

extern const int* spins_get_transition_read_dependencies(int t)
{
	if (t>=0 && t < 55) return transition_dependency[t][0];
	return NULL;
}

extern const int* spins_get_transition_may_write_dependencies(int t)
{
  if (t>=0 && t < 55) return transition_dependency[t][1];
  return NULL;
}

// for backwards compatibility:
extern const int* spins_get_transition_write_dependencies(int t)
{
  if (t>=0 && t < 55) return transition_dependency[t][1];
  return NULL;
}

extern const int* spins_get_transition_must_write_dependencies(int t)
{
  if (t>=0 && t < 55) return transition_dependency[t][2];
  return NULL;
}

extern const int* spins_get_actions_read_dependencies(int t)
{
  if (t>=0 && t < 55) return actions_read_dependency[t];
  return NULL;
}


// Label(Guard)-Dependency Matrix:
int gm_dm[][29] = {
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0
	{0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 4
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 8
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,1,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,1,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1}, // 46
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,1}, // 53
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1}, // 54
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,1,0,0}, // 55
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 56
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 57
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 60
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 62
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 63
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0}, // 64
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 65
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 66
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 67
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 68
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 69
	{0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 70
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 71
	{0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 72
	{0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 73
	{1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 74
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 75
	{0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 76
	{1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 77
	{1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 78
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 79
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 80
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 81
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 82
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

// Transition-Guard Matrix:
int* gm_trans[55] = {
((int[]){ 3, 0, 1, 2 }),	// trans     0
((int[]){ 2, 3, 4 }),	// trans     1
((int[]){ 2, 5, 6 }),	// trans     2
((int[]){ 2, 7, 8 }),	// trans     3
((int[]){ 2, 9, 10 }),	// trans     4
((int[]){ 2, 11, 0 }),	// trans     5
((int[]){ 4, 12, 13, 14, 15 }),	// trans     6
((int[]){ 2, 16, 17 }),	// trans     7
((int[]){ 4, 18, 19, 20, 21 }),	// trans     8
((int[]){ 2, 22, 4 }),	// trans     9
((int[]){ 2, 18, 23 }),	// trans    10
((int[]){ 2, 16, 24 }),	// trans    11
((int[]){ 2, 12, 25 }),	// trans    12
((int[]){ 1, 11 }),	// trans    13
((int[]){ 1, 26 }),	// trans    14
((int[]){ 1, 27 }),	// trans    15
((int[]){ 2, 6, 10 }),	// trans    16
((int[]){ 1, 28 }),	// trans    17
((int[]){ 2, 7, 29 }),	// trans    18
((int[]){ 2, 30, 31 }),	// trans    19
((int[]){ 3, 30, 32, 33 }),	// trans    20
((int[]){ 1, 34 }),	// trans    21
((int[]){ 4, 35, 36, 37, 38 }),	// trans    22
((int[]){ 2, 39, 10 }),	// trans    23
((int[]){ 1, 40 }),	// trans    24
((int[]){ 2, 35, 41 }),	// trans    25
((int[]){ 1, 34 }),	// trans    26
((int[]){ 2, 42, 43 }),	// trans    27
((int[]){ 3, 44, 36, 37 }),	// trans    28
((int[]){ 2, 45, 46 }),	// trans    29
((int[]){ 3, 47, 48, 49 }),	// trans    30
((int[]){ 2, 50, 10 }),	// trans    31
((int[]){ 1, 51 }),	// trans    32
((int[]){ 1, 52 }),	// trans    33
((int[]){ 2, 47, 53 }),	// trans    34
((int[]){ 2, 45, 54 }),	// trans    35
((int[]){ 2, 44, 55 }),	// trans    36
((int[]){ 2, 42, 56 }),	// trans    37
((int[]){ 1, 57 }),	// trans    38
((int[]){ 2, 58, 59 }),	// trans    39
((int[]){ 2, 58, 49 }),	// trans    40
((int[]){ 2, 60, 61 }),	// trans    41
((int[]){ 2, 62, 10 }),	// trans    42
((int[]){ 1, 63 }),	// trans    43
((int[]){ 2, 60, 64 }),	// trans    44
((int[]){ 1, 5 }),	// trans    45
((int[]){ 1, 65 }),	// trans    46
((int[]){ 1, 66 }),	// trans    47
((int[]){ 2, 0, 4 }),	// trans    48
((int[]){ 3, 67, 1, 2 }),	// trans    49
((int[]){ 1, 68 }),	// trans    50
((int[]){ 2, 69, 70 }),	// trans    51
((int[]){ 2, 71, 4 }),	// trans    52
((int[]){ 2, 69, 72 }),	// trans    53
((int[]){ 2, 67, 73 })	// trans    54
};


// Maybe Co-Enabled Matrix:
int co_dm[][84] = {
	{1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,1}, // 0
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 1
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 2
	{0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,1}, // 3
	{1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1}, // 4
	{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1}, // 5
	{1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 6
	{1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 7
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 8
	{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 9
	{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1}, // 10
	{1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1}, // 11
	{0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,1}, // 12
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 13
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 14
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 15
	{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,1}, // 16
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 17
	{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,1}, // 18
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 19
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 20
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 21
	{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,1}, // 22
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 23
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 24
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 25
	{1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1}, // 26
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 27
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,1,0}, // 28
	{1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 29
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 30
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 31
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 32
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 33
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 34
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,1,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1}, // 35
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 36
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 37
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 38
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,1,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 39
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,1,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 40
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 41
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 42
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 43
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,1,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 44
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,1,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 45
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 46
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 47
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 48
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 49
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 50
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,1,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 51
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 52
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 53
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 54
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 55
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 56
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,1,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,0}, // 57
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,1,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 58
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 59
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 60
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 61
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 62
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0}, // 63
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 64
	{1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1}, // 65
	{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,1}, // 66
	{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,1}, // 67
	{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,0,1,1,1,1,1,0,0,1,1,1,1,1}, // 68
	{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1}, // 69
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 70
	{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,0,1,1,0,1,1,1}, // 71
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 72
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 73
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1}, // 74
	{1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1}, // 75
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 76
	{0,1,1,0,0,0,0,0,1,0,0,0,0,1,1,1,0,1,0,1,1,1,0,1,1,1,0,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,0,0,0,0,0,1,0,1,1,0,0,1,1,1,0,0,0,0,0}, // 77
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,0,1,1,1,0,0,0,0,0}, // 78
	{1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1}, // 79
	{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,0,1,1,1,1,1,0,0,1,1,1,1,1}, // 80
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,1,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,0}, // 81
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,1,0}, // 82
	{1,1,1,1,1,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,1,1,1,1,0,0,1,0,1,0,0,1,0,1,1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1}};


// Do Not Accord Matrix:
int dna_dm[][55] = {
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 0
	{1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 1
	{0,1,1,1,1,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,1,0,0}, // 2
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 4
	{1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1}, // 5
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 6
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 7
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 8
	{1,1,1,0,0,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1,0,1}, // 9
	{1,1,0,0,0,1,1,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1}, // 10
	{1,1,0,0,0,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,1}, // 11
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 12
	{0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,0,1,1,0,0,0,1,1,1,1,1,0,0,1,0,0,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,0,1,0,1,1,1,1,1,0,0,1,1,1,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,1,1,1,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,1,1,0,0,1,1,1,1,1,0,0,1,0,0,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,1,1,1,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,1,0,1,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,1,0,0,0,1,1,1,1,1,0,0,1,0,0,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0}, // 45
	{0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0}, // 46
	{1,1,0,0,0,1,1,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0,1,1}, // 47
	{1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 48
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 49
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0}, // 50
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 51
	{1,1,1,0,0,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1,0,1}, // 52
	{1,1,0,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1}, // 53
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1}};


// Commute Matrix:
int commutes_dm[][55] = {
	{1,0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0}, // 0
	{0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 1
	{1,0,0,0,0,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,0,1,1}, // 2
	{1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 3
	{1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 4
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0}, // 5
	{0,0,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0}, // 6
	{0,0,1,1,1,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0}, // 7
	{0,0,1,1,1,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,1,1,0,0,0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,1,0}, // 9
	{0,0,1,1,1,0,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0}, // 10
	{0,0,1,1,1,0,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0}, // 11
	{0,0,1,1,1,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0}, // 12
	{1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 13
	{1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 14
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1}, // 15
	{1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 16
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1}, // 17
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 18
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 19
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 20
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 21
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 22
	{1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 23
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1}, // 24
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 25
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 26
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 27
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 28
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 29
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 30
	{1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 31
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 32
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 33
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 34
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 35
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 36
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 37
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 38
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 39
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 40
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 41
	{1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}, // 42
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1}, // 43
	{1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 44
	{1,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,0,1,1}, // 45
	{1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,0,1,1}, // 46
	{0,0,1,1,1,0,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,0}, // 47
	{0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0}, // 48
	{0,0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0}, // 49
	{0,0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,1}, // 50
	{0,0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0}, // 51
	{0,0,0,1,1,0,0,0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,1,0}, // 52
	{0,0,1,1,1,0,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0}, // 53
	{0,0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,1}};


// Necessary Enabling Matrix:
int nes_dm[][55] = {
	{0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,0}, // 0
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 1
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 2
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, // 4
	{0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0}, // 5
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 53
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 55
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 56
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 57
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 60
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 62
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 63
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 64
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 65
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 66
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, // 67
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, // 68
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1}, // 69
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 70
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 71
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 72
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 73
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 74
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 75
	{1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, // 76
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 77
	{0,1,1,0,1,1,0,0,0,1,0,0,0,0,1,0,1,1,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0}, // 78
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 79
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, // 80
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 81
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 82
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};


// Necessary Disabling Matrix:
int nds_dm[][55] = {
	{1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, // 0
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 1
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 2
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0}, // 4
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 5
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 53
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 55
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 56
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 57
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0}, // 60
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 62
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 63
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, // 64
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, // 65
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 66
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1}, // 67
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 68
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0}, // 69
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 70
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0}, // 71
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 72
	{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, // 73
	{0,1,1,0,1,1,0,0,0,1,0,0,0,0,1,0,1,1,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0}, // 74
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 75
	{0,0,0,0,1,1,0,0,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0}, // 76
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 77
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, // 78
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, // 79
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, // 80
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 81
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 82
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};


static const char *matrices[] = {
	"dm_mce_invert1",
	"dm_must_disable",
	"dm_must_enable",
	""
};

static const int matrix_dimensions[][2] = {
	{84, 84},
	{84, 55},
	{84, 55},
	0
};

int dm_mce_invert1[][84] = {
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 0
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 1
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 2
	{1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 3
	{1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 4
	{1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 5
	{1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 6
	{1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 7
	{1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 8
	{1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 9
	{1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 10
	{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 11
	{1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 12
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 13
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 14
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 15
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 16
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 17
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 18
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 19
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 20
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 21
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 22
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 23
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 24
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 25
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1}, // 26
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 27
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1}, // 28
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 29
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 30
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 31
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 32
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 33
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 34
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}, // 35
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 36
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 37
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 38
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 39
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 40
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 41
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 42
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 43
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 44
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 45
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 46
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 47
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 48
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 49
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 50
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 51
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 52
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 53
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 54
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 55
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 56
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}, // 57
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 58
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 59
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 60
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 61
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 62
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 63
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 64
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1}, // 65
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 66
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 67
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 68
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 69
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 70
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1}, // 71
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 72
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, // 73
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0}, // 74
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1}, // 75
	{1,1,1,0,1,1,1,1,1,1,0,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,1}, // 76
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1}, // 77
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1}, // 78
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1}, // 79
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}, // 80
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}, // 81
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1}, // 82
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}};

int dm_must_disable[][55] = {
	{1,1,0,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,1}, // 0
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{0,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 3
	{0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0}, // 4
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0}, // 5
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 12
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{1,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{1,1,0,0,0,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{1,1,0,0,0,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 51
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 53
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 55
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 56
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 57
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 59
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 60
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 61
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 62
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0}, // 63
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 64
	{0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0}, // 65
	{1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}, // 66
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1}, // 67
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1}, // 68
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,0}, // 69
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 70
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,1,1}, // 71
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 72
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 73
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 74
	{0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 75
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 76
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 77
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 78
	{0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0}, // 79
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,1}, // 80
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 81
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}, // 82
	{0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0}};

int dm_must_enable[][55] = {
	{0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,0}, // 0
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 1
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 2
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 3
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, // 4
	{0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0}, // 5
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0}, // 6
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 7
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 8
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 9
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 10
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 11
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 12
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 13
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 14
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 15
	{0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 16
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 17
	{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 18
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 19
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 20
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 21
	{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 22
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 23
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 24
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 25
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 26
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 27
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 28
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 29
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 30
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 31
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 32
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 33
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 34
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 35
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 36
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 37
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 38
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 39
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 40
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 41
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 42
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 43
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 44
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 45
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 46
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 47
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 48
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 49
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 50
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 51
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 52
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 53
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 54
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 55
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 56
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 57
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 58
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 59
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 60
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 61
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 62
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0}, // 63
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 64
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 65
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 66
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0}, // 67
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, // 68
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1}, // 69
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 70
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0}, // 71
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 72
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 73
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 74
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 75
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 76
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 77
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 78
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, // 79
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0}, // 80
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 81
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 82
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

const int* spins_get_matrix(int m, int x) {
	assert(m < 3, "spins_get_matrix: invalid matrix index %d", m);
	switch(m) {
	case 0: {
		assert(x < 84, "spins_get_matrix: invalid row index %d", x);
		return dm_mce_invert1[x];
	}
	case 1: {
		assert(x < 84, "spins_get_matrix: invalid row index %d", x);
		return dm_must_disable[x];
	}
	case 2: {
		assert(x < 84, "spins_get_matrix: invalid row index %d", x);
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
	return 74;
}

int spins_get_label_count() {
	return 84;
}

const int* spins_get_labels(int t) {
	assert(t < 55, "spins_get_labels: invalid transition index %d", t);
	return gm_trans[t];
}

const int*** spins_get_all_labels() {
	return (const int***)&gm_trans;
}

int spins_get_label(void* model, int g, sj_struct_state_t* in) {
	(void)model;
	assert(g < 84, "spins_get_label: invalid state label index %d", g);
	switch(g) {
		case 0: return (in->sender_0._pc.var == 0) != 0;
		case 1: return (0 || 4 == 0 || 2 == 0) ? 2 :
						(abs(((in->sender_0.sendseq.var + 4) - in->sender_0.rack.var) % 4) <= (4 / 2)) != 0;
		case 2: return (in->sender_0.sendseq.var != in->sender_0.rack.var) != 0;
		case 3: return (in->sender_0._pc.var == 9) != 0;
		case 4: return (in->medium1_0._pc.var == 0) != 0;
		case 5: return (in->medium1_0._pc.var == 1) != 0;
		case 6: return (in->recver_0._pc.var == 0) != 0;
		case 7: return (in->recver_0._pc.var == 2) != 0;
		case 8: return (in->recver_0.pty.var == 2) != 0;
		case 9: return (in->recver_0._pc.var == 20) != 0;
		case 10: return (in->medium2_0._pc.var == 0) != 0;
		case 11: return (in->medium2_0._pc.var == 1) != 0;
		case 12: return (in->sender_0._pc.var == 5) != 0;
		case 13: return (in->sender_0.ak.var != in->sender_0.sendseq.var) != 0;
		case 14: return (0 || 4 == 0 || 2 == 0) ? 2 :
						(abs(((in->sender_0.ak.var + 4) - in->sender_0.rack.var) % 4) <= (4 / 2)) != 0;
		case 15: return (0 || 4 == 0 || 2 == 0) ? 2 :
						(abs(((in->sender_0.sendseq.var + 4) - in->sender_0.ak.var) % 4) <= (4 / 2)) != 0;
		case 16: return (in->sender_0._pc.var == 6) != 0;
		case 17: return (in->sender_0.pty.var == 2) != 0;
		case 18: return (in->sender_0._pc.var == 7) != 0;
		case 19: return (in->sender_0.seq.var != in->sender_0.sendseq.var) != 0;
		case 20: return (0 || 4 == 0 || 2 == 0) ? 2 :
						(abs(((in->sender_0.seq.var + 4) - in->sender_0.rack.var) % 4) <= (4 / 2)) != 0;
		case 21: return (0 || 4 == 0 || 2 == 0) ? 2 :
						(abs(((in->sender_0.sendseq.var + 4) - in->sender_0.seq.var) % 4) <= (4 / 2)) != 0;
		case 22: return (in->sender_0._pc.var == 8) != 0;
		case 23: return (0 || 4 == 0 || 2 == 0 || 4 == 0 || 2 == 0) ? 2 :
						(((in->sender_0.seq.var == in->sender_0.sendseq.var) || (abs(((in->sender_0.seq.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2))) || (abs(((in->sender_0.sendseq.var + 4) - in->sender_0.seq.var) % 4) > (4 / 2))) != 0;
		case 24: return (in->sender_0.pty.var != 2) != 0;
		case 25: return (0 || 4 == 0 || 2 == 0 || 4 == 0 || 2 == 0) ? 2 :
						(((in->sender_0.ak.var == in->sender_0.sendseq.var) || (abs(((in->sender_0.ak.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2))) || (abs(((in->sender_0.sendseq.var + 4) - in->sender_0.ak.var) % 4) > (4 / 2))) != 0;
		case 26: return (in->medium2_0._pc.var == 2) != 0;
		case 27: return (in->recver_0._pc.var == 21) != 0;
		case 28: return (in->recver_0._pc.var == 1) != 0;
		case 29: return (in->recver_0.pty.var == 1) != 0;
		case 30: return (in->recver_0._pc.var == 3) != 0;
		case 31: return (0 || 4 == 0 || 2 == 0) ? 2 :
						((abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) > (4 / 2)) || (in->recver_0.seq.var == in->recver_0.lack.var)) != 0;
		case 32: return (0 || 4 == 0 || 2 == 0) ? 2 :
						(abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) <= (4 / 2)) != 0;
		case 33: return (in->recver_0.seq.var != in->recver_0.lack.var) != 0;
		case 34: return (in->recver_0._pc.var == 4) != 0;
		case 35: return (in->recver_0._pc.var == 17) != 0;
		case 36: return (in->recver_0.seq.var != in->recver_0.recseq.var) != 0;
		case 37: return (0 || in->recver_0.seq.var < 0 || in->recver_0.seq.var >= 4) ? 2 :
						(!in->recver_0.recbuf[in->recver_0.seq.var].var) != 0;
		case 38: return (0 || 4 == 0 || 2 == 0) ? 2 :
						(abs(((in->recver_0.seq.var + 4) - in->recver_0.recseq.var) % 4) <= (4 / 2)) != 0;
		case 39: return (in->recver_0._pc.var == 18) != 0;
		case 40: return (in->recver_0._pc.var == 19) != 0;
		case 41: return (0 || in->recver_0.seq.var < 0 || in->recver_0.seq.var >= 4 || 4 == 0 || 2 == 0) ? 2 :
						(((in->recver_0.seq.var == in->recver_0.recseq.var) || in->recver_0.recbuf[in->recver_0.seq.var].var) || (abs(((in->recver_0.seq.var + 4) - in->recver_0.recseq.var) % 4) > (4 / 2))) != 0;
		case 42: return (in->recver_0._pc.var == 5) != 0;
		case 43: return (0 || 4 == 0) ? 2 :
						(in->recver_0.seq.var != abs((in->recver_0.recseq.var + 1) % 4)) != 0;
		case 44: return (in->recver_0._pc.var == 11) != 0;
		case 45: return (in->recver_0._pc.var == 12) != 0;
		case 46: return (in->recver_0.tmp.var != in->recver_0.seq.var) != 0;
		case 47: return (in->recver_0._pc.var == 13) != 0;
		case 48: return (0 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4) ? 2 :
						(!in->recver_0.nakd[in->recver_0.tmp.var].var) != 0;
		case 49: return (0 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4) ? 2 :
						(!in->recver_0.recbuf[in->recver_0.tmp.var].var) != 0;
		case 50: return (in->recver_0._pc.var == 15) != 0;
		case 51: return (in->recver_0._pc.var == 16) != 0;
		case 52: return (in->recver_0._pc.var == 14) != 0;
		case 53: return (0 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4) ? 2 :
						(in->recver_0.nakd[in->recver_0.tmp.var].var || in->recver_0.recbuf[in->recver_0.tmp.var].var) != 0;
		case 54: return (in->recver_0.tmp.var == in->recver_0.seq.var) != 0;
		case 55: return (0 || in->recver_0.seq.var < 0 || in->recver_0.seq.var >= 4) ? 2 :
						((in->recver_0.seq.var == in->recver_0.recseq.var) || in->recver_0.recbuf[in->recver_0.seq.var].var) != 0;
		case 56: return (0 || 4 == 0) ? 2 :
						(in->recver_0.seq.var == abs((in->recver_0.recseq.var + 1) % 4)) != 0;
		case 57: return (in->recver_0._pc.var == 6) != 0;
		case 58: return (in->recver_0._pc.var == 7) != 0;
		case 59: return (0 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4) ? 2 :
						in->recver_0.recbuf[in->recver_0.tmp.var].var != 0;
		case 60: return (in->recver_0._pc.var == 8) != 0;
		case 61: return (0 || 4 == 0 || 4 == 0) ? 2 :
						(abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) >= (4 / 4)) != 0;
		case 62: return (in->recver_0._pc.var == 9) != 0;
		case 63: return (in->recver_0._pc.var == 10) != 0;
		case 64: return (0 || 4 == 0 || 4 == 0) ? 2 :
						(abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) < (4 / 4)) != 0;
		case 65: return (in->medium1_0._pc.var == 2) != 0;
		case 66: return (in->sender_0._pc.var == 10) != 0;
		case 67: return (in->sender_0._pc.var == 1) != 0;
		case 68: return (in->sender_0._pc.var == 4) != 0;
		case 69: return (in->sender_0._pc.var == 2) != 0;
		case 70: return (0 || 4 == 0) ? 2 :
						(in->sender_0.sendseq.var != abs((in->sender_0.rack.var + 1) % 4)) != 0;
		case 71: return (in->sender_0._pc.var == 3) != 0;
		case 72: return (0 || 4 == 0) ? 2 :
						(in->sender_0.sendseq.var == abs((in->sender_0.rack.var + 1) % 4)) != 0;
		case 73: return (0 || 4 == 0 || 2 == 0) ? 2 :
						((abs(((in->sender_0.sendseq.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2)) || (in->sender_0.sendseq.var == in->sender_0.rack.var)) != 0;
		case 74: return ((((((in->medium1_0._pc.var == 2) || (in->medium2_0._pc.var == 2)) || (in->sender_0._pc.var == 4)) || (in->recver_0._pc.var == 1)) || (in->recver_0._pc.var == 6)) || (in->recver_0._pc.var == 17));
		case 75: return (in->medium2_0._pc.var == 2);
		case 76: return (((in->medium2_0._pc.var != 1) || (in->sender_0._pc.var != 0)) || ((in->sender_0.pty.var == 3) || (in->sender_0.pty.var == 2)));
		case 77: return ((4 == 0) || ((((in->medium1_0._pc.var == -1) && (in->medium2_0._pc.var == -1)) && (in->sender_0._pc.var == -1)) && (in->recver_0._pc.var == -1)));
		case 78: return ((((((in->medium1_0._pc.var != 2) && (in->medium2_0._pc.var != 2)) && (in->sender_0._pc.var != 4)) && (in->recver_0._pc.var != 1)) && (in->recver_0._pc.var != 6)) && (in->recver_0._pc.var != 17));
		case 79: return (in->medium1_0._pc.var == 2);
		case 80: return (in->sender_0._pc.var == 4);
		case 81: return (in->recver_0._pc.var == 6);
		case 82: return (in->recver_0._pc.var == 1);
		case 83: return (in->recver_0._pc.var == 17);
	}
	return false;
}

const char *spins_get_label_name(int g) {
	assert(g < 84, "spins_get_label_name: invalid state label index %d", g);
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
		case 74: return "progress_";
		case 75: return "progress_m2_0";
		case 76: return "assert_0";
		case 77: return "end_";
		case 78: return "np_";
		case 79: return "progress_m1_0";
		case 80: return "progress_t1_0";
		case 81: return "progress_r2_0";
		case 82: return "progress_t2_0";
		case 83: return "progress_r1_0";
	}
	return "";
}

void spins_get_labels_many (void* model, sj_struct_state_t* in, int* label, bool guards_only) {
	(void)model;
	label[0] = (in->sender_0._pc.var == 0) != 0;
	label[1] = (0 || 4 == 0 || 2 == 0) ? 2 :
			(abs(((in->sender_0.sendseq.var + 4) - in->sender_0.rack.var) % 4) <= (4 / 2)) != 0;
	label[2] = (in->sender_0.sendseq.var != in->sender_0.rack.var) != 0;
	label[3] = (in->sender_0._pc.var == 9) != 0;
	label[4] = (in->medium1_0._pc.var == 0) != 0;
	label[5] = (in->medium1_0._pc.var == 1) != 0;
	label[6] = (in->recver_0._pc.var == 0) != 0;
	label[7] = (in->recver_0._pc.var == 2) != 0;
	label[8] = (in->recver_0.pty.var == 2) != 0;
	label[9] = (in->recver_0._pc.var == 20) != 0;
	label[10] = (in->medium2_0._pc.var == 0) != 0;
	label[11] = (in->medium2_0._pc.var == 1) != 0;
	label[12] = (in->sender_0._pc.var == 5) != 0;
	label[13] = (in->sender_0.ak.var != in->sender_0.sendseq.var) != 0;
	label[14] = (0 || 4 == 0 || 2 == 0) ? 2 :
			(abs(((in->sender_0.ak.var + 4) - in->sender_0.rack.var) % 4) <= (4 / 2)) != 0;
	label[15] = (0 || 4 == 0 || 2 == 0) ? 2 :
			(abs(((in->sender_0.sendseq.var + 4) - in->sender_0.ak.var) % 4) <= (4 / 2)) != 0;
	label[16] = (in->sender_0._pc.var == 6) != 0;
	label[17] = (in->sender_0.pty.var == 2) != 0;
	label[18] = (in->sender_0._pc.var == 7) != 0;
	label[19] = (in->sender_0.seq.var != in->sender_0.sendseq.var) != 0;
	label[20] = (0 || 4 == 0 || 2 == 0) ? 2 :
			(abs(((in->sender_0.seq.var + 4) - in->sender_0.rack.var) % 4) <= (4 / 2)) != 0;
	label[21] = (0 || 4 == 0 || 2 == 0) ? 2 :
			(abs(((in->sender_0.sendseq.var + 4) - in->sender_0.seq.var) % 4) <= (4 / 2)) != 0;
	label[22] = (in->sender_0._pc.var == 8) != 0;
	label[23] = (0 || 4 == 0 || 2 == 0 || 4 == 0 || 2 == 0) ? 2 :
			(((in->sender_0.seq.var == in->sender_0.sendseq.var) || (abs(((in->sender_0.seq.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2))) || (abs(((in->sender_0.sendseq.var + 4) - in->sender_0.seq.var) % 4) > (4 / 2))) != 0;
	label[24] = (in->sender_0.pty.var != 2) != 0;
	label[25] = (0 || 4 == 0 || 2 == 0 || 4 == 0 || 2 == 0) ? 2 :
			(((in->sender_0.ak.var == in->sender_0.sendseq.var) || (abs(((in->sender_0.ak.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2))) || (abs(((in->sender_0.sendseq.var + 4) - in->sender_0.ak.var) % 4) > (4 / 2))) != 0;
	label[26] = (in->medium2_0._pc.var == 2) != 0;
	label[27] = (in->recver_0._pc.var == 21) != 0;
	label[28] = (in->recver_0._pc.var == 1) != 0;
	label[29] = (in->recver_0.pty.var == 1) != 0;
	label[30] = (in->recver_0._pc.var == 3) != 0;
	label[31] = (0 || 4 == 0 || 2 == 0) ? 2 :
			((abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) > (4 / 2)) || (in->recver_0.seq.var == in->recver_0.lack.var)) != 0;
	label[32] = (0 || 4 == 0 || 2 == 0) ? 2 :
			(abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) <= (4 / 2)) != 0;
	label[33] = (in->recver_0.seq.var != in->recver_0.lack.var) != 0;
	label[34] = (in->recver_0._pc.var == 4) != 0;
	label[35] = (in->recver_0._pc.var == 17) != 0;
	label[36] = (in->recver_0.seq.var != in->recver_0.recseq.var) != 0;
	label[37] = (0 || in->recver_0.seq.var < 0 || in->recver_0.seq.var >= 4) ? 2 :
			(!in->recver_0.recbuf[in->recver_0.seq.var].var) != 0;
	label[38] = (0 || 4 == 0 || 2 == 0) ? 2 :
			(abs(((in->recver_0.seq.var + 4) - in->recver_0.recseq.var) % 4) <= (4 / 2)) != 0;
	label[39] = (in->recver_0._pc.var == 18) != 0;
	label[40] = (in->recver_0._pc.var == 19) != 0;
	label[41] = (0 || in->recver_0.seq.var < 0 || in->recver_0.seq.var >= 4 || 4 == 0 || 2 == 0) ? 2 :
			(((in->recver_0.seq.var == in->recver_0.recseq.var) || in->recver_0.recbuf[in->recver_0.seq.var].var) || (abs(((in->recver_0.seq.var + 4) - in->recver_0.recseq.var) % 4) > (4 / 2))) != 0;
	label[42] = (in->recver_0._pc.var == 5) != 0;
	label[43] = (0 || 4 == 0) ? 2 :
			(in->recver_0.seq.var != abs((in->recver_0.recseq.var + 1) % 4)) != 0;
	label[44] = (in->recver_0._pc.var == 11) != 0;
	label[45] = (in->recver_0._pc.var == 12) != 0;
	label[46] = (in->recver_0.tmp.var != in->recver_0.seq.var) != 0;
	label[47] = (in->recver_0._pc.var == 13) != 0;
	label[48] = (0 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4) ? 2 :
			(!in->recver_0.nakd[in->recver_0.tmp.var].var) != 0;
	label[49] = (0 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4) ? 2 :
			(!in->recver_0.recbuf[in->recver_0.tmp.var].var) != 0;
	label[50] = (in->recver_0._pc.var == 15) != 0;
	label[51] = (in->recver_0._pc.var == 16) != 0;
	label[52] = (in->recver_0._pc.var == 14) != 0;
	label[53] = (0 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4) ? 2 :
			(in->recver_0.nakd[in->recver_0.tmp.var].var || in->recver_0.recbuf[in->recver_0.tmp.var].var) != 0;
	label[54] = (in->recver_0.tmp.var == in->recver_0.seq.var) != 0;
	label[55] = (0 || in->recver_0.seq.var < 0 || in->recver_0.seq.var >= 4) ? 2 :
			((in->recver_0.seq.var == in->recver_0.recseq.var) || in->recver_0.recbuf[in->recver_0.seq.var].var) != 0;
	label[56] = (0 || 4 == 0) ? 2 :
			(in->recver_0.seq.var == abs((in->recver_0.recseq.var + 1) % 4)) != 0;
	label[57] = (in->recver_0._pc.var == 6) != 0;
	label[58] = (in->recver_0._pc.var == 7) != 0;
	label[59] = (0 || in->recver_0.tmp.var < 0 || in->recver_0.tmp.var >= 4) ? 2 :
			in->recver_0.recbuf[in->recver_0.tmp.var].var != 0;
	label[60] = (in->recver_0._pc.var == 8) != 0;
	label[61] = (0 || 4 == 0 || 4 == 0) ? 2 :
			(abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) >= (4 / 4)) != 0;
	label[62] = (in->recver_0._pc.var == 9) != 0;
	label[63] = (in->recver_0._pc.var == 10) != 0;
	label[64] = (0 || 4 == 0 || 4 == 0) ? 2 :
			(abs(((in->recver_0.seq.var + 4) - in->recver_0.lack.var) % 4) < (4 / 4)) != 0;
	label[65] = (in->medium1_0._pc.var == 2) != 0;
	label[66] = (in->sender_0._pc.var == 10) != 0;
	label[67] = (in->sender_0._pc.var == 1) != 0;
	label[68] = (in->sender_0._pc.var == 4) != 0;
	label[69] = (in->sender_0._pc.var == 2) != 0;
	label[70] = (0 || 4 == 0) ? 2 :
			(in->sender_0.sendseq.var != abs((in->sender_0.rack.var + 1) % 4)) != 0;
	label[71] = (in->sender_0._pc.var == 3) != 0;
	label[72] = (0 || 4 == 0) ? 2 :
			(in->sender_0.sendseq.var == abs((in->sender_0.rack.var + 1) % 4)) != 0;
	label[73] = (0 || 4 == 0 || 2 == 0) ? 2 :
			((abs(((in->sender_0.sendseq.var + 4) - in->sender_0.rack.var) % 4) > (4 / 2)) || (in->sender_0.sendseq.var == in->sender_0.rack.var)) != 0;
	if (guards_only) return;
	label[74] = ((((((in->medium1_0._pc.var == 2) || (in->medium2_0._pc.var == 2)) || (in->sender_0._pc.var == 4)) || (in->recver_0._pc.var == 1)) || (in->recver_0._pc.var == 6)) || (in->recver_0._pc.var == 17));
	label[75] = (in->medium2_0._pc.var == 2);
	label[76] = (((in->medium2_0._pc.var != 1) || (in->sender_0._pc.var != 0)) || ((in->sender_0.pty.var == 3) || (in->sender_0.pty.var == 2)));
	label[77] = ((4 == 0) || ((((in->medium1_0._pc.var == -1) && (in->medium2_0._pc.var == -1)) && (in->sender_0._pc.var == -1)) && (in->recver_0._pc.var == -1)));
	label[78] = ((((((in->medium1_0._pc.var != 2) && (in->medium2_0._pc.var != 2)) && (in->sender_0._pc.var != 4)) && (in->recver_0._pc.var != 1)) && (in->recver_0._pc.var != 6)) && (in->recver_0._pc.var != 17));
	label[79] = (in->medium1_0._pc.var == 2);
	label[80] = (in->sender_0._pc.var == 4);
	label[81] = (in->recver_0._pc.var == 6);
	label[82] = (in->recver_0._pc.var == 1);
	label[83] = (in->recver_0._pc.var == 17);
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
	assert(g < 84, "spins_get_label_matrix: invalid guard index %d", g);
	return gm_dm[g];
}

const int* spins_get_trans_commutes_matrix(int t) {
	assert(t < 55, "spins_get_trans_commutes_matrix: invalid trans index %d", t);
	return commutes_dm[t];
}

const int* spins_get_trans_do_not_accord_matrix(int t) {
	assert(t < 55, "spins_get_label_do_not_accord_matrix: invalid trans index %d", t);
	return dna_dm[t];
}

const int* spins_get_label_may_be_coenabled_matrix(int g) {
	assert(g < 84, "spins_get_label_may_be_coenabled_matrix: invalid guard index %d", g);
	return co_dm[g];
}

const int* spins_get_label_nes_matrix(int g) {
	assert(g < 84, "spins_get_label_nes_matrix: invalid guard index %d", g);
	return nes_dm[g];
}

const int* spins_get_label_nds_matrix(int g) {
	assert(g < 84, "spins_get_label_nds_matrix: invalid guard index %d", g);
	return nds_dm[g];
}

static const char* var_names[] = {
	"medium1_0._pc",
	"medium1_0.pty",
	"medium1_0.seq",
	"medium1_0.ak",
	"medium2_0._pc",
	"medium2_0.pty",
	"medium2_0.seq",
	"medium2_0.ak",
	"sender_0._pc",
	"sender_0.sendseq",
	"sender_0.rack",
	"sender_0.pty",
	"sender_0.seq",
	"sender_0.ak",
	"recver_0._pc",
	"recver_0.recseq",
	"recver_0.lack",
	"recver_0.recbuf[0]",
	"recver_0.recbuf[1]",
	"recver_0.recbuf[2]",
	"recver_0.recbuf[3]",
	"recver_0.nakd[0]",
	"recver_0.nakd[1]",
	"recver_0.nakd[2]",
	"recver_0.nakd[3]",
	"recver_0.pty",
	"recver_0.seq",
	"recver_0.ak",
	"recver_0.tmp"
};

static const char* var_types[] = {
	"bool",
	"guard",
	"pc",
	"byte",
	"statement",
	"action",
	""
};

static const int var_type[] = {
	2,
	3,
	3,
	3,
	2,
	3,
	3,
	3,
	2,
	3,
	3,
	3,
	3,
	3,
	2,
	3,
	3,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3,
	3,
	3,
	3,
	-1
};

static const int var_type_value_count[] = {
	0,
	0,
	0,
	0,
	55,
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

static const char* const var_type_statement[] = {
	"group 0 (sender_0) i3.pr:17 (state 9) <invalid end state> [((Math.abs(((sendseq + 4) - rack) % 4) <= (4 / 2)) && (sendseq != rack))] -1",
	"group 1 (sender_0) i3.pr:70 (state 10) <invalid end state> [s2m!data,sender_0.sendseq,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1",
	"group 2 (medium1_0) i3.pr:37 (state 0) <invalid end state> [m2r!medium1_0.pty,medium1_0.seq,medium1_0.ak X m2r?recver_0.pty,recver_0.seq,recver_0.ak] -1",
	"group 3 (recver_0) i3.pr:124 (state 20) <invalid end state> [(recver_0.pty == nak)] -1",
	"group 4 (recver_0) i3.pr:127 (state 21) <invalid end state> [r2m!ack,recver_0.recseq,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1",
	"group 5 (medium2_0) i3.pr:52 (state 0) <invalid end state> [m2s!medium2_0.pty,medium2_0.seq,medium2_0.ak X m2s?sender_0.pty,sender_0.seq,sender_0.ak] -1",
	"group 6 (sender_0) i3.pr:76 (state 6) <invalid end state> [(!(((ak == sendseq) || (Math.abs(((ak + 4) - rack) % 4) > (4 / 2))) || (Math.abs(((sendseq + 4) - ak) % 4) > (4 / 2))))] -1",
	"group 7 (sender_0) i3.pr:83 (state 7) <invalid end state> [(sender_0.pty == nak)] -1",
	"group 8 (sender_0) i3.pr:85 (state 8) <invalid end state> [(!(((seq == sendseq) || (Math.abs(((seq + 4) - rack) % 4) > (4 / 2))) || (Math.abs(((sendseq + 4) - seq) % 4) > (4 / 2))))] -1",
	"group 9 (sender_0) i3.pr:88 (state 0) <invalid end state> [s2m!data,sender_0.seq,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1",
	"group 10 (sender_0) i3.pr:-1 (state 0) <invalid end state> [tau] -1",
	"group 11 (sender_0) i3.pr:-1 (state 0) <invalid end state> [tau] -1",
	"group 12 (sender_0) i3.pr:-1 (state 6) <invalid end state> [tau] -1",
	"group 13 (medium2_0) i3.pr:53 (state 2) <invalid end state> [true] -1",
	"group 14 (medium2_0) i3.pr:54 <progress> (state 0) <invalid end state> [skip] -1",
	"group 15 (recver_0) i3.pr:128 (state 0) <invalid end state> [recver_0.lack = recver_0.recseq] -1",
	"group 16 (recver_0) i3.pr:186 (state 1) <invalid end state> [r2m!nak,((recver_0.recseq + 1) % 4),recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1",
	"group 17 (recver_0) i3.pr:188 <progress> (state 0) <invalid end state> [recver_0.seq = 0] -1",
	"group 18 (recver_0) i3.pr:130 (state 3) <invalid end state> [(recver_0.pty == data)] -1",
	"group 19 (recver_0) i3.pr:132 (state 0) <invalid end state> [((Math.abs(((seq + 4) - lack) % 4) > (4 / 2)) || (seq == lack))] -1",
	"group 20 (recver_0) i3.pr:-1 (state 4) <invalid end state> [tau] -1",
	"group 21 (recver_0) i3.pr:137 (state 17) <invalid end state> [true] -1",
	"group 22 (recver_0) i3.pr:140 <progress> (state 18) <invalid end state> [(((seq != recseq) && (!(recbuf[seq] != 0 ))) && (Math.abs(((seq + 4) - recseq) % 4) <= (4 / 2)))] -1",
	"group 23 (recver_0) i3.pr:109 (state 19) <invalid end state> [r2m!nak,recver_0.seq,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1",
	"group 24 (recver_0) i3.pr:109 (state 0) <invalid end state> [recver_0.lack = recver_0.recseq] -1",
	"group 25 (recver_0) i3.pr:-1 <progress> (state 0) <invalid end state> [tau] -1",
	"group 26 (recver_0) i3.pr:146 (state 5) <invalid end state> [recver_0.nakd[recver_0.seq] = false] -1",
	"group 27 (recver_0) i3.pr:148 (state 11) <invalid end state> [(recver_0.seq != ((recver_0.recseq + 1) % 4))] -1",
	"group 28 (recver_0) i3.pr:150 (state 12) <invalid end state> [((seq != recseq) && (!(recbuf[seq] != 0 )))] -1",
	"group 29 (recver_0) i3.pr:154 (state 13) <invalid end state> [(recver_0.tmp != recver_0.seq)] -1",
	"group 30 (recver_0) i3.pr:156 (state 15) <invalid end state> [(!((nakd[tmp] != 0 ) || (recbuf[tmp] != 0 )))] -1",
	"group 31 (recver_0) i3.pr:109 (state 16) <invalid end state> [r2m!nak,recver_0.tmp,recver_0.recseq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1",
	"group 32 (recver_0) i3.pr:109 (state 14) <invalid end state> [recver_0.lack = recver_0.recseq] -1",
	"group 33 (recver_0) i3.pr:-1 (state 12) <invalid end state> [recver_0.tmp = ((recver_0.tmp + 1) % 4)] -1",
	"group 34 (recver_0) i3.pr:-1 (state 14) <invalid end state> [tau] -1",
	"group 35 (recver_0) i3.pr:161 (state 0) <invalid end state> [(recver_0.tmp == recver_0.seq)] -1",
	"group 36 (recver_0) i3.pr:-1 (state 0) <invalid end state> [tau] -1",
	"group 37 (recver_0) i3.pr:-1 (state 6) <invalid end state> [tau] -1",
	"group 38 (recver_0) i3.pr:166 <progress> (state 7) <invalid end state> [recver_0.recseq = recver_0.seq] -1",
	"group 39 (recver_0) i3.pr:169 (state 7) <invalid end state> [recver_0.recbuf[recver_0.tmp]] -1",
	"group 40 (recver_0) i3.pr:-1 (state 8) <invalid end state> [tau] -1",
	"group 41 (recver_0) i3.pr:176 (state 9) <invalid end state> [(!(Math.abs(((seq + 4) - lack) % 4) < (4 / 4)))] -1",
	"group 42 (recver_0) i3.pr:177 (state 10) <invalid end state> [r2m!ack,recver_0.seq,recver_0.seq X r2m?medium2_0.pty,medium2_0.seq,medium2_0.ak] -1",
	"group 43 (recver_0) i3.pr:178 (state 0) <invalid end state> [recver_0.lack = recver_0.recseq] -1",
	"group 44 (recver_0) i3.pr:-1 (state 0) <invalid end state> [tau] -1",
	"group 45 (medium1_0) i3.pr:38 (state 2) <invalid end state> [true] -1",
	"group 46 (medium1_0) i3.pr:39 <progress> (state 0) <invalid end state> [skip] -1",
	"group 47 (sender_0) i3.pr:-1 (state 0) <invalid end state> [sender_0.sendseq = ((sender_0.sendseq + 1) % 4)] -1",
	"group 48 (sender_0) i3.pr:94 (state 1) <invalid end state> [s2m!nak,1,0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1",
	"group 49 (sender_0) i3.pr:17 (state 4) <invalid end state> [((Math.abs(((sendseq + 4) - rack) % 4) <= (4 / 2)) && (sendseq != rack))] -1",
	"group 50 (sender_0) i3.pr:97 <progress> (state 2) <invalid end state> [skip] -1",
	"group 51 (sender_0) i3.pr:101 (state 3) <invalid end state> [(sender_0.sendseq != ((sender_0.rack + 1) % 4))] -1",
	"group 52 (sender_0) i3.pr:102 (state 0) <invalid end state> [s2m!data,((sender_0.rack + 1) % 4),0 X s2m?medium1_0.pty,medium1_0.seq,medium1_0.ak] -1",
	"group 53 (sender_0) i3.pr:-1 (state 0) <invalid end state> [tau] -1",
	"group 54 (sender_0) i3.pr:-1 (state 2) <invalid end state> [tau] -1",
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
	var_type_statement,
	var_type_action,
	NULL
};

extern const char* spins_get_state_variable_name(unsigned int var) {
	assert(var < 29, "spins_get_state_variable_name: invalid variable index %d", var);
	return var_names[var];
}

extern int spins_get_type_count() {
	return 6;
}

extern const char* spins_get_type_name(int type) {
	assert(type > -1 && type < 6, "spins_get_type_name: invalid type index %d", type);
	return var_types[type];
}

extern int spins_get_type_value_count(int type) {
	assert(type > -1 && type < 6, "spins_get_type_value_count: invalid type index %d", type);
	return var_type_value_count[type];
}

extern const char* spins_get_type_value_name(int type, int value) {
	assert(type > -1 && type < 6, "spins_get_type_value_name: invalid type %d", type);
	assert(value <= var_type_value_count[type], "spins_get_type_value_name: invalid type %d", value);
	return var_type_values[type][value];
}

extern int spins_get_state_variable_type(int var) {
	assert(var > -1 && var < 29, "spins_get_state_variable_type: invalid variable %d", var);
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
	4,
	5,
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

