# Problem link :- [https://codeforces.com/contest/1946/problem/A]

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    idx = n // 2
    if n % 2 == 0:
        idx -= 1
    no = arr[idx]
    count = 0
    # print(idx)
    for i in range(idx, n):
        if arr[i] <= no:
            count += 1
    print(count)