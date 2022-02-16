
for _ in range(int(input())):
	n, n1, n2 = list(map(int, input().split()))
	if (n == n1 + n2) | (n1 == n + n2) | (n2 == n1 + n):
		print("YES")
	else:
		print("NO")
