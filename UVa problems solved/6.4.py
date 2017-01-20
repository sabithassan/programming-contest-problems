def CanReachEnd(maxSteps):
    """
    Input: maxSteps: Array of integers such that
    A[i] = max # steps you can take from i
    Output: True iff you can reach the last element
    starting from the forst element
    """
    cost = 0
    for i in reversed(range(0, len(maxSteps))):
        if ((maxSteps[i] == 0) or (maxSteps[i] + cost < 1)):
            cost -= 1
        else:
            cost = 0
    return cost >= 0

def testCanReachEnd():    
    print (CanReachEnd([3,3,1,0,2,0,1]))#True
    print (CanReachEnd([3,2,0,0,2,0,1]))#False
    print (CanReachEnd([3,0,1]))#True
    print (CanReachEnd([1]))#True
    print(CanReachEnd([0,2,3,6]))#False
    print(CanReachEnd([2,4,1,1,0,2,3]))#True
    return

def minSteps(maxSteps):
    """
    Input: maxSteps: Array of integers such that
    A[i] = max # steps you can take from i
    Output: min # steps needed tp reach the last element
    starting from the forst element
    Time = O(n)
    Space = O(1)
    """
    i = 1
    while( i < len(maxSteps)):
        maxSteps[i] = max(maxSteps[i]+i, maxSteps[i-1])
        i+=1

    if (len(maxSteps) == 0):
        return 0
    print (maxSteps)
    lastValidIndex = 0
    lastValid = maxSteps[0]
    steps = 0
    for i in range(0, len(maxSteps)):
        if (maxSteps[i] != lastValid):
            maxSteps[lastValidIndex+1] = maxSteps[i]
            lastValidIndex += 1
            lastValid = maxSteps[i]
            steps += 1
    return steps

def testMinSteps():
    print(minSteps([3,3,1,0,2,0,1])) #3
    
    
testMinSteps()
