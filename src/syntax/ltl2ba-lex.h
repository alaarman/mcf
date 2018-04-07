#ifndef LTL2BA_LEX_DEF
#define LTL2BA_LEX_DEF

#include <stdbool.h>

#include <syntax/ltsmin-buchi.h>
#include <syntax/lts-type.h>

extern void ltsmin_ltl2ba(ltsmin_expr_t);
extern ltsmin_buchi_t *ltsmin_buchi();

typedef struct LTL_info {
    int has_X;
    int has_EVAR;
} LTL_info_t;

void check_LTL(ltsmin_expr_t e, ltsmin_parse_env_t env, LTL_info_t *info);

void print_ltsmin_buchi(const ltsmin_buchi_t *ba, ltsmin_parse_env_t env);

extern void ltl_exit (void  *model);

extern ltsmin_buchi_t *init_ltsmin_buchi(lts_type_t ltstype,
                                         const char *ltl_file,
                                         bool negate);

#endif // LTL2BA_LEX_DEF
