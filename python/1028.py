def gcd (a,b): # greatest common divisor between numbers 'a' and 'b'
    val = a%b
    if val == 0:
        return b
    else:
        return gcd(b,val)

if __name__ == '__main__':
    N = int(input())
    for i in range(N):
        F1, F2 = map(int, input().split())
        if F1 > F2:
            s = gcd(F1,F2)
        else: # switch a,b in gcd function if F2 > F1
            s = gcd(F2, F1)
        print(s)
    