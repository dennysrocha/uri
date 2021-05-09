def fib(n):
    if n<3:
        return 1

    a = fib(n//2)
    if n%2==0:
        b = fib((n//2) - 1)
        return a*(2*b + a)
    else:
        b = fib((n//2) + 1)
        return a*a + b*b


if __name__ == '__main__':
# first, see that 0 < n < 10^301 (yep, n can be f*cking large), so be careful with laces/recursivity
# due to it, we will need to find k such that fib(k+1)%1000 == 1, fib(k+2) == 1, then the new sequence
# starting at k will be the same as starting from 1...
# after some coding:
# 
# a, b = 1, 1
# k = 2
# while True:
#     a, b = b, a+b
#     if a%1000 == 1 and b%1000 == 1:
#         print(k-1)
#         break
#     k += 1
# 
# The result is k=1500.
# To make the solution faster as possible, we will use "Double Fibonacci Identitie":
# F(2n) = F(n)*(2*F(n-1) + F(n))
# F(2n+1) = F(n+1)^2 + F(n)^2
    T = int(input())
    for _ in range(T):
        n = int(input(),2)%1500
        print(str(fib(n)%1000).zfill(3))