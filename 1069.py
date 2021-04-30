if __name__ == '__main__':
    N = int(input())
    for i in range(N):
        line = input()
        open = 0
        diamond = 0
        for j in range(len(line)):
            if line[j] == '<':
                open += 1
            elif line[j] == '>' and open != 0:
                open -= 1
                diamond += 1
        print(diamond)
