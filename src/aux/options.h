#ifndef OPTIONS_H_
#define OPTIONS_H_

#include <pins/pins.h>
#include <syntax/ltsmin-syntax.h>


typedef struct options_s {
    bool            POR;
    bool            SYM;
    const char     *FNAME;
    const char     *INVARIANT;
    const char     *LTL;
    const char     *CTL;
    const char     *CTLSTAR;
    const char     *MU;
} options_t;

typedef struct settings_s {
    options_t               OPTIONS;
    ltsmin_parse_env_t      INVARIANT;
    ltsmin_parse_env_t      LTL;
    ltsmin_parse_env_t      CTL;
    ltsmin_parse_env_t      CTLSTAR;
    ltsmin_parse_env_t      MU;
} settings_t;


extern settings_t SETTINGS;

extern void parse_options(int argc, const char **argv);

extern void process_options(model_t model);

#endif
