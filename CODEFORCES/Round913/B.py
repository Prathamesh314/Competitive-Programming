# /* https://codeforces.com/contest/1907/problem/B */


for _ in range(int(input())):
    input_str = input()
    lower_indices = []
    upper_indices = []
    lower_alphabet = "qwertyuiopasdfghjklzxcvbnm"
    upper_alphabet = "QWERTYUIOPASDFGHJKLZXCVBNM"
    result = []
    count = 0

    for i in range(len(input_str)):
        if input_str[i] == "B" and upper_indices:
            result[upper_indices.pop()] = "_"
        elif input_str[i] == "b" and lower_indices:
            result[lower_indices.pop()] = "_"
        elif input_str[i] != "b" and input_str[i] != "B":
            if input_str[i] in lower_alphabet:
                lower_indices.append(count)
            else:
                upper_indices.append(count)
            result.append(input_str[i])
            count += 1

    k = list(filter(lambda x: x != "_", result))
    answer = "".join(k)
    print(answer)
