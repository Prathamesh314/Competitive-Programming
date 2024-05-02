# problem link :- [https://codeforces.com/contest/1945/problem/A]

for _ in range(int(input())):
    i, e, u = map(int, input().split())
    ans = 0
    ans = i
    ans += e // 3
    rem = e % 3
    if rem == 1:
        if u < 2:
            print(-1)
            continue
        else:
            u -= 2
            ans += 1
    elif rem == 2:
        if u == 0:
            print(-1)
            continue
        else:
            u -= 1
            ans += 1
    ans += u // 3
    u = u % 3
    if u == 0:
        print(ans)
    else:
        print(ans + 1)