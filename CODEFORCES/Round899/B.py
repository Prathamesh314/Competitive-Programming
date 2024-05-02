# https://codeforces.com/contest/1882/problem/B


for _ in range(int(input())):
    n = int(input())
    arr = []
    ans = set()
    for i in range(n):
        t = list(map(int,input().split()))[1:]
        arr.append(t)
        ans = ans | set(t)
    length = 0
    for i in ans:
        present = []
        for j in arr:
            if i not in j:
                present.append(j)
        unionn = set()
        for k in present:
            unionn = unionn | set(k)
        length = max(length,len(unionn))
    print(length)
