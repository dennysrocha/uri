def eat(f):
    if f<=1:
        return 0
    return 1+eat(f/2)

if __name__ == '__main__':
    N = int(input())
    for _ in range(N):
        C = float(input())
        print(f"{int(eat(C))} dias")