import math

def subtractOne(n):
    aux = len(n)
    if aux == 1:
        return "0"
    while n[aux-1] == "0": # check bits till find "1"
        aux -= 1
    
    if aux == 1: # case that all numbers == "1", except first
        res = "1"
        for _ in range(len(n)-2):
            res += "1"
        return res
    
    n = n[:aux-1] + "0" + n[aux:]
    while aux != len(n): # changing "0" to "1" till last bit
        n = n[:aux] + "1" + n[aux+1:]
        aux += 1

    return n

def sumOne(n):
    aux = len(n)
    if aux == 1: 
        return "10"
    while n[aux-1] == "1" and aux > 1: # check bits till find "0"
        aux -= 1
    
    if aux == 1: # case that all numbers == "1"
        res = "1"
        for _ in range(len(n)):
            res += "0"
        return res

    n = n[:aux-1] + "1" + n[aux:]
    while aux != len(n): # changing "1" to "0" till last bit
        n = n[:aux] + "0" + n[aux+1:]
        aux += 1
    
    return n

def fib(n):
    if n == "1" or n == "10":
        return 1
    aux = len(n)
    if n[aux-1] == "0": # par
        a = fib(n[:aux-1]) # remove one bit
        b = fib(subtractOne(n[:aux-1])) # remove one bit and subtract "1"
        return a*(2*b + a)
    else: # impar
        a = fib(sumOne(n[:aux-1])) # remove one bit and sum "1"
        b = fib(n[:aux-1]) # remove one bit
        return a*a + b*b
if __name__ == '__main__':
# first, see that 0 < n < 10^301 (yep, n can be f*cking large), so be careful with laces/recursivity
# due to it, we'll use "Double Fibonacci Identitie":
# F(2n) = F(n)*(2*F(n-1) + F(n))
# F(2n+1) = F(n+1)^2 + F(n)^2
    T = int(input())
    for _ in range(T):
        n = input()
        print(str(fib(n)%1000).zfill(3))
