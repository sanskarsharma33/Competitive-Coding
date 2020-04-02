import subprocess
import os
from subprocess import Popen, PIPE
import psutil

def checkIfProcessRunning(processName):
    for proc in psutil.process_iter():
        try:
            if processName.lower() in proc.name().lower():
                return True
        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass
    return False;


print('Compiling Generator.cpp', end='    ')
cmd = ["g++", "D:\\Dhruv\\Codes\\C++\\3__Generator.cpp", "-std=c++14", "-o", "D:\\Dhruv\\Codes\\C++\\testing_gen"]
subprocess.call(cmd)
print('Compilation Done', end='\n')

print('Compiling 1.cpp', end='    ')
cmd = ["g++", "D:\\Dhruv\\Codes\\C++\\1.cpp", "-std=c++14", "-o", "D:\\Dhruv\\Codes\\C++\\testing"]
subprocess.call(cmd)
print('Compilation Done', end='\n')

j = 1
while True:

	print('Test #' + str(j), end='    ')

	cmd = ["testing_gen.exe"]
	subprocess.call(cmd)

	cmd = ["testing.exe"]
	subprocess.call(cmd)

	while checkIfProcessRunning('testing.exe') or checkIfProcessRunning('testing_gen.exe'):
		i = 1

	print('Execution Completed !!', end='\n')

	with open('D:\\Dhruv\\Codes\\C++\\DEBUG.txt','a+') as debugfile:
		debugfile.seek(0, os.SEEK_END)

		if debugfile.tell():
			end_of_program = True
		else:
			end_of_program = False

	j += 1

	if end_of_program:
		print('Program Terminated !!', end='\n')
		break