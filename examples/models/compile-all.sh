
cd ..
for a in models/prom/*; do
    spins -I $a
done

for a in model/dve/*; do
    divine compile -l $a
done


