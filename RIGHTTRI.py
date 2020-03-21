import math

if __name__ == '__main__' :
	__ = int(input())
	for ___ in range(0,__) :
		h,s = map(int,input().split())
		t = (h**4) - (16 * s * s)
		if t < 0 :
			print(-1)
		else :
			t_sq = t**0.5
			a1 = (((h*h) + t_sq)/2) ** 0.5
			# a2 = -1
			# if ((h*h) > t_sq) :
				# a2 = (((h*h)-t_sq)/2) ** 0.5
			b1 = (2*s)/a1
			print(*sorted([a1,b1,h]))
			# b2 = -1
			# if a2 != -1:
				# b2 = (2*s)/a2;
			# if (((a1*a1) + (b1*b1) == (h*h))) :
			# 	if(a1 < b1) :
			# 		print((a1), end = ' ')
			# 		print((b1), end = ' ')
			# 	else :
			# 		print((b1), end = ' ')
			# 		print((a1), end = ' ')
			# 	print(h)
			# elif (a2 != -1 and b2 != -1 and (((a2*a2) + (b2*b2) == h*h))):
			# 	if(a2 < b2) :
			# 		print(round(a2), end = ' ')
			# 		print(round(b2), end = ' ')
			# 	else :
			# 		print(round(b2), end = ' ')
			# 		print(round(a2), end = ' ')
			# 	print(h)
			# else :
			# 	print(-1)