/* https://codeforces.com/contest/1926/problem/A */

for _ in range(int(input())):
    s = input()
    counta, countb = 0, 0
    for i in s:
        if i == 'A':
            counta+=1
        else:
            countb += 1
    if counta > countb:
        print("A")
    else:
        print("B")
