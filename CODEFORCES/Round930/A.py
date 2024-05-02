# problem link :- [https://codeforces.com/contest/1937/problem/A]

def takein(a):

    a = int(input())


def takeinarr(a):

    a = list(map(int,input().split()))
import math

def solve():
    a = int(input())
    k = int(math.log2(a))
    print(int(math.pow(2, k)))


t = 1

t = int(input())

for _ in range(t):

    solve()
