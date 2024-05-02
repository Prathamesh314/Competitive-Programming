# problem link :- https://codeforces.com/contest/1881/problem/C


for _ in range(int(input())):
    n = int(input())
    arr = []
    for i in range(n):
        arr.append(list(input()))
    ans = 0
    for i in range(3):
        for j in range(n):
            for k in range(n):
                x = k
                y = n - j - 1
                if arr[j][k] != arr[x][y]:
                    ans += abs(ord(arr[j][k]) - ord(arr[x][y]))
                    c = max(ord(arr[j][k]), ord(arr[x][y]))
                    arr[j][k] = chr(c)
                    arr[x][y] = chr(c)
    print(ans)
