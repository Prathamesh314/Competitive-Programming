# problem link :- https://codeforces.com/contest/1878/problem/B


for _ in range(int(input())):
    n = int(input())
    arr = []
    arr.append(1)
    arr.append(4)
    for i in range(n - 2):
        arr.append(arr[-1] + 3)
    print(*arr)
