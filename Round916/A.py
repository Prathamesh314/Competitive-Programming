# https://codeforces.com/contest/1914/problem/A

for _ in range(int(input())):
    n = int(input())
    s = input()
    d = {}
    for i in s:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    ans = 0
    for i, j in d.items():
        n = ord(i) - 65
        if j > n:
            ans += 1

    print(ans)
