def anagram(a, b):
    lst = [0 for i in range(26)]
    for i in a:
        lst[ord(i)-97] += 1
    for i in b:
        lst[ord(i)-97] -= 1
        if lst[ord(i)-97] < 0:
            return "It is not an Anogram"
    for i in lst:
        if i:
            return "It is not an Anogram"
    return "It is an Anogram"


S1 = "decimal"
S2 = "medical"
print(anagram(S1, S2))
