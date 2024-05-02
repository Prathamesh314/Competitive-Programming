# Problem link :- [https://codeforces.com/contest/1968/problem/E]

for _ in range(int(input())):
    n = int(input())
    print("1 1")
    print("2 1")
    for i in range(3, n):
        print(f"1 {i}")
    if n >= 3:
        print(n,n)
    print()