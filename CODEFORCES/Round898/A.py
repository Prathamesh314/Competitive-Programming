# problem link :- https://codeforces.com/contest/1873/problem/A

for _ in range(int(input())):
    l = ['a','b','c']
    s = input()
    if s == "abc":
        print("YES")
    else:
        if s[0]=='c' and s[1]=='a' or s[0]=='b' and s[1]=='c':
            print("NO")
        else:
            print("YES")
        
