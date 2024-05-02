# problem link :- [https://codeforces.com/contest/1945/problem/D]

for _ in range(int(input())):
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))
    brr = list(map(int, input().split()))
    ans = float("inf")
    pk = 0
    for i in range(n - 1, -1, -1):
        if i + 1 <= m:
            ans = min(ans, pk + arr[i])
        pk += min(arr[i], brr[i])
    print(ans)