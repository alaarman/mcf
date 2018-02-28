
#include <loader/loader.h>
#include <loader/dlopen-pins.h>
#include <loader/dve-pins.h>
#include <loader/prom-pins.h>
#include <pins/pins.h>
#include <pins/ltsmin-standard.h>
#include <util/util.h>


void
pins_model_loader (model_t model, const char *name)
{
    char *extension = strrchr (name, '.');
    Assert (extension != NULL, "No filename extension %s", name);
    ++extension;
    if (strncmp(extension, "dve", 3) == 0) {
        DVE2loadModel(model, name);
    } else if (strcmp(extension, "spins") == 0) {
        PromLoadModel(model, name);
    } else if (strcmp(extension, "pm") == 0) {
        PromLoadModel(model, name);
    } else if (strcmp(extension, "prom") == 0) {
        PromLoadModel(model, name);
    } else if (strcmp(extension, "garp") == 0) {
        PromLoadModel(model, name);
    } else if (strcmp(extension, "pr") == 0) {
        PromLoadModel(model, name);
    } else if (strcmp(extension, "promela") == 0) {
        PromLoadModel(model, name);
    } else if (strcmp(extension, "dylib") == 0) {
        DLloadModel(model, name);
    } else if (strcmp(extension, "so") == 0) {
        DLloadModel(model, name);
    } else {
        Print("No loader for extension .%s", extension);
        exit(1);
    }
}
