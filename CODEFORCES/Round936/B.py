# Problem link :- [https://codeforces.com/contest/1946/problem/B]


MOD = 10**9 + 7


def mod_mul(a, b, m):
    a %= m
    if a == 1 or b == 0:
        return 1
    res = mod_mul(a, b // 2, m)
    res %= m
    if b % 2 == 1:
        return ((res * res) % m * a) % m
    return (res * res) % m


def solve():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    mx = 0
    for i in range(n):
        mx += arr[i]
        if mx < 0:
            mx += MOD

    cr_sum = 0
    max_sum = 0
    for i in range(n):
        cr_sum += arr[i]
        if cr_sum < 0:
            cr_sum = 0
        max_sum = max(max_sum, cr_sum)

    ans = 0
    if max_sum > 0:
        max_sum %= MOD
        temp = (mod_mul(2, k, MOD) - 1) % MOD
        ans = (max_sum * temp) % MOD
        ans = (ans + mx) % MOD
        if ans < 0:
            ans += MOD
    else:
        ans = mx
        if ans < 0:
            ans += MOD

    print(ans)


for _ in range(int(input())):
    solve()