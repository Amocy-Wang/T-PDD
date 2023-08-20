import subprocess
import os 
import sys 

subjects = ['clang-22382','clang-22704','clang-23309','clang-23353','clang-25900','clang-26760','clang-27137','clang-27747','clang-31259','gcc-59903','gcc-60116','gcc-61383','gcc-61917','gcc-64990','gcc-65383','gcc-66186','gcc-66375','gcc-70127','gcc-70586','gcc-71626']

prefixFolder = "/path/to/work/" + sys.argv[1]
logFileName = "log"

commandPrefix = "tail -n 5 "

def checkLogFolderExist(folderPath):
  if os.path.isdir(folderPath):
    return True
  return False

def get_command_output(command):
  try:
      output_bytes = subprocess.check_output(command.split())
      output_string = output_bytes.decode("utf-8")
      return output_string
  except subprocess.CalledProcessError as e:
      print("Error running command: {e}")

for subj in subjects:
  resultFolder = prefixFolder + subj
  if not checkLogFolderExist(resultFolder):
    continue
  resultLog = resultFolder + "/" + logFileName
  tailCommand = commandPrefix + resultLog
  str2parse = get_command_output(tailCommand)
  if "Test script execution count" not in str2parse: 
    print(subj+",,,")
    continue
  outsplit = str2parse.split('\n')
  timestr = outsplit[2].strip().split(" ")[8]
  sizestr = outsplit[3].strip().split("/")[0].split(" ")[-1]
  print(subj+","+sizestr+","+timestr)
  
  
  



