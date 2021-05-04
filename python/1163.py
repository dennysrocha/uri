import math

if __name__ == '__main__':
    g = 9.80665
    pi = 3.14159
    # remembering exam times...
    # Vx = V*cos(alpha)
    # Vy = V*sin(alpha)
    # h(t) = h + Vy*t - g*t^2/2
    # since h(t) = 0 when the duck touches the ground:
    # 0 = h + Vy*t - g*t^2/2
    # g*t^2 - 2*Vy*t - 2*h = 0
    # choosing the positive solution:
    # t = (2*Vy + sqrt(4*Vy^2 + 8*g*h))/(2*g)
    # finally:
    # dx = Vx*t
    # dx = Vx*(2*Vy + sqrt(4*Vy^2 + 8*h))/(2*g)
    while True:
        try:
            h = float(input())
            p1, p2 = map(int, input().split())
            n = int(input())
            for i in range(n):
                alpha, V = map(float, input().split())
                alpha *= pi/180
                Vx = V*math.cos(alpha)
                Vy = V*math.sin(alpha)
                dx = Vx*(2.0*Vy + math.sqrt(4.0*Vy*Vy + 8.0*g*h))/(2.0*g)
                if dx >= p1 and dx <= p2:
                    print(f"{dx:.5f} -> DUCK")
                else:
                    print(f"{dx:.5f} -> NUCK")
        except EOFError:
            break