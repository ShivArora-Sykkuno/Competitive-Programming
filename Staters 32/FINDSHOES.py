for _ in range(int(input())):
    N, M = list(map(int, input().split()))
    if M == 0 :
        print(N * 2)
    else:
        if M < N:
            temp = N - M
            print(N + temp)
        else:
            print(N)