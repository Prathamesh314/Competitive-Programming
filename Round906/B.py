# problemm link :- https://codeforces.com/contest/1890/problem/B


def solve():
    n, m = map(int, input().split())
    s = input()
    t = input()
    isgood = True

    for i in range(m - 1):
        if t[i] == t[i + 1]:
            isgood = False
            break

    flag = -1

    if t[0] == t[m - 1]:
        flag = t[0]

    for i in range(n - 1):
        if s[i] == s[i + 1]:
            if flag == -1 or not isgood:
                print("No")
                return
            else:
                if s[i] == flag:
                    print("No")
                    return

    print("Yes")


t = int(input())
for _ in range(t):
    solve()
