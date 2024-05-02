# /* https://codeforces.com/contest/1921/problem/D */


t = int(input())
for _ in range(t):
    ans = 0
    n, m = map(int, input().split())

    a = list(map(int, input().split()))
    a.sort()

    prevsum = [0] * (n + 1)
    for i in range(n):
        prevsum[i + 1] = prevsum[i] + a[i]

    b = list(map(int, input().split()))
    b.sort()

    prevsumb = [0] * (m + 1)
    for i in range(m):
        prevsumb[i + 1] = prevsumb[i] + b[i]

    for i in range(n + 1):
        min_d = prevsum[n] - prevsum[n - i] - prevsumb[i]
        max_d = prevsumb[m] - prevsumb[m - n + i] - prevsum[n - i]
        ans = max(ans, min_d + max_d)

    print(ans)
