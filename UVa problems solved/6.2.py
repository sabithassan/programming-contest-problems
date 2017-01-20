def increment(A):
    """
    Input: A: Array of ints representing decimal number
    Output: Array representing A+1
    """
    carried = True;
    i = len(A)-1
    while (i >= 0 and carried):
        if (A[i] == 9):
            A[i] = 0
            i-=1
        else:
            A[i]+=1
            carried = False
    if (carried):
        A.insert(0, 1)
    return A

def test():
    A = [9,9,9,9,9,9,9,9]
    print(increment(A))
    B = [2, 3, 4]
    print(increment(B))

test()
        
