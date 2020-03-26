#ifndef OPTIONS_H_
#define OPTIONS_H_

#include <stdbool.h>

#include <pins/pins.h>
#include <syntax/ltsmin-syntax.h>
#include "vset/vector_set.h"


typedef struct options_s {
    bool            POR;            // partial order reduction
    bool            TR;             // transaction reduction
    int             SYM;            // (semi)-symbolic algorithm
    vset_implementation_t  BDD;            // use BDDs for visited set
    const char     *FNAME;
    const char     *INVARIANT;
    const char     *LTL;
    const char     *CTL;
    const char     *CTLSTAR;
    const char     *MU;
    const char     *REGROUP;
} options_t;

typedef struct settings_s {
    options_t               OPTIONS;
    ltsmin_parse_env_t      INVARIANT;
    ltsmin_parse_env_t      LTL;
    ltsmin_parse_env_t      CTL;
    ltsmin_parse_env_t      CTLSTAR;
    ltsmin_parse_env_t      MU;

    int                     STOPPED;
    int                     DBG;
} settings_t;


extern settings_t SETTINGS;

extern void parse_options(int argc, const char **argv);

extern void process_options(model_t model);

#endif
