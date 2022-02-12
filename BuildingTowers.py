for _ in range(int(input())):
    x, m = map(int, input().split())
    moves = 1
    height = 1
    while(height < x):
        height *= 2
        moves += 1
    if moves > m:
        print(0)
        continue

    t = 1 + (m - moves)
    print(t)

