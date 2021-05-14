import math

if __name__ == '__main__':
    count = 0;
    while True:
        R, N = map(int, input().split())
        count += 1
        if R==0 and N==0:
            break
        if R<=N:
            print(f"Case {count}: 0")
        else:
            aux = (R-N)/N
            if aux>26:
                print(f"Case {count}: impossible")
            else:
                print(f"Case {count}: {math.ceil((R-N)/N)}")
    