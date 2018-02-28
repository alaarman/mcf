#include <peterson.h>

#include <assert.h>

/***
 * Next-State Implementation for the Filter Algorithm, a generalized
 * version of the Peterson mutual exclusion protocol.
 *
 * The Filter Algorithm generalizes Peterson for N processes.
 * See Wikipedia for a description [1].
 * For our purposes let's assume the protocol for process i to enter
 * and exit the critical section is as follows:
 *
 * 0:   for level[i] := 0 to N-2                   (including N-2)
 * 1:       last[level[i]] := i
 * 2:       for k := 0 to N-1 skipping k == i
 * 3:           await last[level[i]] != i || level[k] >= level[i]
 *      ######### ENTERED CRITICAL SECTION ##########
 *      #########     CRITICAL SECTION     ##########
 *      #########   EXIT CRITICAL SECTION  ##########
 * 4:   level[i] := 0; goto 0
 *
 
 byte level[N];
 byte last[N];
 
 byte j=0, k=0;
 0:  for j := 1 to N-1 do
 1:     level[j-1] := i
 2:     for k := 0 to N-1
 3          await k  != i || 
 
 
 wait -> q2  { guard j < N; effect pos[$1] = j;},
 q2 -> q3 { effect step[j-1] = $1, k = 0; },
 q3 -> q3 { guard k < N && (k == $1 || pos[k] ifelse(ERROR,1, `<=', `<') j); effect k = k+1;},
 q3 -> wait { guard ifelse(ERROR,2,`pos',`step')[j-1] != $1 || k == N; effect j = j+1;},
 wait -> CS { guard j == N; },
 CS -> NCS { effect pos[$1] = 0;};
 }

 
 
 
 * The critical section
 *
 * The next-state function implemented here can be used by the
 * LTSmin model checker [2].
 *
 * [1] https://en.wikipedia.org/wiki/Peterson%27s_algorithm?oldformat=true#Filter_algorithm:_Peterson's_algorithm_for_more_than_two_processes
 * [2] http://fmt.cs.utwente.nl/tools/ltsmin/
 */


#define N 4

/**
 * The state vector describes the variables and program counters in
 * the system.
 *
 * THE MODEL CHECKER REQUIRES ALL VARIABLES TO BE (32-bit) INTEGERS.
 */
typedef struct state_vec {
   // Each process has a program counter pc and a local variable k
    struct proc {
        int pc;
        int k;
    } proc[N];

    // global variables:
    int level[N];
    int last[N - 1];
} state_vec_t;

#define L (N + N + N + N - 1)

/**
 * The names for the slots in the state vector
 */
const char *SLOT_NAMES[] = {
    "pc0",
    "k0",
    "pc1",
    "k1",
    "pc2",
    "k2",
    "pc3",
    "k3",
    "level0",
    "level1",
    "level2",
    "level3",
    "last0",
    "last1",
    "last2"
};

/**
 * States have a fixed length
 */
int state_int_length () {
    assert (sizeof(state_vec_t) == sizeof(int[L]));
    return L;
}

// reserve room for initial state
static state_vec_t initial;

/**
 * Only one initial state
 */
int *initial_state() {
    for (int i = 0; i < N; i++) {
        initial.proc[i].pc = 0;
        initial.proc[i].k = 0;
        initial.level[i] = 0;
        if (i != N-1) initial.last[i] = 0;
    }
    return (int *) &initial;
}

/**
 * Based on the above pseudo code, we can distinguish five actions.
 * One for each line of pseudo code.
 */
int action_label_count() {
    return 5 * N;
}

const char *ACTION_LABELS[] = {
    "level-up(0)",
    "set-last(0)",
    "loop-k(0)",
    "await(0)",
    "exit-cs(0)",
    "level-up(1)",
    "set-last(1)",
    "loop-k(1)",
    "await(1)",
    "exit-cs(1)",
    "level-up(2)",
    "set-last(2)",
    "loop-k(2)",
    "await(2)",
    "exit-cs(2)",
    "level-up(3)",
    "set-last(3)",
    "loop-k(3)",
    "await(3)",
    "exit-cs(3)",
};

/**
 * Per process, each action gets a unique index called a "group"
 */
#define GROUPS      (N * 5)
int group_count() {
    return GROUPS;
}

static int unique_index(int proc, int action) {
    return action * N + proc;
}

/**
 * Generate and return states through the callback
 *
 *  /-------\     next_states(src, callback, arg)    /----------\
 *  | Model |  ------------------------------------> | "Model"  |
 *  |Checker|  <------------------------------------ |peterson.c|
 *  \-------/          callback(dst, arg)            \----------/
 *
 *
 * The model checkinger calls the next-state function with:
 * - a model (not used here),
 * - a state (src),
 * - a function pointer (callback) for returning (multiple) successor states, and
 * - a context (arg), which is an object the model checker needs access to in the callback.
 *
 *
 * TransitionCB is defined in ltsmin/pins.h as:
 * typedef void (*TransitionCB) (void *arg, transition_info_t*ti, int *dst, int *cpy);
 * - arg is the "context" object that model checker wants back,
 * - transition_info contains info about the transition (see below)
 * - dst is the returned state, and
 * - cpy (which we can ignore).
 *
 */
int next_states (void *model, int *src,
                        TransitionCB callback, void *arg)
{
    // allocate a successor state (for multiple use)
    state_vec_t dst;
    state_vec_t *s = (state_vec_t *) src;

    // allocate transition info (for multiple use).
    int action[1]; //
    transition_info_t ti = { action, 0 };

    int nr_succ = 0;
    for (int i = 0; i < N; i++) {
        switch (s->proc[i].pc) {
        case 0:
            memcpy(&dst, src, sizeof(state_vec_t));
            if (dst.level[i] == N - 1) {
                // enter CS
                dst.proc[i].pc = 4;
            } else {
                dst.proc[i].pc = 1;
            }
            ti.group = unique_index(i, 0);       // unique group index
            action[0] = ti.group;
            callback(arg, &ti, (int *)&dst, NULL);
            nr_succ++;
            break;
        case 1:
            memcpy(&dst, src, sizeof(state_vec_t));
            dst.proc[i].pc = 2;
            dst.last[dst.level[i]] = i;
            dst.proc[i].k = 0;
            ti.group = unique_index(i, 1);       // unique group index
            action[0] = ti.group;
            callback(arg, &ti, (int *)&dst, NULL);
            nr_succ++;
            break;
        case 2:
            memcpy(&dst, src, sizeof(state_vec_t));
            if (dst.proc[i].k == N) {
                dst.proc[i].pc = 0; // k := 0?
                dst.level[i]++;
            } else {
                dst.proc[i].pc = 3;
            }
            ti.group = unique_index(i, 2);       // unique group index
            action[0] = ti.group;
            callback(arg, &ti, (int *)&dst, NULL);
            nr_succ++;
            break;
        case 3:
            if (s->last[s->level[i]] == i && s->level[s->proc[i].k] < s->level[i])
                break;
            memcpy(&dst, src, sizeof(state_vec_t));
            dst.proc[i].pc = 2;
            do {
                dst.proc[i].k++;
            } while (dst.proc[i].k == i); // skip k == i
            ti.group = unique_index(i, 3);       // unique group index
            action[0] = ti.group;
            callback(arg, &ti, (int *)&dst, NULL);
            nr_succ++;
            break;
        case 4:
            memcpy(&dst, src, sizeof(state_vec_t));
            dst.proc[i].pc = 0;
            dst.level[i] = 0;
            ti.group = unique_index(i, 4);       // unique group index
            action[0] = ti.group;
            callback(arg, &ti, (int *)&dst, NULL);
            nr_succ++;
            break;
        }
    }
    return nr_succ; // return number of successors
}

int state_label_count() {
    return N;
}

const char *STATE_LABELS[] = {
    "CS0",
    "CS1",
    "CS2",
    "CS3",
};

int state_label(void *model, int label, int *src) {
    state_vec_t *s = (state_vec_t *) src;
    assert (label < N);
    return s->proc[label].pc == 4;
}

/**
 * Additionally, we record which slots are read / written by which group
 * The model checker can use this to speed up symbolic checking and
 * state compression.
 */

#define get_slot_index(a)  ((int *)&(initial.a) - (int *)&initial)

bool write_matrix(int i, int j) {
    int proc   = i % N;
    int action = i / N;
    switch (action) {
    case 0: return j == get_slot_index(proc[proc].pc);
    case 1: return j == get_slot_index(proc[proc].pc) ||
                   j == get_slot_index(proc[proc].k) ||
                   j == get_slot_index(last[0]) ||
                   j == get_slot_index(last[1]) ||
                   j == get_slot_index(last[2]) ||
                   j == get_slot_index(last[3]);
    case 2: return j == get_slot_index(proc[proc].pc) ||
                   j == get_slot_index(level[proc]);
    case 3: return j == get_slot_index(proc[proc].pc) ||
                   j == get_slot_index(proc[proc].k);
    case 4: return j == get_slot_index(proc[proc].pc) ||
                   j == get_slot_index(level[proc]) ;
    default: assert (false && "Unknown action"); return -1;
    }
}

bool read_matrix(int i, int j) {
    int proc   = i % N;
    int action = i / N;
    switch (action) {
    case 0: return j == get_slot_index(proc[proc].pc) ||
                   j == get_slot_index(level[proc]) ;
    case 1: return j == get_slot_index(proc[proc].pc) ||
                   j == get_slot_index(level[proc]) ;
    case 2: return j == get_slot_index(proc[proc].pc) ||
                   j == get_slot_index(proc[proc].k) ||
                   j == get_slot_index(level[proc]);
    case 3: return j == get_slot_index(proc[proc].pc) ||
                   j == get_slot_index(proc[proc].k) ||
                   j == get_slot_index(last[0]) ||
                   j == get_slot_index(last[1]) ||
                   j == get_slot_index(last[2]) ||
                   j == get_slot_index(last[3]) ||
                   j == get_slot_index(level[0]) ||
                   j == get_slot_index(level[1]) ||
                   j == get_slot_index(level[2]) ||
                   j == get_slot_index(level[3]);
    case 4: return j == get_slot_index(proc[proc].pc);
    default: assert (false && "Unknown action"); return -1;
    }
}

bool label_matrix(int i, int j) {
    switch (i) {
    case 0: return j == get_slot_index(proc[0].pc);
    case 1: return j == get_slot_index(proc[1].pc);
    case 2: return j == get_slot_index(proc[2].pc);
    case 3: return j == get_slot_index(proc[3].pc);
    default: assert (false && "Unknown action"); return -1;
    }
}

