# Anagram

def Anagram(s1, s2):
    A = [0 for i in range(26)]

    for i in range(len(s1)):
        A[ord(s1[i])-97] += 1

    for i in range(len(s2)):
        A[ord(s2[i]) - 97] -= 1

    for i in A:
        if i:
            return "It is not an Anagram"
    return "It is an Anagram"


S1 = "decimal"
S2 = "medical"
print(Anagram(S1, S2))
