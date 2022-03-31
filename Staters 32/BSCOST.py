for _ in range(int(input())):
    N, X, Y = map(int, input().split())
    tax = input()
    cnt_01 = 0
    cnt_10 = 0
    for i in range(len(tax)):
        if tax[i] == '1':
            cnt_01 += 1
        else:
            cnt_10 += 1
    if cnt_01 > 0 and cnt_10 > 0:
        print(min(X, Y))
    else:
        print(0)
