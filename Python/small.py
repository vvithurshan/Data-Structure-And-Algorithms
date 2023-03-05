n = int(input())
a = 1

while (a < (n+1)):
    s = " " * (n-a) + "#" * a
    print(s)
    a += 1
