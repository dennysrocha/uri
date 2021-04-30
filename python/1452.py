if __name__ == '__main__':
    servers = []
    while True:
        N, M = input().split()
        try:
            count = 0
            if not (N=='0' and M=='0'):
                for i in range(int(N)):
                    val = input().split()
                    val[0] = int(val[0])
                    servers.append(val)
                for j in range(int(M)):
                    client = input().split()
                    for server in servers:
                        for k in range(int(client[0])):
                            if client[k+1] in server:
                                count += 1
                                break
                print(count)
                servers.clear()
            else:
                break
        except:
            break