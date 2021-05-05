if __name__ == '__main__':
    while True:
        try:
            a, b = map(int, input().split())
            if a>b:
                a, b = b, a
            print(b-a)
        except EOFError:
            break