# Problem link :- [https://codeforces.com/contest/1941/problem/A]

for _ in range(int(input())):
    n,m,k = map(int, input().split())
    a = list(map(int,input().split()))
    b = list(map(int, input().split()))
    ans = 0
    for i in a:
        for j in b:
            if i+j <= k:
                ans+=1
    print(ans)