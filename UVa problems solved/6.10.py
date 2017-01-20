def swap(A, dest, src):
    temp = A[dest]
    A[dest] = A[src]
    A[src] = temp
    return

def nextPermutation(P):
    """
    Input: Array of charecters
    Output: next permutation of the charecters based on dictionary ordering
    starting from left to right
    eg: 12 < 21
    so next permutation of 12 is 21
    """
    #Find the largest increasing suffix
    i = len(P) - 1
    while ((i > 0) and (P[i] <= P[i-1])):
        print(i)
        i -= 1
    # i is the first i s.t. P[i] > P[i-1] starting from the end
    if (i == 0):
        print("i is 0")
        return []
    else:
        #Find the min element in P[i:] that is > P[i-1]
        j = len(P)-1
        while(P[j] <= P[i-1]):
            j -= 1
        swap(P, j, i-1)
        A = P[0:i]
        P.reverse()
        A.extend(P[0:len(P)-i])
        return A
    
print(nextPermutation([1, 0, 3, 2]))
print(nextPermutation([0, 3, 2, 1]))
