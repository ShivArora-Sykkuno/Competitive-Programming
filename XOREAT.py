



for _ in range(int(input())):
    n = int(input())
    a = []
    for i in range(n):
        temp_list = list(map(int, input().split()))
        a.extend(temp_list)


    n = len(a)
    xor = [[0 for i in range(n)] for j in range(n)]
    xor[0][0] = a[0][0]
    for j in range(1, n):
        xor[0][j] = xor[0][j - 1] ^ a[0][j]
        xor[j][0] = xor[j - 1][0] ^ a[j][0]

    for i in range(1, len(a)):
        for j in range(1, len(a)):
            xor[i][j] = xor[i - 1][j] ^ xor[i][j - 1] ^ xor[i - 1][j - 1] ^ a[i][j]


    mxor = 0
    for i in range(n):
        for j in range(n):
            for size_x in range(n - i + 1):
                for size_y in range(n - j + 1):
                    val = xor[i + size_x][j + size_y]
                    if j - 1 >= 0:
                        val ^= xor[i + size_x][j - 1]
                    if i - 1 >= 0:
                        val ^= xor[i - 1][j + size_y]
                    if i - 1 >= 0 and j - 1 >= 0:
                        val ^= xor[i - 1][j - 1]
                    mxor = max(mxor, val)
    print(mxor)
