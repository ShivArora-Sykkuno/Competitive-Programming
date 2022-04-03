from collections import defaultdict
temp = 1
for _ in range(int(input())):
    temp_dict = defaultdict(lambda:0)
    X, Y = int(input()), temp - temp
    arr = list(map(int, input().split()))
    for i in arr:
        temp_dict[i] += temp
    for i in temp_dict.keys():
        if temp_dict[i] % (temp + temp) != (temp - temp):
            Y += temp
    length = len(arr) + Y
    while length % (temp + temp + temp + temp) != (temp - temp):
        length += temp
        Y += temp
    print(Y)