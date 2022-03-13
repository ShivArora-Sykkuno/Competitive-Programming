for _ in range(int(input())):
    x1,y1,x2,y2 = map(int,input().split())
    cost1 = y1/x1
    cost2 = y2/x2
    if cost1 < cost2:
        print(-1)
    elif cost1 == cost2:
        print(0)
    else:
        print(1)