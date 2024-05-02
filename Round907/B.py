# problem link :- https://codeforces.com/contest/1891/problem/B


INF = 10**18


def solve():
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    x = list(map(int, input().split()))

    k = 1
    prev = x[0]
    newx = [prev]

    for i in range(1, q):
        if x[i] < prev:
            prev = x[i]
            newx.append(prev)
            k += 1

    for j in range(n):
        for i in range(k):
            if a[j] % (2 ** newx[i]) == 0:
                a[j] += 2 ** (newx[i] - 1)

    for i in range(n):
        print(a[i], end=" ")
    print()


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
