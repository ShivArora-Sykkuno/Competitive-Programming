for _ in range(int(input())):
    size = int(input())
    arr = list(map(int, input().split()))
    mapp = dict()
    for i in arr:
        if i in mapp:
            mapp[i] += 1
        else:
            mapp[i] = 1
    mex = 0
    flag = True
    for k, v in sorted(mapp.items()):
        if (v >= 2) & (mex >= k):
            mex = k + 1
        elif (mex >= k) & (v < 2):
            flag = False

    if flag == False:
        print("NO")
    else:
        print("YES")
