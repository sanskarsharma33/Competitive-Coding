import subprocess
import DhruvGheewalaUtilFile as dg

# 1 problem only 
contest_id = ""

if(len(contest_id)):
    prob_no = input('problem : ')
else:
    f = open(dg.path + '1.cpp', 'r')
    string = f.readline()
    string = string[3:]
    contest_id, prob_no = string.split('@')
    print('Contest Id : ' + contest_id)
    print('Problem No : ' + prob_no)

import os
import sys
import requests
import time
from bs4 import BeautifulSoup
  
# Extract i/o statements for the problem 
def get_contest_io(contest_problem_url,contest_id,prob_no):

    url = 'https://codeforces.com/contest/{}/problem/{}'.format(contest_id,prob_no)
    page = requests.get(url, verify = True)
    soup = BeautifulSoup(page.text, 'html.parser')

    inp = soup.findAll('div', attrs={"class" : "input"})
    out = soup.findAll('div', attrs={"class" : "output"})

    ifname = open(dg.path + 'ParsedInput.txt',"w")
    ofname = open(dg.path + 'ParsedOutput.txt',"w")

    for i in range(len(inp)):

        inputs = ''
        outputs = ''

        x = inp[i].get_text(separator="\n")
        y = out[i].get_text(separator="\n")

        i1 = 5
        while(x[i1]=="\n"):
            i1 += 1

        inputs = inputs + x[i1:] + "\n"
        # if(x[-1]!="\n"):
        #     inputs = inputs + "\n"

        i2 = 6
        while(y[i2]=="\n"):
            i2 += 1

        outputs = outputs + y[i2:]
        if(y[-1]!="\n"):
            outputs = outputs + "\n"

        ifname.write(inputs + dg.elemenator + '\n')
        ofname.write(outputs + dg.elemenator + '\n')

    ifname.close()
    ofname.close()


#---------------------------------MAIN---------------------------------------------#

contest_url = 'https://codeforces.com/contest/'

# fetch
contest_url = contest_url + contest_id
page = requests.get(contest_url, verify = True)
if(page.status_code != 200):
    print("Failed to retrive contest {} !!!".format(contest_id))
    exit(1)
soup = BeautifulSoup(page.text, 'html.parser') #page.text contains the html or the page source
contest_problem_url = 'https://codeforces.com/contest/{}/problem/'.format(contest_id)

get_contest_io(contest_problem_url,contest_id,prob_no)
print('Data Parsed !!')

cmd = ['python', 'DGCompiler.py']

# holding screen
dg.holdScreen()