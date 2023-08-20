import subprocess
import os 
import sys 

prefixFolder = sys.argv[1] #given two parameters, e.g., /path/to/work/subject-1 totalnumberofsubjects
subjects = range(1,int(sys.argv[2])+1)
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
  subj = str(subj)
  resultFolder = prefixFolder + subj
  if not checkLogFolderExist(resultFolder):
    continue
  resultLog = resultFolder + "/" + logFileName
  tailCommand = commandPrefix + resultLog
  str2parse = get_command_output(tailCommand)
  if "Test script execution count" not in str2parse: 
    continue
  outsplit = str2parse.split('\n')
  #print(outsplit[2]) # time
  #print(outsplit[3]) # size
  #print(outsplit[4]) # queries
  timestr = outsplit[2].strip().split(" ")[8]
  sizestr = outsplit[3].strip().split("/")[0].split(" ")[-1]
  orisizestr = outsplit[3].strip().split("/")[1].split("=")[0]
  print(subj+","+orisizestr+","+sizestr+","+timestr)
  
  
  



