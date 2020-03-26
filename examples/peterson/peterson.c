#include "peterson/peterson.h"

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
 * 1:   for level[i] := 0 to N-2                   (including N-2)
 * 2:       last[level[i]] := i
 * 3:       await last[level[i]] != i || forall k != i : level[k] < level[i]
 *      ######### ENTERED CRITICAL SECTION ##########
 *      #########     CRITICAL SECTION     ##########
 *      #########   EXIT CRITICAL SECTION  ##########
 * 4:   level[i] := 0; goto 1
 *
 * Hint: A compiler would turn this code into the following:
 *
 * 0:   level[i] := 0
 * 1:   if level[i] <= N-2                   (including N-2)
 * 2:       last[level[i]] := i
 * 3:       await last[level[i]] != i || forall k != i : level[k] < level[i]
 *		    level[i] := level[i] + 1
 *		    goto 1
 *      ######### ENTERED CRITICAL SECTION ##########
 *      #########     CRITICAL SECTION     ##########
 *      #########   EXIT CRITICAL SECTION  ##########
 * 4:   level[i] := 0
 *      goto 0
 *
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
    // Each process has a program counter pc and a level variable:
    struct {
        int pc;
        int level;
    } proc[N];
    int last[N - 1];
} state_vec_t;

#define L (N + N + N - 1)

/**
 * The names for the slots in the state vector
 */
const char *SLOT_NAMES[] = {
    "pc0",
    "level0",
    "pc1",
    "level1",
    "pc2",
    "level2",
    "pc3",
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
        initial.proc[i].level = 0;
    }
    for (int i = 0; i < N - 1; i++) {
        initial.last[i] = 0;
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
    "loophead(0)",
    "loophead(1)",
    "loophead(2)",
    "loophead(3)",
    "loop(0)",
    "loop(1)",
    "loop(2)",
    "loop(3)",
    "last(0)",
    "last(1)",
    "last(2)",
    "last(3)",
    "await(0)",
    "await(1)",
    "await(2)",
    "await(3)",
    "exit-cs(0)",
    "exit-cs(1)",
    "exit-cs(2)",
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
 * check for k != i : level[k] < level[i]
 */
bool check_lower_level(state_vec_t *s, int i) {
    for (int k = 0; k < N; k++) {
        if (i != k && s->proc[k].level >= s->proc[i].level) {
            return false;
        }
    }
    return true;
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
int
next_states (void *model, int *src, TransitionCB callback, void *arg)
{
    // allocate a successor state (for multiple use)
    state_vec_t dst;
    state_vec_t *s = (state_vec_t *) src;

    // allocate transition info (for multiple use).
    int action[1];
    transition_info_t ti = { action, 0 };

    int nr_succ = 0;

    for (int i = 0; i < N; i++) {
        switch (s->proc[i].pc) {
        case 0:
            memcpy(&dst, src, sizeof(state_vec_t));
            dst.proc[i].level = 0;
            dst.proc[i].pc = 1;
            break;
        case 1:
            memcpy(&dst, src, sizeof(state_vec_t));
            if (dst.proc[i].level <= N - 2) {
                dst.proc[i].pc = 2;
            } else {
                dst.proc[i].pc = 4;
            }
            break;
        case 2:
            memcpy(&dst, src, sizeof(state_vec_t));
            dst.last[dst.proc[i].level] = i;
            dst.proc[i].pc = 3;
            break;
        case 3:
            // Await last[level[i]] != i || forall k != i : level[k] < level[i]
            if (!(s->last[s->proc[i].level] != i || check_lower_level(s, i))) {
                continue; // don't yield successor!
            }
            memcpy(&dst, src, sizeof(state_vec_t));
            dst.proc[i].level = dst.proc[i].level + 1;
            dst.proc[i].pc = 1;
            break;
       case 4:
            memcpy(&dst, src, sizeof(state_vec_t));
            dst.proc[i].level = 0;
            dst.proc[i].pc = 0;
            break;
        }
        ti.group = unique_index(i, s->proc[i].pc);  // unique group index
        ti.labels[0] = ti.group;                    // indexes in ACTION_LABELS[]
        callback(arg, &ti, (int *)&dst, NULL);
        nr_succ++;
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
    //int proc   = i % N;
    //int action = i / N;
    return 1; // overestimation
}

bool read_matrix(int i, int j) {
    return 1; // overestimation
}

bool label_matrix(int i, int j) {
    switch (i) {
    case 0: return j == get_slot_index(proc[0].pc);
    case 1: return j == get_slot_index(proc[1].pc);
    case 2: return j == get_slot_index(proc[2].pc);
    case 3: return j == get_slot_index(proc[3].pc);
    default: assert(false);
    }
}
