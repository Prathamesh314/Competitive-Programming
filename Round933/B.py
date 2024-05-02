# Problem link :- [https://codeforces.com/contest/1941/problem/B]

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    for i in range(1,n-1):
        if arr[i-1] <= arr[i+1] and arr[i]>=2*arr[i-1]:
            arr[i+1] -= arr[i-1]
            arr[i] -= 2*arr[i-1]
            arr[i-1] = 0
    if arr.count(0) != n:
        print("NO")
    else:
        print("YES")