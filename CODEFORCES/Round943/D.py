# Problem link :- [https://codeforces.com/contest/1968/problem/D]


for _ in range(int(input())):
    n,k,pb,ps = map(int, input().split())
    pb-=1
    ps-=1
    p = list(map(int, input().split()))
    p = [i-1 for i in p]
    a = list(map(int, input().split()))
    b,s = [], []
    vb = [False]*n
    vs = [False]*n
 
    while not vb[pb]:
        b.append(a[pb])
        vb[pb] = True
        pb = p[pb]
    
    while not vs[ps]:
        s.append(a[ps])
        vs[ps] = True
        ps = p[ps]
    
    sb, sc, csb, csc = 0, 0, 0, 0
    for i in range(min(len(b),k)):
        sb = max(sb, csb + b[i]*(k-i))
        csb += b[i]
    
    for i in range(min(len(s),k)):
        sc = max(sc, csc+s[i]*(k-i))
        csc += s[i]
    
    if sb == sc:
        print("Draw")
    elif sb > sc:
        print("Bodya")
    else:
        print("Sasha")