#!/bin/bash
if [ $# -ne 3 ]; then
    echo "Usage: $0 datasetName scriptName programTotalNum"
    exit 1
fi
datasetName=$1
scriptName=$2
end=$3
smallPRepo="/path/to/dataset/collectBugs/$datasetName"
testscriptPath="/path/to/dataset/collectBugs/$scriptName"
for i in $(seq 1 $end);
do
    if [ -d "/path/to/work/T-PDD_$i" ]; then
    echo "$i Done. Next..."
    continue
    fi
    echo $i
    mkdir /path/to/work/T-PDD_$datasetName$i
    cp $testscriptPath /path/to/work/T-PDD_$datasetName$i/r.sh
    cp $smallPRepo/buggyp$i.c /path/to/work/T-PDD_$datasetName$i/small.c
    (cd /path/to/work/T-PDD_$datasetName$i && java -jar T-PDD.jar --use-real-ddmin true --test-script r.sh --input-file small.c > log 2>&1)
    cd /path/to/work
done
