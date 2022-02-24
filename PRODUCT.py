def gcd(A, B):
	if B == 0:
		return A
	else:
		return gcd(B, A % B)
for _ in range(int(input())):
	B, C = map(int, input().split())
	print(C // (gcd(B, C)))