from enum import Enum
Elements = Enum('Elements', 'RED WHITE BLUE')
def swap(A, dest, src):
    temp = A[dest]
    A[dest] = A[src]
    A[src] = temp
    return

def reOreder(A):
    """
    Input = A: List of elements from the set Elements
    Output: A reordered such that elements of the same key appear together
    My solution returns Red, White, Blue
    """
    nextR = 0
    nextW = 0
    nextB = len(A)-1

    while (nextW <= nextB):
        if A[nextW] is Elements.RED:
            swap(A, nextR, nextW)
            nextR+=1
            nextW+=1
        elif A[nextW] is Elements.WHITE:
            nextW+=1
        else:
            swap(A, nextB, nextW)
            nextB-=1  
    return 

A = [Elements.BLUE, Elements.WHITE, Elements.RED, \
                 Elements.BLUE, Elements.WHITE, Elements.RED]
reOreder(A)
print (A)
