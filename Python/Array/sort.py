def sort(Arr):
    for i in range(len(Arr)-1):
        for j in range(i+1, len(Arr)):
            if Arr[i] > Arr[j]:
                temp = Arr[i]
                Arr[i] = Arr[j]
                Arr[j] = temp
    return Arr


def sum(Arr):
    sum = 0
    for i in Arr:
        sum += i
    return sum


def sum_natural(n):
    if n == 1:
        return 1
    return n + sum_natural(n-1)


def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n-1)


def power(n, m):
    if m == 1:
        return n
    return n * power(n, m-1)


def reverse_m1(Arr):
    return Arr[::-1]


def reverse_m2(Arr):
    arr = list()
    for i in range(-1, -(len(Arr)+1), -1):
        arr.append(Arr[i])
    return arr


def reverse_m3(Arr):
    for i in range(len(Arr)//2):
        temp = Arr[i]
        Arr[i] = Arr[-i-1]
        Arr[-i-1] = temp
    return Arr


arr = [10, 20, 15, 25, 8, 3, 1]

# print(sort(arr))
# print(sum(arr))
# print(sum_natural(10))
# print(factorial(6))
# print(power(3, 6))

print(reverse_m1(arr))
print(reverse_m2(arr))
print(reverse_m3(arr))
