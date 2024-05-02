# problem link :- https://codeforces.com/contest/1883/problem/C

for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    for i in range(n):
        arr[i] %= k

    minimum = min(arr)
    if minimum == 0:
        print(0)
        continue

    if k == 4:
        ans = 2
        d = 0
        for i in range(n):
            if arr[i] % 4 == 0:
                ans = 0
                d = 0
                break
            elif arr[i] % 2 == 0:
                d += 1

            if (arr[i] + 1) % 4 == 0:
                ans = 1
        if d >= 2:
            print(0)
        elif d == 1:
            print(min(ans, d))
        else:
            print(ans)
        continue
    maximum = max(arr)
    print(k - maximum)
