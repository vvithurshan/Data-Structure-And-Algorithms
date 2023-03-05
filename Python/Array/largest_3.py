def largest_m1(Arr):
    Arr.sort()
    Arr.reverse()
    a, b, c = Arr[:3]
    print(a, b, c, end=' ')
    print()


arr = [10, 4, 3, 50, 23, 90]
largest_m1(arr)
