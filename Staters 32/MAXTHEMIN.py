for _ in range(int(input())):
    N, K = map(int, input().split())
    arr = sorted(list(map(int, input().split())))
    print(arr[min(K, N-1)])