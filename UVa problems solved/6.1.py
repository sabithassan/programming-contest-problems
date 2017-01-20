def swap(A, dest, src):
    temp = A[dest]
    A[dest] = A[src]
    A[src] = temp
    return 

def dutch_flag_partition (A, pivotIndex):
    """
    Given an array of ints and a pivot index,
    partition A such that
    - all elements of A < A[pivot_index] are at the begining
    - all elements of A < A[pivot_index] are at the middle
    - all elements of A < A[pivot_index] are at the end
    """
    nextL = 0
    nextG = len(A)-1
    nextM = 0;
    pivot = A[pivotIndex]


    """
    Keep the following invariants:
    - A[0:nextL] < pivot
    - A[nextL: nextM] = pivot
    - A[nextG: leb(A)] > pivot 
    """
    while (nextM <= nextG):
        if (A[nextM] < pivot):
            swap(A, nextL, nextM)
            nextL += 1
            nextM += 1
        elif (A[nextM] == pivot):
            nextM += 1
        else:
            #A[nextM] > pivot
            swap(A, nextG, nextM)
            nextG -= 1

    return A

def test_dutch_flag_partition():
    #test for minimum element
    A = [4, 5,3,6,99,8,4,5,7,8,25,8,6,457,21,5,6,97,23]
    m = min(A)
    B = dutch_flag_partition(A, A.index(m))
    
    if (B[0] != m):
        return false
    for i in range (1, len(B)):
        if B[i] <= m:
            return False

   #test for maximum element
    mx = max(A)
    B = dutch_flag_partition(A, A.index(mx))
    if (B[len(A)-1] != mx):
        return False
    for i in range (0, len(B)-1):
        if B[i] >= mx:
            return False

    #test for a middle element
    B = dutch_flag_partition(A, A.index(25))
    for i in range (0, len(B)-1):
        if (B[i] >= 25) and (i < len(B)-4):
            return False
    if (B[len(B)-4] != 25):
        return False
    return True






print test_dutch_flag_partition()
