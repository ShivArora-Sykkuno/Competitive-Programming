
for _ in range(int(input())):
	num = int(input())
	st = input()
	res = num
	for i in range(1, num):
		if(st[i]== st[i-1]):
			res -= 1
	print(res)