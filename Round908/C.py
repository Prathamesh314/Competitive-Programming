# problem link :- https://codeforces.com/contest/1894/problem/C


for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    s = set()
    c = n - 1
    ok = True
    for i in range(k):
        if c in s:
            break
        if arr[c] > n:
            ok = False
            break
        s.add(c)
        c = (c - arr[c] + n) % n
    if ok:
        print("Yes")
    else:
        print("No")
