for _ in range(int(input())):
    x, a, b = map(int, input().split())
    if a+2 * b < x:
        print("NotQualify")
    else:
        print("Qualify")