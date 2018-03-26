#!/bin/bash

# Compilation uses:
# - Modified version of DiVinE 2:
#   https://github.com/utwente-fmt/divine2
# - SpinS: 
#   https://github.com/utwente-fmt/spins

cd ..
for a in models/prom/*; do
    spins -I $a
done

for a in model/dve/*; do
    divine compile -l $a
done


