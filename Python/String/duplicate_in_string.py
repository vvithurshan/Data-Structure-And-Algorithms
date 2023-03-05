# hash table

# Hash
def hash(s):
    lst = [0 for x in range(26)]
    for i in s:
        lst[ord(i)-97] += 1

    for i in range(len(lst)):
        if lst[i] > 1:
            print("{} comes {} times".format(chr(i+97), lst[i]))

# Bits


def bits(s):
    B = 0
    for i in s:
        x = 1
        x <<= (ord(i) - 97)
        if x & B:
            print("{} is a duplicate".format(i))
        else:
            B |= x


S = "finding"
hash(S)
bits(S)
