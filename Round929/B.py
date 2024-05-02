#  problem link :- [https://codeforces.com/contest/1933/problem/B]

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    s = sum(arr)
    # if s == 1:
    #     print(s)
    #     continue
    if s%3 == 0:
        print(0)

    elif (s-1)%3 == 0:
        f = 0
        for i in arr:
            # print(i, end=" ")
            if (s-i)%3==0:
                f = 1
                break

        if f:
            print(1)
        else:
            print(2)
    else:
        print(1)