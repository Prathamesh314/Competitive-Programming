# Problem link :- [https://codeforces.com/contest/1950/problem/C]

for _ in range(int(input())):
    s = input()
    arr = s.split(":")
    h = int(arr[0])
    m = int(arr[1])
    # print(h, m)
    meridian = ""
    if h < 12:
        meridian = "AM"
    else:
        meridian = "PM"
    if h > 12:
        h -= 12
    elif h == 0:
        h += 12
    if h < 10:
        if m < 10:
            print(f"0{h}:0{m} {meridian}")
        else:
            print(f"0{h}:{m} {meridian}")
    else:
        if m < 10:
            print(f"{h}:0{m} {meridian}")
        else:
            print(f"{h}:{m} {meridian}")