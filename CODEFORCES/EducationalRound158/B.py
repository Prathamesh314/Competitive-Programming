# // problem link :- https://codeforces.com/contest/1901/problem/B


def solve():
    n = int(input())
    a = list(map(int, input().split()))

    if n == 1:
        a[0] -= 1
        print(a[0])
        return

    clear_array = [1]
    ans = 0

    for i in range(n):
        if a[i] != clear_array[-1]:
            clear_array.append(a[i])

    for i in range(len(clear_array) - 1):
        if clear_array[i] < clear_array[i + 1]:
            ans += clear_array[i + 1] - clear_array[i]

    print(ans)


for _ in range(int(input())):
    solve()
