



for _ in range(int(input())):
    length, window = map(int, input().split())
    arr = list(map(int, input().split()))
    ans = list()
    x = 0
    y = window
    while y < (length+1):
        
        temp = set(arr[x: y])
        ans.append(len(temp))
        x += 1
        y += 1

    print(ans)

# for _ in range(1):
#     length, window = 6, 3
#     arr = [5, 8, 5, 4, 4, 1]
#     ans = list()
#     x = 0
#     y = window
#     while y < (length+1):
#         temp = set(arr[x: y])
#         ans.append(len(temp))
#         x += 1
#         y += 1
#
#     print(ans)