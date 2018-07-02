
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "aux/options.h"
#include "syntax/ltsmin-tl.h"
#include "util/util.h"

static const char      DEBUG_OPT[] = "-v";

static const char      REGROUP_OPT[] = "--regroup=";
static const char      INV_OPT[] = "--inv=";
static const char      SYM_OPT[] = "--sym";
static const char      TR_OPT[] = "--tr";
static const char      POR_OPT[] = "--por";
static const char      LTL_OPT[] = "--ltl=";
static const char      CTL_OPT[] = "--ctl=";
static const char      CTLSTAR_OPT[] = "--ctl-star=";
static const char      MU_OPT[]  = "--mu=";

settings_t SETTINGS = {
    .OPTIONS = {
        .POR = false,
        .SYM = false,
        .FNAME = NULL,
        .INVARIANT = NULL,
        .LTL = NULL,
        .CTL = NULL,
        .CTLSTAR = NULL,
        .MU = NULL,
        .REGROUP = NULL,
    },

    .DBG = 0,
    .STOPPED = 0,
};

void
parse_options(int argc, const char **argv)
{

    // Parse command line options:
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], POR_OPT) == 0) {
            SETTINGS.OPTIONS.POR = true;
        } else if (strcmp(argv[i], SYM_OPT) == 0) {
            SETTINGS.OPTIONS.SYM = true;
        } else if (strcmp(argv[i], TR_OPT) == 0) {
            SETTINGS.OPTIONS.TR = true;
        } else if (strcmp(argv[i], DEBUG_OPT) == 0) {
            SETTINGS.DBG = 1;
        } else if (strncmp(argv[i], INV_OPT, sizeof(INV_OPT)-1) == 0) {
            SETTINGS.OPTIONS.INVARIANT = &argv[i][sizeof(INV_OPT)-1];
        } else if (strncmp(argv[i], REGROUP_OPT, sizeof(REGROUP_OPT)-1) == 0) {
            SETTINGS.OPTIONS.REGROUP = &argv[i][sizeof(REGROUP_OPT)-1];
        } else if (strncmp(argv[i], LTL_OPT, sizeof(LTL_OPT)-1) == 0) {
            SETTINGS.OPTIONS.LTL = &argv[i][sizeof(LTL_OPT)-1];
        } else if (strncmp(argv[i], CTL_OPT, sizeof(CTL_OPT)-1) == 0) {
            SETTINGS.OPTIONS.CTL = &argv[i][sizeof(CTL_OPT)-1];
        } else if (strncmp(argv[i], CTLSTAR_OPT, sizeof(CTLSTAR_OPT)-1) == 0) {
            SETTINGS.OPTIONS.CTLSTAR = &argv[i][sizeof(CTLSTAR_OPT)-1];
        } else if (strncmp(argv[i], MU_OPT, sizeof(MU_OPT)-1) == 0) {
            SETTINGS.OPTIONS.MU = &argv[i][sizeof(MU_OPT)-1];
        } else if (access(argv[i], R_OK) == 0) {
            SETTINGS.OPTIONS.FNAME = argv[i];
        } else {
            Abort ("Unknown option or non-existant file: '%s'.", argv[i]);
        }
    }
    if (SETTINGS.OPTIONS.FNAME == NULL) Abort("Supply a file name.");
}


void
process_options(model_t model)
{
    options_t *O = &SETTINGS.OPTIONS;
    lts_type_t ltstype = GBgetLTStype(model);

    if (O->INVARIANT != NULL) {
        SETTINGS.INVARIANT = pred_parse_file(O->INVARIANT, ltstype);
    }
    if (O->LTL != NULL) {
        SETTINGS.LTL = ltl_parse_file(O->LTL, ltstype);
    }
    if (O->CTL != NULL) {
        SETTINGS.CTL = ctl_parse_file(O->CTL, ltstype);
    }
    if (O->CTLSTAR != NULL) {
        SETTINGS.CTLSTAR = ctl_parse_file(O->CTLSTAR, ltstype);
    }
    if (O->MU != NULL) {
        SETTINGS.MU = mu_parse_file(O->MU, ltstype);
    }
}
