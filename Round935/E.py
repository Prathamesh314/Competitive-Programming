# problem link :- [https://codeforces.com/contest/1945/problem/E]

for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    idx = -1
    for i in range(1, n + 1):
        if arr[i - 1] == k:
            idx = i
            break
    l, r = 1, n + 1
    while r - l > 1:
        mid = (l + r) // 2
        if arr[mid - 1] <= k:
            l = mid
        else:
            r = mid
    if l == idx:
        print(0)
    else:
        print(1)
        print(idx, l)