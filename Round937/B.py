# Problem link :- [https://codeforces.com/contest/1950/problem/B]

for _ in range(int(input())):
    n = int(input())
    ans = [["0"] * (2 * n) for _ in range(2 * n)]
    flag = 1
    for i in range(0, 2 * n, 2):
        prev = flag
        for j in range(0, 2 * n, 2):
            if flag:
                ans[i][j] = "#"
                ans[i + 1][j] = "#"
                ans[i][j + 1] = "#"
                ans[i + 1][j + 1] = "#"
            else:
                ans[i][j] = "."
                ans[i + 1][j] = "."
                ans[i][j + 1] = "."
                ans[i + 1][j + 1] = "."
            flag = flag ^ 1
        flag = prev ^ 1
    for i in ans:
        for j in i:
            print(j, end="")
        print()