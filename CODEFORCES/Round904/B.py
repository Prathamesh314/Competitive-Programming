# problemm link :- https://codeforces.com/contest/1884/problem/B


t = int(input())

for _ in range(t):
    n = int(input())
    s = input().strip()
    arr = [0] * (n + 1)
    z = []

    for i in range(n - 1, -1, -1):
        if s[i] == "0":
            z.append(i)

    arr[0] = 0
    j = 1
    k = n - 1

    for i in z:
        arr[j] = arr[j - 1] + (k - i)
        j += 1
        k -= 1

    for i in range(j, n + 1):
        arr[i] = -1

    for i in range(1, len(arr)):
        print(arr[i], end=" ")

    print()
