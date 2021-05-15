if __name__ == '__main__':
    while True:
        N = int(input())
        if N == 0:
            break
        aux = N*(N+1)*(2*N+1)//6
        print(aux)