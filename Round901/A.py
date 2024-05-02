# problme link :- https://codeforces.com/contest/1875/problem/A

for _ in range(int(input())):
    a, b, n = map(int, input().split())
    arr = list(map(int, input().split()))
    i = 0
    ans = b
    for i in range(n):
        ans += min(a - 1, arr[i])
    print(ans)
