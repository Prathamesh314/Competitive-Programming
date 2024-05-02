/* https://codeforces.com/contest/1926/problem/B */

for _ in range(int(input())):
    n = int(input())
    arr = []
    for i in range(n):
        s = input()
        if '1' in s:
            arr.append(s.count('1'))
    arr = set(arr)
    if len(arr) == 1:
        print("SQUARE")
    else:
        print("TRIANGLE")
