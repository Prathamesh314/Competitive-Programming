# problem link :- https://codeforces.com/contest/1873/problem/C

from collections import deque

def is_valid(i, j, visited):
    return 0 <= i < 10 and 0 <= j < 10 and not visited[i][j]

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def solve():
    s = [input() for _ in range(10)]
    q = deque()
    visited = [[False] * 10 for _ in range(10)]
    ans = 0

    for i in range(10):
        q.append(((0, i), 1))
        q.append(((9, i), 1))
        visited[0][i] = True
        visited[9][i] = True

    for i in range(1, 9):
        q.append(((i, 0), 1))
        q.append(((i, 9), 1))
        visited[i][0] = True
        visited[i][9] = True

    while q:
        score = q[0][1]
        a, b = q.popleft()[0]

        if s[a][b] == 'X':
            ans += score

        for i in range(4):
            if is_valid(a + dx[i], b + dy[i], visited):
                q.append(((a + dx[i], b + dy[i]), score + 1))
                visited[a + dx[i]][b + dy[i]] = True

    print(ans)


t = int(input())
for _ in range(t):
    solve()
