#ifndef SPINS_PINS_H
#define SPINS_PINS_H

/**
 * \file prom-greybox.h
 * PINS interface for promela successor generator.
 * @inproceedings{eemcs22042,
             month = {September},
            author = {F. I. {van der Berg} and A. W. {Laarman}},
         num_pages = {8},
            series = {Electronic Notes in Theoretical Computer Science},
            editor = {N. {Thomas} and K. {Heljanko}}},
           address = {London},
         publisher = {Elsevier},
              note = {http://eprints.eemcs.utwente.nl/22042/},
          location = {London, UK},
       event_dates = {17 Sept. 2012},
         booktitle = {11th International Workshop on Parallel and Distributed Methods in verifiCation, PDMC 2012, London, UK},
             title = {{SpinS: Extending LTSmin with Promela through SpinJa}},
              year = {2012}
 }
 *
 */


#include "pins/pins.h"


/**
Load a spins model.
*/
extern void PromLoadModel(model_t model, const char *name);

#endif
