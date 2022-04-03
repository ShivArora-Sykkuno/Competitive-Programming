for _ in range(int(input())):
    num = int(input())
    arr = list(map(int, input()))
    if 5 in arr:
        print("Yes")
    elif 0 in arr:
        print("Yes")
    else:
        print("No")