# -*- coding: utf-8 -*-
# @Author: amish19
# @Date: 2019-05-12 00:18:45
# @Last Modified time: 2019-08-09 13:14:46


test = int(input())
for _t in range(0,test):
	n = int(input())
	a1 = list(map(int, input().split()))
	a2 = list(map(int, input().split()))
	ans = []
	for i in range(0,n):
		ans.append((a1[i]*20) - (a2[i]*10))
	ans.sort(reverse = True)	
	if ans[0] < 0:
		print(0)
	else:
		print(ans[0]) 

# 2
# 3
# 40 30 50
# 2 4 20
# 1
# 0
# 10