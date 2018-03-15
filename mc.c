
/**
 * Your first model checker
 *
 * PINS = Partitioned Next-State Interface
 * (previously called 'greybox', hence the mix of GB* / pins_* functions)
 */

#include <stdbool.h>
#include <unistd.h>

#include "alg/enum-dfs.h"
#include "alg/sym-bfs.h"
#include "loader/loader.h"
#include "pins/pins.h"
#include "pins/pins-util.h"
#include "pins2pins/por.h"
#include "util/runtime.h"
#include "util/util.h"

/**
 * Load model & Setup the search
 */
int main(int argc, const char **argv) {

    // Parse command line options:
    const char *fname = NULL;
    bool    POR = false;
    bool    SYM = false;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--por") == 0) {
            POR = true;
        } else if (strcmp(argv[i], "--sym") == 0) {
        	SYM = true;
        } else if (access(fname, F_OK) == -1) {
            fname = argv[i];
            Print ("Using model in file '%s'", argv[i]);
        } else {
            Abort ("Unknown option '%s'.", argv[i]);
        }
    }
    if (fname == NULL) Abort("Supply a file name.");

    // Load PINS model:
    model_t model = GBcreateBase();
    GBsetChunkMap (model, simple_table_factory_create());
    pins_model_loader (model, fname);
    if (POR) {
        Print("Activating Partial Order Reduction layer");
        model = pins2pins_por(model); // wrap model
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

    if (SYM) {
        alg_sym_bfs (model);
    } else {
        alg_enum_dfs (model);
    }
}
