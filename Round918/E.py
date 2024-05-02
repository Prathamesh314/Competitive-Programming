# /* https://codeforces.com/contest/1915/problem/E */

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    s = 0
    f = 1
    d = {"0"}
    for i in range(n):
        if i % 2 == 0:
            s += arr[i]
        else:
            s -= arr[i]
        if str(s) in d:
            f = 0
            break
        d.add(str(s))
    if f:
        print("NO")
    else:
        print("YES")
