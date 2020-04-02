import subprocess
import psutil
import DhruvGheewalaUtilFile as dg

# output checker
def outputChecker(expected, obtained):
	return expected == obtained

# elemenator
def isElemenator(line):
	for i in range(len(dg.elemenator)):
		if line[i] != dg.elemenator[i]:
			return False
	return True

# styling...
def styleWrite():
	return '\n====================================================================================\n'

def giveTestWrite(tc):
	return 'Test #' + str(tc) + ' '

# writes data as per indentation_string
def writeIndent(data, indentation_string):
	res = ''
	line = ''
	space = len(indentation_string)

	for ch in data:
		if ch == '\n':
			for i in range(space):
				res += ' '
			res += line + '\n'
			line = ''
		else:
			line += ch
	return res

def checkIfProcessRunning(processName):
    for proc in psutil.process_iter():
        try:
            if processName.lower() in proc.name().lower():
                return True
        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass
    return False;


TestCase = 1

print('Compiling File 1.cpp...')
cmd = ['g++', dg.path + '1.cpp', '-std=c++14', '-o', dg.path + '1']
subprocess.call(cmd)
print('Compiled SuccedFully...')

pifile = open(dg.path + 'ParsedInput.txt', 'r')
pofile = open(dg.path + 'ParsedOutput.txt', 'r')
dfile = open(dg.path + 'DEBUG.txt', 'a')

inputs = ''

for line in pifile.readlines():

	if isElemenator(line):
		ifile = open(dg.path + 'INPUT.txt', 'w')
		ofile = open(dg.path + 'OUTPUT.txt', 'r')


		dfile.write(styleWrite())
		dfile.write(giveTestWrite(TestCase))
		
		print(styleWrite(), end = ' ')
		print(giveTestWrite(TestCase), end = ' ')

		

		for char in inputs:
			ifile.write(char)
		ifile.close()


		print('input : ')
		print(writeIndent(inputs, giveTestWrite(TestCase) + ' input :   '), end = '')
		

		print('Running File...')
		cmd = [dg.path + '1.exe']
		subprocess.call(cmd)
		while checkIfProcessRunning('1.exe'):
			timepass = True



		expected = ''
		obtained = ''


		while True:
			opline = pofile.readline()
			
			if isElemenator(opline):
				break

			# removing extra '\n'
			if opline != '\n':
				expected += opline


		for opline in ofile.readlines():
			# removing extra '\n'
			if opline != '\n':
				obtained += opline


		isPassed = outputChecker(expected, obtained)
		if isPassed:
			dfile.write('Passed' + '\n')
			print(' Passed', end = ' ')
		else:
			dfile.write('Failed\n')
			dfile.write('Expected : \n')
			dfile.write(writeIndent(expected, 'Expected :   ') + '\n')
			dfile.write('Obtained : \n')
			dfile.write(writeIndent(obtained, 'Obtained :   ') + '\n')

			print('Failed')
			print('Expected : ')
			print(writeIndent(expected, 'Expected :   '))
			print('Obtained : \n')
			print(writeIndent(obtained, 'Obtained :   '))

		
		inputs = ''
		TestCase += 1


		ifile.close()
		ofile.close()

	else:
		
		inputs += line

dfile.write(styleWrite())
print(styleWrite(), end = ' ')


pifile.close()
pofile.close()
dfile.close()

# to hold the screen
dg.holdScreen()