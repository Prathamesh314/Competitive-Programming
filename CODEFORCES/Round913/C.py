# /* https://codeforces.com/contest/1907/problem/C */


def solve():
    n = int(input())
    s = list(input())

    d = {}

    for i in s:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1

    ma = None
    for key in d.keys():
        if ma is None:
            ma = key
        else:
            if d[key] > d[ma]:
                ma = key

    k = n - d[ma]
    print(max(n - 2 * k, 0 + n % 2))


t = int(input())
for _ in range(t):
    solve()
