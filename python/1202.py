import math

def subtractOne(n):
    aux = len(n)
    while n[aux-1] == "0":
        aux -= 1
    n[aux-1] = "0"
    while aux != len(n):
        n[aux] = "1"
    return n

def fib(n):
    if n == "0" or n == "1":
        return 1
    aux = len(n) - 1 # index of last bit
    if n[aux] == "0":
        a = fib(n[:aux+1])
        b = fib(subtractOne(n[:aux+1]))
        return a*(2*b + a)
    else:
        # TO-DO
        # need to implement sumOne(n)
        return
if __name__ == '__main__':
# first, see that 0 < n < 10^301 (yep, n can be f*cking large), so be careful with laces/recursivity
# due to it, we'll use "Double Fibonacci Identitie":
# F(2n) = F(n)*(2*F(n-1) + F(n))
# F(2n+1) = F(n+1)^2 + F(n)^2
    T = int(input())
    for _ in range(T):
        n = input()
        while n[0] == "0":
            n = n[1:]
        print(fib(n))


