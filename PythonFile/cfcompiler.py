# path : C:\Users\ViralChoksi\AppData\Roaming\Sublime Text 3\Packages\CFCompiler\cfcompiler

import sublime, os, sublime_plugin

class CfcompilerCommand(sublime_plugin.TextCommand):
	"""docstring for CfcompilerCommnad"""
	def run(self, edit):
		dire = os.path.dirname(self.view.file_name())

		cmd = dire[0] + ': && ' + 'cd ' + dire + ' && ' + 'python D:\\Dhruv\\Codes\\C++\\DGCompiler.py'
		os.system(cmd)