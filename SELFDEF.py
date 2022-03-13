for _ in range(int(input())):
    n = int(input())
    res = 0
    x = list(map(int, input().split()))
    for i in x:
        if i >= 10 and i<= 60:
            res += 1
    print(res)