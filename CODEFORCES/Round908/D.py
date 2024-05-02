# // problem link :- https://codeforces.com/contest/1894/problem/D


def solve():
    n, m = map(int, input().split())
    array_a = list(map(int, input().split()))
    array_b = list(map(int, input().split()))
    array_b.sort(reverse=True)
    pointer_b = 0
    result = []

    for i in range(n):
        while pointer_b < m and array_b[pointer_b] >= array_a[i]:
            result.append(str(array_b[pointer_b]))
            pointer_b += 1
        result.append(str(array_a[i]))

    for j in range(pointer_b, m):
        result.append(str(array_b[j]))

    print(" ".join(result))


t = int(input())
for _ in range(1, t + 1):
    solve()
