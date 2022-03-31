for _ in range(int(input())):
    N, M, K = map(int, input().split())
    temp =  M - K
    if temp >= N :
        print("Yes")
    else:
        print("No")