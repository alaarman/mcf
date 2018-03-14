
#include <stdbool.h>

#include <pins/pins.h>

/**
 * @brief calls callback for every successor state of src
 */
int next_states(void *model, int *src, TransitionCB callback, void *arg);

/**
 * @brief returns the initial state.
 */
int *initial_state();

/**
 * @brief returns the number of transition groups.
 */
int group_count();

/**
 * @brief returns the length of the state.
 */
int state_int_length();

/**
 * @brief returns the number of action labels.
 */
int action_label_count();

/**
 * @brief returns the number of state labels.
 */
int state_label_count();

/**
 * @brief returns whether the state src satisfies state label "label".
 */
int state_label(void* model, int label, int* src);

/**
 * @brief returns whether group i writes to slot j
 */
bool write_matrix(int i, int j);

/**
 * @brief returns whether group i reads from slot j
 */
bool read_matrix(int i, int j);

/**
 * @brief returns whether state label i reads from slot j
 */
bool label_matrix(int i, int j);

extern const char *SLOT_NAMES[];

extern const char *ACTION_LABELS[];

extern const char *STATE_LABELS[];
