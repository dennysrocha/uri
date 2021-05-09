if __name__ == '__main__':
    while True:
        try:
            n = int(input())
            num = 1
            count = 1
            while True:
                if num%n == 0:
                    print(count)
                    break
                num = (10*num + 1)%n
                count += 1
        except EOFError:
                break