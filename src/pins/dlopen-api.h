#ifndef PINS_DLOPEN_API_H
#define PINS_DLOPEN_API_H

/**
\file dlopen-api.h
*/

#include <pins/pins.h>


typedef void(*pins_loader_t)(model_t model,const char*filename);

/**
\brief To abort exectution, this method should be called by the plug in.
*/
extern void ltsmin_abort(int code) __attribute__ ((noreturn));

/**
\brief Variable containing the name of the plugin.
 */
extern char pins_plugin_name[];


/**
\brief Type of initializer.
 */
typedef void (*init_proc)(int argc,char* argv[]);
/**
 Optional initializer procedure;
 */
extern void init(int argc,char* argv[]);


/**
\brief Type of a model initialization function.
*/
typedef void (*pins_model_init_proc)(model_t model);
/**
\brief Optional model initializing function. Used for a single model plugin.
*/
extern void pins_model_init(model_t model);

#endif

