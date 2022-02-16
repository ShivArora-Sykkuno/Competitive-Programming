

for _ in range(int(input())):
    n, x, y = map(int, input().split())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    flag = True
    for i in range(len(arr1)):
        if (arr1[i]+x == arr2[i]) | (arr1[i]+y == arr2[i]):
            continue
        else:
            flag = False
            break
    print('YES' if flag else 'NO')