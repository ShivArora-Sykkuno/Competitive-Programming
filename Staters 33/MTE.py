for _ in range(int(input())):
    num = int(input())
    arr = list(map(int, input().split()))
    res = 0
    for x in arr:
        if x % 2 == 0:
            res += 1
    if (num - res) % 2 == 0:
        print(int(min(float(res), (num - res) / 2)))
    else:
        print(int(res))
        print(int(res))