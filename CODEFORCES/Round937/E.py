# Problem link :- [https://codeforces.com/contest/1950/problem/E]

def solve():
    n = int(input())
    s = input()
    div = []
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            div.append(i)
            if n // i != i:
                div.append(n // i)
    div.sort()
    for d in div:
        check1 = s[:d]
        check2 = s[n - d :]
        cnt1 = 0
        for j in range(0, n, d):
            for k in range(d):
                if s[j + k] != check1[k]:
                    cnt1 += 1

        cnt2 = 0
        for j in range(0, n, d):
            for k in range(d):
                if s[j + k] != check2[k]:
                    cnt2 += 1
        if cnt1 < 2 or cnt2 < 2:
            print(d)
            return


seive = [0] * 10000
for i in range(2, 10000):
    for j in range(i * i, 10000, i):
        seive[j] = 1
kkk = []
seive[0], seive[1] = 1, 1
for i in range(2, 10000):
    if seive[i] == 0:
        kkk.append(i)
        kkk.append(10000 // i)
for _ in range(int(input())):
    solve()