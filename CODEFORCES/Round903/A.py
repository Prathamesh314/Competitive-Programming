# problem link :- https://codeforces.com/contest/1881/problem/A


for _ in range(int(input())):
    s, x = map(int, input().split())
    a = input()
    b = input()
    c = 0
    while s < x:
        c += 1
        a += a
        s += s
    if a.find(b) != -1:
        print(c)
        continue
    else:
        found = 0
        ans = -1
        while s < 625:
            c += 1
            a += a
            s += s
            if a.find(b) != -1:
                ans = c
                found = 1
                break
        if found:
            print(ans)
        else:
            print(-1)
