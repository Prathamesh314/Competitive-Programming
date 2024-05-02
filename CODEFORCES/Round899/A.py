# https://codeforces.com/contest/1882/problem/A

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    ans = 0
    for i in range(n):
        ans+=1
        if arr[i]==ans:
            ans+=1
    print(ans)
