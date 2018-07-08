#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import glob
import re

'''
#指定する画像フォルダ
files = glob.glob('AOJ/*')
print(files)

for file in files:
    new = file.replace("-", "_")
    new = new.replace("aoj", "AOJ")
    print(new)
    os.rename(file, new)
'''

#指定する画像フォルダ
files = glob.glob('AtCoder/*.cpp')
print(files)

for file in files:
    new = re.search(r'atcoder/(.+.cpp)', file.lower()).group(1)
    #print(new)
    new = './AtCoder/' + new
    print(new)
    os.rename(file, new)
