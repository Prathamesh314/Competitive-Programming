# problem link :- https://codeforces.com/contest/1883/problem/A


for _ in range(int(input())):
    n = list(map(int, list(input())))
    ans = 0
    cur = 1
    for i in range(4):
        if n[i] == 0:
            n[i] = 10
        ans += abs(cur - n[i]) + 1
        cur = n[i]

    print(ans)
