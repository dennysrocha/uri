if __name__ == '__main__':
    N, B, H, W = map(int, input().split())
    res = 3000000
    for i in range(H):
        P = int(input())
        j = map(int, input().split())
        for A in j:
            if A>=N:
                aux = N*P
                if aux <= B:
                    res = min(res, aux)
    if res == 3000000:
        print(f"stay home")
    else:
        print(res)