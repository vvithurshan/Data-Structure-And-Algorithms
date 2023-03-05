def reverse(S):
    empty = ""
    for i in S:
        empty = i + empty
    return empty


def reverse_2(S):
    empty = ""

    for i in range(len(S)-1, -1, -1):
        empty += S[i]
    return empty


def reverse_3(S):
    return S[::-1]


S = input()
r_1 = reverse(S)
print(r_1)
r_2 = reverse_2(S)
print(r_2)
r_3 = reverse_3(S)
print(r_3)
