# problem link :- [https://codeforces.com/contest/1945/problem/C]


for _ in range(int(input())):
    n = int(input())
    s = input()

    left = [0, 0]
    right = [0, 0]

    for i in s:
        if i == "0":
            right[0] += 1
        else:
            right[1] += 1

    ans = -1
    val = float("inf")

    if right[1] >= (n // 2 + n % 2):
        val = n
        ans = 0

    for i in range(n):
        if s[i] == "0":
            right[0] -= 1
            left[0] += 1
        else:
            right[1] -= 1
            left[1] += 1

        leftcnt = left[0] + left[1]
        rightcnt = right[0] + right[1]

        if (leftcnt // 2) + (leftcnt % 2) <= left[0] and (rightcnt // 2) + (
            rightcnt % 2
        ) <= right[1]:
            k = abs(rightcnt - leftcnt)
            if k < val:
                val = k
                ans = i + 1

    print(ans)