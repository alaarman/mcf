
/**
 * Your first LTL model checker
 *
 * PINS = Partitioned Next-State Interface
 * (previously called 'greybox', hence the mix of GB* / pins_* functions)
 */

#include <iostream>
#include <set>
#include <stack>
#include <vector>

#include <unistd.h>

extern "C" {
#include "loader/loader.h"
#include "pins/pins.h"
#include "pins/pins-util.h"
#include "pins2pins/por.h"
#include "util/runtime.h"
#include "util/util.h"
}

using namespace std;

static size_t progress = 10000;

class Search {
  public:
    // Model
    model_t model = NULL;
    size_t state_size_int;

    // Search
    set< vector<int> >    visited;
    stack< vector<int> >  stacked;
    size_t states;
    size_t trans;
    size_t deadlocks;
};

void print_state(Search *S, int *state) {
    for(size_t i = 0; i < pins_get_state_label_count(S->model); i++)
        printf("%d, ", state[i]);
    printf("\n");
}

/**
 * Callback processing successors
 */
void process_cb(void *ctx, transition_info_t *ti, int *dst, int *cpy) {
    Search *S = (Search *) ctx;
    S->trans++;
    vector<int> state = vector<int>(dst, dst + S->state_size_int);
    S->stacked.push(state);
}

/**
 * Perform search
 */
void search(Search *S){
    while(!S->stacked.empty()){
        vector<int> cur = S->stacked.top();
        S->stacked.pop();

        // check if already visited
        if(S->visited.find(cur) != S->visited.end())
            continue;
        S->visited.insert(cur);

        S->states++;
        if (S->states == progress) {
            std::cout << "States explored: " << S->states << ", transitions: "<< S->trans << endl;
            progress <<= 1; // times 2
        }
        size_t count = GBgetTransitionsAll(S->model, &cur[0],
                                           process_cb, (void *) S);
        S->deadlocks += count == 0;
    }
}

/**
 * Load model & Setup the search
 */
int main(int argc, const char **argv) {

    // Parse command line options
    const char *fname = NULL;
    bool    POR = false;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--por") == 0) {
            POR = true;
        } else if (access(fname, F_OK) == -1) {
            fname = argv[i];
            Print ("Using model in file '%s'", argv[i]);
        } else {
            Abort ("Unknown option '%s'.", argv[i]);
        }
    }
    if (fname == NULL) Abort("Supply a file name.");

    // Load PINS model
    model_t model = GBcreateBase();
    GBsetChunkMap (model, simple_table_factory_create());
    pins_model_loader (model, fname);
    if (POR) {
        model = pins2pins_por(model); // wrap model
    }


    // Print model info:
    size_t l = pins_get_state_variable_count(model);
    std::cout << "State vectors are " << l << " * 32-bit long" << endl;
    std::cout << "State slots are: " << endl << "\t";
    for (size_t i = 0 ; i < l; i++)
        std::cout << pins_get_state_name(model, i) << ", ";
    std::cout << endl << endl;
    std::cout << "There are " << pins_get_state_label_count(model) << " state labels" << endl;
    std::cout << "State labels are (skipping guards): " << endl << "\t";
    for (size_t i = 0 ; i <  pins_get_state_label_count(model); i++)
        if (strncmp(pins_get_state_label_name(model, i), "guard", 5) != 0)
            std::cout << pins_get_state_label_name(model, i) << ", ";
    std::cout << endl << endl;

    // setup search
    Search S;
    S.model = model;
    S.state_size_int = l;
    S.states = S.trans = S.deadlocks = 0;
    vector<int> initial = vector<int> (S.state_size_int);
    GBgetInitialState (model, &initial[0]);
    S.stacked.push(initial);

    // Start search
    rt_timer_t timer = RTcreateTimer();
    RTstartTimer(timer);
    search(&S);
    RTstopTimer(timer);
    RTprintTimer(timer, "\nTotal exploration time");
    std::cout << "State space has " << S.states << " state, "<<
                                       S.trans << " transitions, and " <<
                                       S.deadlocks << " deadlocks"
                                       << endl;
}
