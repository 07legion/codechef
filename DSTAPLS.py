# -*- coding: utf-8 -*-
# @Author: amish19
# @Date: 2019-05-12 00:18:45
# @Last Modified time: 2019-08-09 13:37:42

__ = int(input())
for ___ in range(0,__):
    amish, sharma = map(int, input().split()) 
    if amish*amish == sharma or sharma == 1 or amish % (sharma*sharma) == 0:
        print("NO")
    else: 
        print("YES")

# 5 1
# 4 2
# 10 10