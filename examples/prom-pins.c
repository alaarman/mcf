#include <dlfcn.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include "dm/dm.h"
#include "loader/prom-pins.h"
#include "pins/ltsmin-standard.h"
#include "pins/pins-util.h"
#include "util/chunk_support.h"
#include "util/runtime.h"
#include "util/util.h"



// set the name of this PINS plugin
char pins_plugin_name[] = "SpinS";

void pins_model_init(model_t model)
{
    printf("test\n");
}
