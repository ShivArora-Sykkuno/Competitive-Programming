# Python3 program for the above approach

# Function to check if we can split
# array into pairs of even sum or not


def canPairs(arr, n):
	odd_count = 0
	even_count = 0
	for i in range(0, n):
		if (arr[i] % 2 == 0):
			even_count = even_count + 1
		else:
			odd_count = odd_count + 1

	if ((even_count % 2 == 0) and (odd_count % 2 == 0)):
		return True

	return False




for _ in range(int(input())):
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	if (canPairs(arr, n)):
		print("Yes")
	else:
		print("No")

