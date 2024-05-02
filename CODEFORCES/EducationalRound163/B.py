# Problem link :- [https://codeforces.com/contest/1948/problem/A]

for _ in range(int(input())):
    n = int(input())
    v = list(map(int, input().split()))
    t = []

    if v == sorted(v):
        print("YES")
        continue
 
    t.append(v[-1])
    for i in range(n - 2, -1, -1):
        if v[i] >= 10 and v[i] > t[-1]:
            t.append(v[i] % 10)
            t.append(v[i] // 10)
        else:
            t.append(v[i])
 
    t.reverse()
    f = t == sorted(t)
    print("YES" if f else "NO")