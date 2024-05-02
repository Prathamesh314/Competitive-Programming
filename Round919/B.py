# /* https://codeforces.com/contest/1920/problem/B */


def solve():
    n, k, x = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    psum = [0] * n
    sm = 0
    for i in range(n):
        sm += a[i]
        psum[i] = sm

    ans = 0
    ri = n - 1
    li = ri - x + 1

    if li <= 0:
        ans = -psum[ri]
    else:
        ans = 2 * psum[li - 1] - psum[ri]

    for i in range(max(n - k, 0), n):
        if i == 0:
            ans = max(ans, 0)
            continue
        ri = i - 1
        li = ri - x + 1
        if li <= 0:
            ans = max(ans, -psum[ri])
        else:
            ans = max(ans, 2 * psum[li - 1] - psum[ri])

    print(ans)


t = int(input())
for _ in range(t):
    solve()
