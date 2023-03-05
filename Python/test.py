# import numpy as np
# n = int(input())
# array = np.zeros((n, n))

n = int(input())

array = [[0 for x in range(n)] for i in range(n)]

for i in range(n):
    row = input()
    row = row.split(' ')
    Row = [int(x) for x in row]
    array[i] = Row

left = 0
right = 0
for i in range(n):
    left += array[i][i]

right = 0
k = n - 1
for i in range(n):
    right += array[i][k]
    k -= 1

print(abs(int(left - right)))
