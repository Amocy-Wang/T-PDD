#!/bin/bash
for i in 'gcc-60116' 'gcc-71626' 'gcc-70586' 'gcc-70127' 'gcc-66375' 'gcc-66186' 'gcc-65383' 'gcc-64990' 'gcc-61917' 'gcc-61383' 'gcc-59903' 'clang-31259' 'clang-27747' 'clang-27137' 'clang-26760' 'clang-25900' 'clang-23353' 'clang-23309' 'clang-22704' 'clang-22382';
do
    if [ -d "/path/to/work/T-PDD_$i" ]; then
    echo "$i Done. Next..."
    continue
    fi  
    echo $i
    mkdir /path/to/work/T-PDD_$i
    cp /path/to/dataset/$i/small.c.origin.c /path/to/work/T-PDD_$i/small.c
    cp /path/to/dataset/$i/r.sh /path/to/work/T-PDD_$i/r.sh
    (cd /path/to/work/T-PDD_$i && java -jar /path/to/work/T-PDD.jar --fixpoint false --use-real-ddmin true --test-script r.sh --input-file small.c > log 2>&1)
    cd /path/to/work
done
