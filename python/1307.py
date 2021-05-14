def gcd(a,b):
    val = a%b
    if val == 0:
        return b
    return gcd(b,val)
    

def needOrNot(a, b):
    if gcd(a,b) == 1:
        return "Love is not all you need!"
    return "All you need is love!"

if __name__ == '__main__':
    N = int(input())
    for i in range(N):
        S1 = int(input(),2)
        S2 = int(input(),2)
        print(f"Pair #{i+1}: {needOrNot(S1, S2)}")