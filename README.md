
               A Probabilistic Delta Debugging Approach for Abstract Syntax Trees (T-PDD)
                                                --- an instance of delta debugging
                                
              Guancheng Wang, Yiqian Wu, Qihao Zhu,  Yingfei Xiong, Xin Zhang and Lu Zhang
             
                  Department of Computer Science and Technology, Peking University
                     College of Intelligence and Computing, Tianjin University
                                       

Please send issues and suggestions to <guancheng.wang@pku.edu.cn>.
# T-PDD

This repo is used as the artifact of our ISSRE 2023 paper. As mentioned in Section IV-B1, the detailed results of each subject in RQ1 is presented in file *RQ1-Detailed_Results.xlsx*. Once the paper is accepted, we plan to publish a Dockerfile to facilitate the reproduction of our evaluation. The Dockerfile will contain all the necessary instructions and dependencies to set up the environment and execute the evaluation process.

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

