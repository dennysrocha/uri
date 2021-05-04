def prodBetweenRange(b, e):
    if b>e: # this case occurs when at least one of the numbers is 0
        return 1
    elif e==b:
        return e
    return e*prodBetweenRange(b, e-1)

if __name__ == '__main__':
    # warning: do not try handle with float to get appropriated precision...
    # i've tried it but python 2.5+ automatically assumes the int as 'bignum',
    # then you can just treat it like as it is int :)
    while True:
        try:
            # For example, let assume M=4 and N=7
            # M! = 4!
            # N! = 7! = M!*5*6*7
            # M! + N! = M!*(1 + 5*6*7)
            # M! + N! = prodBetweenRange(1, M)*(1 + prodBetweenRange(M+1, N))
            M, N = map(int, input().split())
            if M>N: 
                M, N = N, M # swap values to get N > M
            print(prodBetweenRange(1, M)*(prodBetweenRange(M+1, N) + 1))
        except EOFError:
            break