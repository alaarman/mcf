
/**
 * Your first model checker
 *
 * PINS = Partitioned Next-State Interface
 * (previously called 'greybox', hence the mix of GB* / pins_* functions)
 */

#include <signal.h>
#include <unistd.h>

#include "alg/enum-dfs.h"
#include "alg/sym-bfs.h"
#include "aux/options.h"
#include "loader/loader.h"
#include "pins/pins.h"
#include "pins/pins-util.h"
#include "pins2pins/ltl.h"
#include "pins2pins/group.h"
#include "pins2pins/por.h"
#include "pins2pins/tr.h"
#include "util/runtime.h"
#include "util/util.h"


static void
exit_mcf (int sig)
{
    if ( SETTINGS.STOPPED == 0 ) {
        SETTINGS.STOPPED = 1;
        Print ("PREMATURE EXIT (caught signal: %d)", sig);
    } else {
        Abort ("UNGRACEFUL EXIT");
    }
}

/**
 * Load model & Setup the search
 */
int main(int argc, const char **argv) {

    parse_options (argc, argv);
    Print ("Loading next-state implementation from file '%s'", SETTINGS.OPTIONS.FNAME);

    SETTINGS.STOPPED = 0;
    (void) signal (SIGINT, exit_mcf);

    // Load PINS model:
    model_t model = GBcreateBase();
    GBsetChunkMap (model, simple_table_factory_create());
    pins_model_loader (model, SETTINGS.OPTIONS.FNAME);

    process_options (model);

    if (SETTINGS.OPTIONS.REGROUP) {
        Print("Activating regrouping layer for ordering specification '%s'", SETTINGS.OPTIONS.REGROUP);
        model = pins2pins_regroup(model); // wrap model
    }
    if (SETTINGS.OPTIONS.POR) {
        Print("Activating Partial Order Reduction layer");
        model = pins2pins_por(model); // wrap model
    }
    if (SETTINGS.OPTIONS.TR) {
        Print("Activating Transaction Reduction layer");
        model = pins2pins_tr(model); // wrap model
    }
    if (SETTINGS.OPTIONS.LTL) {
        Print("Activating LTL layer for property '%s'", SETTINGS.OPTIONS.LTL);
        model = pins2pins_ltl(model); // wrap model
    }

    // Print model info:
    size_t l = pins_get_state_variable_count(model);
    Print("State vectors are %zu * 32-bit long", l);
    Print("State slots are:");
    Print0("\t");
    for (size_t i = 0 ; i < l; i++)
            Print0("%s,", pins_get_state_name(model, i));
    Print(" ");
    Print("There are %zu state labels", pins_get_state_label_count(model));
    Print("State labels are (skipping guards): ");
    Print0("\t");
    for (size_t i = 0 ; i <  pins_get_state_label_count(model); i++)
        if (strncmp(pins_get_state_label_name(model, i), "guard", 5) != 0)
            Print0("%s,", pins_get_state_label_name(model, i));
    Print(" ");

    if (SETTINGS.OPTIONS.SYM) {
        alg_sym_bfs (model);            // Symbolic reachability
    } else {
        alg_enum_dfs (model);           // Enumerative reachability
    }
}
