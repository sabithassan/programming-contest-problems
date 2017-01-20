import math
def generatePrimes(n):
    """
    Input: n : int
    Output: list of all prime numbers between 1 and n
    excluding n
    """
    primes = [2]
    size = math.floor((n-3)*0.5)+1
    print (size)
    isPrime = [True]*size
    for i in range(0, size):
        if isPrime[i]: # 2i+3 is prime
            primes.append((2*i)+3)
            #Seive all multiples of 2i+3, starting from (2i+3)^2
            for j in range((2*(i**2))+(6*i)+3, size, (2*i)+3):
                isPrime[j] = False
    return primes

print(generatePrimes(18))
                
