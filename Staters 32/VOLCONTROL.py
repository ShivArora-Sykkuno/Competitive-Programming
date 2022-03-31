for _ in range(int(input())):
    arr = list(map(int, input().split()))
    if arr[0] < arr[1]:
        print(arr[1]- arr[0])
    else:
        print(arr[0] - arr[1])