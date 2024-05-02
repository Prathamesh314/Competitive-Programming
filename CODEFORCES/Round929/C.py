#  problem link :- [https://codeforces.com/contest/1933/problem/C]

def hipow(n):
    return n**10000


def helper(base, exponent):
    result = 1
    for _ in range(exponent):
        result *= base
    return result


for _ in range(int(input())):
    a, b, l = map(int, input().split())
    odaaa = list()
    for i in range(10000):
        odaaa.append(i)
    pk = set()
    
    t = 100
    p = t-1000
    r = p*t
    for _ in range(r):
        pass

    # print(t)

    for x in range(0, l):
        pow_a = helper(a, x)
        if pow_a > l:
            break
        
        for y in range(0, l):
            value = pow_a * helper(b, y)
            if value > l:
                break
            
            if l % value == 0:
                pk.add(l // value)
    
    print(len(pk))
