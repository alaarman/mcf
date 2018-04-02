#ifndef DIVINE2_DL_H
#define DIVINE2_DL_H

/**
\file dve-dl.h
*/

#include "pins/pins.h"


extern void        get_initial_state(char *to);
extern int         have_property();
extern int         buchi_is_accepting(void* m, int* in);
extern int         get_successor( void* m, int t, int *in, TransitionCB, void *arg );
extern int         get_action( void* m, int t, int *in, TransitionCB, void *arg );
extern int         get_successors( void* m, int *in, TransitionCB, void *arg );

extern int         get_guard_count();
extern const int*  get_guard_matrix(int g);
extern const int*  get_guards(int t);
extern const int** get_all_guards();
extern int         get_guard(void*, int g, int *src);
extern void        get_guard_all(void*, int *src, int* guards);
extern const int*  get_guard_may_be_coenabled_matrix(int g);
extern const int*  get_guard_nes_matrix(int g);
extern const int*  get_guard_nds_matrix(int g);
extern const int*  get_dna_matrix(int g);

extern int         get_state_variable_count();
extern const char* get_state_variable_name(int var);
extern int         get_state_variable_type(int var);
extern int         get_state_variable_type_count();
extern const char* get_state_variable_type_name(int type);
extern int         get_state_variable_type_value_count(int type);
extern const char* get_state_variable_type_value(int type, int value);
extern int         get_transition_count();
extern const int*  get_transition_read_dependencies(int t);
extern const int*  get_transition_actions_read_dependencies(int t);
extern const int*  get_transition_may_write_dependencies(int t);
extern const int*  get_transition_must_write_dependencies(int t);

#endif

