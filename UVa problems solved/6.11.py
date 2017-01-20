import random
def swap(A, dest, src):
    temp = A[dest]
    A[dest] = A[src]
    A[src] = temp
    return

def randomSubset(A, k):
    """
    Input: Array k, size k
    Output: random subset of A of size k
    """
    n = len(A)
    for i in range(0, k):
        r = random.randrange(i, n)
        swap(A, i, r)
    return A[:k]

A = [1, 2, 3, 4, 5, 6, 7, 8]
print(randomSubset(A, 3))
print(randomSubset(A, 3))
print(randomSubset(A, 3))
print(randomSubset(A, 3))
print(randomSubset(A, 3))
