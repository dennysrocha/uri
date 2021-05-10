def isPrime(n): # using that all primes greater than 3 are of form 6k+1 or 6k-1
    if n==1 or n==2:
        return "Prime"
    if n%2==0 or n%3==0:
        return "Not Prime"
    i = 5
    while i*i <= n:
        if n%i==0 or n%(i+2)==0:
            return "Not Prime"
        i += 6
    return "Prime"

if __name__ == '__main__':
    N = int(input())
    for _ in range(N):
        x = int(input())
        print(isPrime(x))