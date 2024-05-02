#  problem link :- [https://codeforces.com/contest/1933/problem/D]

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    arr.sort()
    d = {}
    for i in arr:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    
    if d[arr[0]] == 1:
        print("YES")
        continue
    f = 1
    for i in d.keys():
        if i == arr[0]:
            continue
        if i%arr[0] != 0:
            f = 0
            break
    if f:
        print("NO")
    else:
        print("YES")