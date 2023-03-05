def palindrome_m1(a):
    rev = reverse(a)
    for i in range(len(a)):
        if a[i] != rev[i]:
            return "It is not a Palindrome"
    return "It is a Palindrome"


def reverse(r):
    rev = ""
    for i in r:
        rev = i + rev
    return rev


def palindrome_m2(a):
    for i in range(len(a)//2):
        if a[i] != a[-1-i]:
            return "It is not a Palindrome"
    return "It is a Palindrome"


def reverse(s):
    empty = ""

    for i in s:
        empty = i + empty

    if empty == s:
        return "It is a palindrome"
    else:
        return "It is not a palindrome"


def reverse_m2(s):
    empty = ""

    for i in s:
        empty = i + empty

    for i in range(len(s)):
        if s[i] != empty[i]:
            return "It is not a palindrome"
    return "It is a palindrome"


def compare(s):
    i = 0
    j = len(s) - 1
    while i > j:
        if s[i] != s[j]:
            return "It is not a palindrome"
    return "It is a palindrome"


S1 = "madamm"
print(palindrome_m1(S1))
print(palindrome_m2(S1))
