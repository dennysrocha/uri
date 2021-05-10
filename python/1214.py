if __name__ == '__main__':
    C = int(input())
    for _ in range(C):
        arr = input().split()
        N = arr[0]
        arr = list(map(int, arr[1:]))
        l = len(arr)
        aux = sum(arr)/l
        count = 0
        for i in range(l):
            if arr[i] > aux:
                count += 1
        print(f"{count/l*100:.3f}%")
            