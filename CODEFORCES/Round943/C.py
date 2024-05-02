# Problem link :- [https://codeforces.com/contest/1968/problem/C]

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    mx = max(arr) + 1
    ans = [mx]
    for i in arr:
        ans.append(ans[-1] + i)
    print(*ans)

