# -*- coding: utf-8 -*-
# @Author: amish19
# @Date: 2019-05-12 00:18:45
# @Last Modified time: 2019-08-09 15:31:26


__ = int(input())
for ___ in range(0,__):
	
	n = int(input())
	a1 = list(map(int, input().split()))
	a2 = list(map(int, input().split()))
	bt = []
	for _a in range(0,n+1):
	    bt.append(0)
	for i in range (1, n+1):
	    if i - a1[i-1] < 2:
	        bt[1] += 1
	    elif i - a1[i-1] > 1 and i - a1[i-1] < n + 1:
	        bt[i - a1[i-1]] += 1
	    if 1 + i + a1[i-1] < n + 1 and 1 + i + a1[i-1] > 0:
	        bt[1 + i + a1[i-1]] -= 1
	for i in range(2,n+1):
	    bt[i] += bt[i-1]
	    
	bt.sort()
	a2.sort()
	flag = True
	for i in range(1,n+1):
	    if bt[i] != a2[i-1]:
	        flag = False
	        break
	if flag == True:
	    print("YES")
	else:
	    print("NO")
# 2
# 5
# 1 2 3 4 5
# 1 2 3 4 5
# 5
# 1 2 3 4 5
# 5 4 3 4 5