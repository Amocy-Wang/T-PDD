# T-PDD

This repo is currently being used for the peer-review phase of ISSRE 2023. As mentioned in Section IV-B1, the detailed results of each subject in RQ1 is presented in file *RQ1-Detailed_Results.xlsx*. Once the paper is accepted, we plan to publish a Dockerfile to facilitate the reproduction of our evaluation. The Dockerfile will contain all the necessary instructions and dependencies to set up the environment and execute the evaluation process.

Included in this repository are the following:
- RQ1-Detailed_Results.xlsx: Detailed results of RQ1 in our draft
- Folder collectBugs: Our curated dataset
- T-PDD.jar: Executable tool of T-PDD
- Folder scripts: Contains execution and analysis scripts.

## Examples for execution
```
cd /path/to/T-PDD
mkdir workingspace && cd workingspace
# change the path in script runT-PDD_for_oursdata.sh to yours
# change the path in test function script r.sh of each subject
../scripts/runT-PDD_for_oursdata.sh crashGCC440Program gcc440crash.sh 29
# get detailed results of each subject in crashGCC440Program
python ../scripts/getResultsFromLog_for_oursdata.py /path/to/T-PDD/workingspace/T-PDD_crashGCC440Program 29
```

