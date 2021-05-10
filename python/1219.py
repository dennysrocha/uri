import math

def heron(a, b, c):
    p = (a+b+c)/2
    return math.sqrt(p*(p-a)*(p-b)*(p-c))

def circArea(r):
    return math.pi*r*r

if __name__ == '__main__':
    while True:
        try:
            a, b, c = map(int, input().split())
            A = heron(a, b, c)
            R = a*b*c/(4*A) # using A = (a*b*c)/(4*R)
            r = 2*A/(a+b+c) # using A = r*p
            rosesArea = circArea(r)
            sunflowersArea = circArea(R) - A
            violetsArea = A - rosesArea
            print(f"{sunflowersArea:.4f} {violetsArea:.4f} {rosesArea:.4f}")
        except EOFError:
            break