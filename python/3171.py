# very bad sol

if __name__ == '__main__':
    N, L = map(int, input().split())
    conn = [[0 for col in range(N)] for row in range(N)]
    aux = []
    complete = False
    # assign True to each led connection:
    for i in range(L):
        pc1, pc2 = map(int, input().split())
        conn[pc1-1][pc2-1] = 1
        conn[pc2-1][pc1-1] = 1
    # check if is possible to reach the N node starting from the first one:
    for i in range(N):
        for j in range(N):
            if conn[j][i] > 0:
                for k in range(N):
                    conn[i][k] += conn[j][k]
                    conn[j][k] += conn[i][k]
    if 0 in conn[0]:
        print("INCOMPLETE")
    else: print("COMPLETE")
