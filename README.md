# Model Checker Framework

This model checking framework is based on the language-independent 
*Partitioned Next-State Interface* [1], or PINS. The PINS interface contains
function definitions for the following functionality:

1. The type of the transition system:
    - State vector length and variable names / types
    - Number of actions (groups in PINS)
2. An initial state function
3. A partitioned next-state function to calculate the successors of a state.

The next-state function is partitioned according to the actions in the
transition system. Each action can be defined over a subset of the 
state variables of the system, namely solely those that the action may write
to and those that it may read from.

A language module should provide implementations of the above functions
according to the language's semantics. For an imperative language, the
logical approach is to create one action for each (atomic) statement
in each thread of the program. PINS does not need to know about the threading
model. Instead, the model checker simply tries all actions on all states
to explore all interleavings. The next section provides an example.


## PINS langugae module

For example, if the state vector consists
of the variables:
```
pc_1, x, y, z, pc_2, a, b, c
``` 
TODO


## Running the model checker

Execute:
>  cmake .
>  make


## Running the code

After compilation, the binary `mc` is located in `src/`.
To run it, use the folowing command:
>  src/mc <input>

For a list of command line options type:
>  src/mc --help

## Examples
Example from different input languages (DVE [2], Promela [3], PNML [4]) can
be found in in the directory `examples/`. Run an example with e.g. the command:
> src/mc examples/Kanban-PT-0010.pnml

*Note:*
Several of these input languages (DVE and Promela) are not interpreted,
but compiled to a PINS module, meaning that C/C++ code is generated for each
input model in that language. To avoid dependencies on separate tools,
the generated code for these inputs is provided in `examples/`
(the `c` and `cpp` files). To compile them to libraries implementing PINS, execute:
> cmake exmaples
Now the examples can be verified with, e.g.:
> src/mc X509.pr.dylib
> src/mc leader_election.6.dve.dylib

The directory `examples/models` contains the original models before code generation.
The file `examples/models/models.xlsx` contains some information on the number of
states and transitions in each example.


## Modifying the code

TODO








[1] Kant, G., Laarman, A., Meijer, J., van de Pol, J., Blom, S., & van Dijk, T.
    (2015). LTSmin: high-performance language-independent model checking.
    In TACAS 2015 (pp. 692-707). Springer.
 