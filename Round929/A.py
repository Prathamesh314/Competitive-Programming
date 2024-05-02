#  problem link :- [https://codeforces.com/contest/1933/problem/A]

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    negs = []
    pos = []
    s = 0
    for i in arr:
        s += abs(i)
    print(s)