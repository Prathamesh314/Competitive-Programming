# /* https://codeforces.com/contest/1926/problem/E */


for _ in range(int(input())):
    n, k = map(int, input().split())
    p = 1
    while n > 0:
        take = n - n // 2
        if take >= k:
            print(p * (2 * k - 1))
            break
        k -= take
        p = p * 2
        n = n // 2
