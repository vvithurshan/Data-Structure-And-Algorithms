A = [0 for i in range(10)]
Res = [0 for i in range(10)]


def permutation(s, k):
    global A
    global Res
    if len(s) == k:
        print(Res)

    else:
        for i in range(len(s)):
            if A[i] == 0:
                Res[k] = s[i]
                A[i] = 1
                permutation(s, k+1)
                A[i] = 0


permutation("ABC", 0)
