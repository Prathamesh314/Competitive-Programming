# Problem link :- [https://codeforces.com/contest/1968/problem/A]

import math

for _ in range(int(input())):
    n = int(input())
    ans = 1
    val = 1
    for y in range(1, n):
        x = math.gcd(n, y) + y
        if x > ans:
            ans = x
            val = y
    print(val)