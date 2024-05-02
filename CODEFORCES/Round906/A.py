# problemm link :- https://codeforces.com/contest/1890/problem/A


for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    d = {}
    for i in arr:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    if n == 2:
        print("Yes")

    elif n == 3:
        if arr[0] == arr[1] or arr[0] == arr[2] or arr[1] == arr[2]:
            print("Yes")
        else:
            print("No")
    else:
        if len(d) > 2:
            print("No")
        elif len(d) == 1:
            print("Yes")
        else:
            s = set(arr)
            arr = list(s)
            k1 = d[arr[0]]
            k2 = d[arr[1]]
            if abs(k1 - k2) <= 1:
                print("Yes")
            else:
                print("No")
