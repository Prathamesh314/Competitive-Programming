# problem link :- https://codeforces.com/contest/1883/problem/B

for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    d = {}
    for i in s:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    for i, j in d.items():
        if j & 1:
            k -= 1
    if k < -1:
        print("NO")
    else:
        print("YES")
