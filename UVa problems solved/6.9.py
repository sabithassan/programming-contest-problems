def applyPermutation(A, P):
    n = len(A)
    for i,v in enumerate(A):
        next = i
        while (P[next] >= 0):
            #swap A[i] and A[P[next]]
            temp = A[P[next]]
            A[P[next]] = A[i]
            A[i] = temp
            #Update next
            next = P[next]
            P[next] -= n
    return

P = [3, 1, 2, 0]
A = ['a', 'b', 'c', 'd']
applyPermutation(A, P)
print(A)
