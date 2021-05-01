def gcd (a,b): # greatest common divisor between 'a' and 'b'
    val = a%b
    if val == 0:
        return b
    return gcd(b, val)

if __name__ == '__main__':
    while True:
        try:
            a, b = map(int, input().split())
            if a>b:
                div = gcd(a,b)
            else:
                div = gcd(b,a)
            print(int(2*(a+b)/div))
        except:
            break
    