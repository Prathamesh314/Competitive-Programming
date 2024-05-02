#  problem link :- https://codeforces.com/contest/1870/problem/B

import math
for _ in range(int(input())):
    n,m = map(int,input().split())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    xor = 0
    orr = 0
    for i in a:
        xor = xor^i
    for i in b:
        orr = orr|i
    num = pow(2,32)-1
    if(n%2==0):
        mn = xor&(num-orr)
        mx = xor
        print(f"{mn} {mx}")
    else:
        mn = xor
        mx = xor|orr
        print(f"{mn} {mx}")