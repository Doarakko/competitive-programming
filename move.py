#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os, glob, re, shutil

code_path_list = glob.glob('AtCoder/*/*/*.cpp')

for code_path in code_path_list:
    dir_name = re.search(r'AtCoder/.+/(.+)/.+cpp', code_path)
    dir_name = dir_name.group(1)
    dir_path = re.search(r'(AtCoder/.+/.+)/.+cpp', code_path)
    dir_path = dir_path.group(1)
    src_path = dir_path + '/' + dir_name + '.cpp'
    os.rename(code_path, src_path)
    dst_path = 'AtCoder/' + dir_name + '.cpp'
    #print(file_path)
    shutil.move(src_path, dst_path)