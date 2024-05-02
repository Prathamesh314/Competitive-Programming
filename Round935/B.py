# problem link :- [https://codeforces.com/contest/1945/problem/B]

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)


def lcm(a, b):
    return (a * b) // gcd(a, b)


for _ in range(int(input())):
    a, b, m = map(int, input().split())
    print((a + m) // a + (b + m) // b)