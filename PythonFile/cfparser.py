# path : C:\Users\ViralChoksi\AppData\Roaming\Sublime Text 3\Packages\CFParser\cfparser

import sublime, os, sublime_plugin

class CfparserCommand(sublime_plugin.TextCommand):
	"""docstring for CodeforcesparserCommand"""
	def run(self, edit):
		dire = os.path.dirname(self.view.file_name())
		
		cmd = dire[0] + ': && ' + 'cd ' + dire + ' &&' + 'python D:\\Dhruv\\Codes\\C++\\ParsingWithPy.py'
		os.system(cmd)