# -*- coding: utf-8 -*-
# @Author: amish19
# @Date: 2019-05-12 00:18:45
# @Last Modified time: 2019-08-09 13:53:01

__ = int(input())
for ___ in range(0,__):
    s = input()
    if len(s) == 1:
        if(s == "1"):
            print("WIN")
        elif(s == "0"):
            print("LOSE")
    else :
        amish = 0
        sharma = 0
        for ch in s:
            if ch == '0': 
                amish = amish + 1
            else:
                sharma = sharma + 1
        if sharma % 2 != 0:
            print("WIN")
        else:
            print("LOSE")

# 1
# 10