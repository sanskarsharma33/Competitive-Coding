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


TestCase = 1
elemenator = '$###%###%#############%###%###$\n'

cmd = ["g++", "D:\\Dhruv\\Codes\\C++\\1.cpp", "-std=c++14", "-o", "D:\\Dhruv\\Codes\\C++\\1"]
subprocess.call(cmd)

ifile = open('ParsedInput.txt', 'r')
ofile = open('ParsedOutput.txt', 'r')
dwrite = open('DEBUG.txt', 'a')

idata = ''

for line in ifile.readlines():
	if line == elemenator:

		dwrite.write('\n=================================================================================\n\n')
		dwrite.write('Test #' + str(TestCase) + '  ')
		print('\n=============\n')
		print('Test #' + str(TestCase) + '  ')
		
		iwrite = open('INPUT.txt', 'w+')
		for char in idata:
			iwrite.write(char)
		iwrite.close()

		print('input : ' + idata)
		cmd = ['D:\\Dhruv\\Codes\\C++\\1.exe']
		subprocess.call(cmd)
		while checkIfProcessRunning('1.exe'):
			timepass = True

		owrite = open('OUTPUT.txt', 'r')
		odata = ''
		urodata = ''

		while True:
			oline = ofile.readline()
			if oline == elemenator:
				break
			odata += oline

		for line in owrite.readlines():
			urodata += line

		Passed = (urodata == odata)

		if Passed:
			dwrite.write('Passed\n')

			print('Passed\n')
		else:
			dwrite.write('Failed\n\n')
			dwrite.write('----Expected-------\n\n' + odata)
			dwrite.write('\n-------------------\n\n')
			dwrite.write('----Your O/P-------\n\n' + urodata)
			dwrite.write('\n-------------------\n')

			print('Failed\n')
			print('--Expected-------\n' + odata, end = '')
			print('---------------\n')
			print('--Your O/P-------\n' + urodata, end = '')
			print('---------------\n')

		owrite.close()
		idata = ''
		TestCase += 1
		print('=============')

	else:
		idata += line

dwrite.write('\n=================================================================================')

ifile.close()
ofile.close()
dwrite.close()