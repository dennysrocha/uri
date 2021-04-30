if __name__ == '__main__':
    N = int(input())
    T = list(map(int, input().split()))
    lowest = 21
    pos = 0
    for i in range(len(T)):
        if T[i] < lowest:
            lowest = T[i]
            pos = i+1
    print(pos)
