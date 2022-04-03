for _ in range(int(input())):
    num = int(input())
    if num % 10 != 9:
        print(num + 1)
        continue
    temp = num + 1
    res = 0
    while temp % 10 == 0:
        temp /= 10
        res += 1
    if res % 2 == 0:
        print(num + 1)
    else:
        print(num + 2)