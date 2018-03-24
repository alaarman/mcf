#ifndef PROM_DL_H
#define PROM_DL_H

#include "pins/pins.h"

/**
 * SpinS - LTSmin interface functions
 */

/* Next-state functions */

int spins_get_successor(model_t self,int group,int*src,TransitionCB cb,void*user_context);
int spins_get_actions(model_t self,int group,int*src,TransitionCB cb,void*user_context);
int spins_get_successor_all(model_t self,int*src,TransitionCB cb,void*user_context);

void        spins_get_initial_state(int *to);

/* PINS dependency matrix info */
int         spins_get_state_size();
int         spins_get_transition_groups();
const int*  spins_get_actions_read_dependencies(int t);
const int*  spins_get_transition_read_dependencies(int t);
const int*  spins_get_transition_may_write_dependencies(int t);
const int*  spins_get_transition_must_write_dependencies(int t);

/* PINS state type/value info */
const char* spins_get_state_variable_name(int var);
int         spins_get_state_variable_type(int var);
const char* spins_get_type_name(int type);
int         spins_get_type_count();
const char* spins_get_type_value_name(int type, int value);
int         spins_get_type_value_count(int type);

/* PINS edge labels (could be optional) */
int         spins_get_edge_count();
const char* spins_get_edge_name(int type);
int         spins_get_edge_type(int type);

/* PINS state labels (could be optional) */
int         spins_get_label_count ();
int         spins_get_guard_count (); // a subset of the labels
const int*  spins_get_label_matrix(int g);

/* PINS POR matrices and label info (could be optional) */
const int*  spins_get_labels      (int t);
const int** spins_get_all_labels  ();
int         spins_get_label       (void *, int g, int *src);
const char* spins_get_label_name  (int g);
void        spins_get_labels_many (void *, int *src, int* labels, bool guards_only);
const int*  spins_get_trans_commutes_matrix(int t);
const int*  spins_get_trans_do_not_accord_matrix(int t);
const int*  spins_get_label_may_be_coenabled_matrix(int g);
const int*  spins_get_label_nes_matrix(int g); // could be optional for POR
const int*  spins_get_label_nds_matrix(int g); // could be optional for POR

/* PINS flexible matrices */
const int*  spins_get_matrix(int m, int x);
int         spins_get_matrix_count();
const char* spins_get_matrix_name(int m);
int         spins_get_matrix_row_count(int m);
int         spins_get_matrix_col_count(int m);
int         spins_transition_has_edge(int t, int e, int v);


#endif
