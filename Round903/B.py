# problem link :- https://codeforces.com/contest/1881/problem/B


for _ in range(int(input())):
    a = list(map(int, input().split()))
    a.sort()
    c = 0
    found = 0
    for i in range(1, 3):
        if a[i] % a[0] != 0:
            found = 1
            break
        else:
            c += a[i] // a[0] - 1

    if found:
        print("NO")
        continue

    if c > 3:
        print("NO")
    else:
        print("YES")
