for _ in range(int(input())):
    num = int(input())
    arr = list(map(int, input().split()))
    Sum, temp, res = sum(arr), 1, 0
    while Sum > 0:
        Sum -= temp
        res += 1
        temp += 1
    if Sum < 0:
        print(res - 1)
    else:
        print(res)
