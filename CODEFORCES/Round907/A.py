# problem link :- https://codeforces.com/contest/1891/problem/A


def solve():
    n = int(input())
    a = list(map(int, input().split()))

    start = 2
    end = start * 2
    while start < n:
        end = min(end, n)
        for i in range(start, end - 1):
            if a[i] > a[i + 1]:
                print("NO")
                return

        start *= 2
        end *= 2

    print("YES")


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
