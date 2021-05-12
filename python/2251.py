import math

if __name__ == '__main__':
    N = int(input())
    i = 1
    while N!=0:
        print(f"Teste {i}\n{pow(2,N)-1}\n")
        N = int(input())
        i += 1