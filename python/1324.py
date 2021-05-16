def gcd(a, b):
    val = a%b
    if a%b == 0:
        return b
    return gcd(b, val)

if __name__ == '__main__':
    while True:
        A1, B1, C1, D1, A2, B2, C2, D2 = map(int, input().split())
        if A1 == B1 == C1 == D1 == A2 == B2 == C2 == D2 == 0:
            break
        D1 %= 360
        D2 %= 360
        begin = True
        rZero = False
        # check if r can be 0 (every theta is ok)
        try:
            t0 = -B1/A1
            if t0>0 -A2*B1 + B2*A1 == 0:
                aux = gcd(abs(A1),abs(B1))
                num0 = abs(B1)//aux
                den0 = abs(A1)//aux
                rZero = True
        except ZeroDivisionError:
            if B1 == B2 == 0:
                print("0 0")
                begin = False
        if begin:
            if A1 == A2: # same r speed; case that p1 and p2 can collide +inf times
                if B1 != B2: # never be in same r
                    print("0 0")
                else: # always at same r
                    d = D2-D1
                    if d == 0: # always at same theta
                        print("0 1")
                    elif C1 == C2: # never at same theta due to same theta speed and dif theta_0
                        print("0 0")
                    elif C2 > C1: # +inf times at same theta
                        c = C2-C1
                        if d>0:
                            d = 360-d
                            aux = gcd(d, c)
                            num1 = d//aux
                            den1 = c//aux
                            if rZero and t0 < num1/den1:
                                print(f"{num0} {den0}")
                            else:
                                print(f"{num1} {den1}")
                        else:
                            d = -d
                            aux = gcd(d, c)
                            num1 = d//aux
                            den1 = c//aux
                            if rZero and t0 < num1/den1:
                                print(f"{num0} {den0}")
                            else:
                                print(f"{num1} {den1}")
                    else:
                        c = C1-C2
                        if d>0:   
                            aux = gcd(d, c)
                            num1 = d//aux
                            den1 = c//aux
                            if rZero and t0 < num1/den1:
                                print(f"{num0} {den0}")
                            else:
                                print(f"{num1} {den1}")
                        else:
                            d = 360+d
                            aux = gcd(d, c)
                            num1 = d//aux
                            den1 = c//aux
                            if rZero and t0 < num1/den1:
                                print(f"{num0} {den0}")
                            else:
                                print(f"{num1} {den1}")
            else: # A1 != A2  ->  case that they only be at same r one time
                a = A1 - A2
                b = B2 - B1
                t1 = b/a
                flag = False
                if t1 < 0:
                    flag = True
                elif A1*t1 + B1 == 0:
                    aux = gcd(b,a)
                    num1 = b//aux
                    den1 = a//aux
                else:
                    if (C1*t1 + D1)%360 == (C2*t1 + D2)%360:
                        aux = gcd(b, a)
                        num1 = b//aux
                        den1 = a//aux
                    else:
                        flag = True
                a = -(A1 + A2)
                b = B1 + B2
                try:
                    t2 = b/a
                    if t2 < 0 and flag:
                        print("0 0")
                    elif A1*t2 + B1 == 0:
                        aux = gcd(b, a)
                        num2 = b//aux
                        den2 = a//aux
                        if not flag:
                            if t1 < t2:
                                print(f"{num1} {den1}")
                            else:
                                print(f"{num2} {den2}")
                        else:
                            print(f"{num2} {den2}")
                    else:
                        if (C1*t2 + D1 + 180)%360 == (C2*t2 + D2)%360:
                            aux = gcd(b,a)
                            if not flag:
                                if t1 < t2:
                                    print(f"{num1} {den1}")
                                else:
                                    print(f"{b//aux} {a//aux}")
                            else:
                                print(f"{b//aux} {a//aux}")
                        else:
                            if not flag:
                                print(f"{num1} {den1}")
                            else:
                                print("0 0")
                except ZeroDivisionError:
                    if flag:
                        print("0 0")
                    else:
                        print(f"{num1} {den1}")