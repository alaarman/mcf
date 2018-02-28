
#include <dlfcn.h>
#include <fcntl.h>
#include <limits.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <dm/dm.h>
#include <loader/dlopen-pins.h>
#include <pins/dlopen-api.h>
#include <util/runtime.h>
#include <util/stringindex.h>
#include <util/tables.h>
#include <util/util.h>



void DLloadModel(model_t model,const char*name){
    void* dlHandle = RTdlopen(name);
    char* pins_name = RTdlsym(name,dlHandle,"pins_plugin_name");
    Print ("loading model %s",pins_name);
    init_proc init = RTtrydlsym(dlHandle,"init");
    if (init!=NULL){
        Print ("Initializing %s plugin", pins_name);
        char *argv[2];
        argv[0]="mc";
        argv[1]=NULL;
        init(1,argv);
    }
    
    pins_model_init_proc model_init=RTtrydlsym(dlHandle,"pins_model_init");
    if (model_init!=NULL) {
        model_init(model);
    } else {
        Abort("Could not find a model.");
    }
    
	Print("completed loading model %s",pins_name);
}

