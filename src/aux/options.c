
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "aux/options.h"
#include "util/util.h"


void
parse_options(int argc, const char **argv)
{
    // Parse command line options:

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--por") == 0) {
            SETTINGS.POR = true;
        } else if (strcmp(argv[i], "--sym") == 0) {
            SETTINGS.SYM = true;
        } else if (access(argv[i], F_OK) == -1) {
            SETTINGS.FNAME = argv[i];
        } else {
            Abort ("Unknown option '%s'.", argv[i]);
        }
    }
    if (SETTINGS.FNAME == NULL) Abort("Supply a file name.");
}
