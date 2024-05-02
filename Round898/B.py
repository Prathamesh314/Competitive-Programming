# problem link :- https://codeforces.com/contest/1873/problem/B

import math
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    i = -1
    m = math.inf
    for k in range(n):
        if a[k]<m:
            m = a[k]
            i = k
    a[i]+=1;
    ans = 1;
    for i in a:
        ans*=i;
    print(ans)
            