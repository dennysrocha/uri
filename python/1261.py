if __name__ == '__main__':
    M, N = map(int, input().split())
    dictionary = dict(input().split() for _ in range(M))
    #print(dictionary)
    for i in range(N):
        count = 0
        while True:
            line = input().split()
            if line[0] == '.':
                break
            for word in line:
                count += int(dictionary.get(word, '0'))
        print(count)
