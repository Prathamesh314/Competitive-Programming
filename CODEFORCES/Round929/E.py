#  problem link :- [https://codeforces.com/contest/1933/problem/E]


def ok(sum1, sum2, u):
    return sum1*u - (sum1-1)*(sum1)//2 > sum2*u - (sum2-1)*(sum2)//2

for _ in range(int(input())):
    n = int(input())
    arr = [0] + list(map(int,input().split()))
    # pref = [0]*(n+1)
    # pref[0] = arr[0]
    for i in range(1,n+1):
        arr[i] += arr[i-1]
    
    q = int(input())
    while q:
        maxx = float("-inf")
        l,u = map(int,input().split())
        k = l
        r = n+1
        found = -1
        res = l
        while r-k>1:
            mid = (k+r)//2
            ans = ok(arr[mid]-arr[l-1], arr[mid-1]-arr[l-1], u)
            if ans:
                res = max(res, mid)
                k = mid
            else:
                r = mid
            # r+=1
        print(res, end=" ")
        q -= 1
    print()