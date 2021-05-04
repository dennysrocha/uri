import math
if __name__ == '__main__':
    N = int(input())
    for _ in range(N):
        X = int(input())
        print(f"{int((math.pow(2, X)-1)/12000)} kg")