# import time
import sys

sieveTable = [0]*190000
squaredPrimes = [0]*17170

def sieveOfErastothenes():
    primePos = 0
    for i in range(2, 190000, 1):
        if sieveTable[i] == 0:
            sieveTable[i] = 1
            squaredPrimes[primePos] = i**2
            primePos += 1
            for j in range(2*i, 190000, i):
                sieveTable[j] = 1
            
def numOfSquareFree(n, num, pos):
    if squaredPrimes[pos] != 0 and n/num >= squaredPrimes[pos]:
        return n//(num*squaredPrimes[pos]) + numOfSquareFree(n, num, pos+1) - numOfSquareFree(n, num*squaredPrimes[pos], pos+1)
    return 0


def itMiha(n):
    lo = 10*n//8
    hi = min(20*n//6,40000000000)
    me = (lo + hi) >> 1
    while lo < hi:
        res = me - numOfSquareFree(me, 1, 0)
        if res >= n:
            hi = me
        else:
            lo = me+1
        me = (lo+hi) >> 1
    return lo

if __name__ == '__main__':
    sieveOfErastothenes()
    T = int(input())
    for _ in range(T):
        N = int(input())
        print(itMiha(N))


# def numOfSquareFree(n):
#     i = 0
#     j = 0
#     res = 0
#     aux1 = squaredPrimes[i]
#     while aux1 <= n:
#         res += int(n/aux1)
#         j = i+1
#         aux2 = squaredPrimes[j]
#         p2 = aux1*aux2
#         while p2 <= n:
#             res -= n//p2
#             k = j+1
#             aux3 = squaredPrimes[k]
#             p3 = p2*aux3
#             while p3 <= n:
#                 res += n//p3
#                 m = k+1
#                 aux4 = squaredPrimes[m]
#                 p4 = p3*aux4
#                 while p4 <= n:
#                     res -= n//p4
#                     o = m+1
#                     aux5 = squaredPrimes[o]
#                     p5 = p4*aux5
#                     while p5 <= n:
#                         res += n//p5
#                         p = o+1
#                         aux6 = squaredPrimes[p]
#                         p6 = p5*aux6
#                         while p6 <= n:
#                             res -= n//p6
#                             q = p+1
#                             aux7 = squaredPrimes[q]
#                             p7 = p6*aux7
#                             while p7 <= n:
#                                 res += n//p7
#                                 q += 1
#                                 aux7 = squaredPrimes[q]
#                                 p7 = p6*aux7
#                             p += 1
#                             aux6 = squaredPrimes[p]
#                             p6 = p5*aux6
#                         o += 1
#                         aux5 = squaredPrimes[o]
#                         p5 = p4*aux5
#                     m += 1
#                     aux4 = squaredPrimes[m]
#                     p4 = p3*aux4
#                 k += 1
#                 aux3 = squaredPrimes[k]
#                 p3 = p2*aux3
#             j += 1
#             aux2 = squaredPrimes[j]
#             p2 = aux1*aux2
#         i += 1
#         aux1 = squaredPrimes[i]
#     return n - res