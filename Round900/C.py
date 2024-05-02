# problem link :- https://codeforces.com/contest/1878/problem/C

for _ in range(int(input())):
    n, k, x = map(int, input().split())
    if k * (k + 1) // 2 > x or (2 * n - k + 1) * k // 2 < x:
        print("NO")
    else:
        print("YES")
