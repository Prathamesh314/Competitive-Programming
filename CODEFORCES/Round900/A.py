# problem link :- https://codeforces.com/contest/1878/problem/A


for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    if k not in arr:
        print("NO")
    else:
        print("YES")
