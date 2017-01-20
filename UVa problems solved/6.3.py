def mult(x,y):
    result = [0]*(len(x)+len(y))
    print (len(result))
    sign = (x[0] < 0)^(y[0] < 0)
    x[0] = abs(x[0])
    y[0] = abs(y[0])
    
    for i in reversed(range(0, len(x))):
        for j in reversed(range(0, len(y))):
            print((x[i], y[j], x[i]*y[j]))
            result[i+j+1] += x[i]*y[j]
            result[i+j] += int(result[i+j+1]/10)
            result[i+j+1] = int(result[i+j+1] % 10)
    while (not (result[0])):
        print("in loop \n")
        result.pop(0)
    #result[0] *= sign
    return result

print(mult([1, 2, 3, 4], [5, 6,7,8]))
