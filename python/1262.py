if __name__ == '__main__':
    first = True
    while True:
        try:
            line = input()
            base = -1
            sum = 0
            possible = True
            for i in range(len(line)):
                c = ord(line[i])
                if c <= 57:
                    val = c-48
                    base = max(base, val)
                elif c <= 90:
                    val = c-65+10
                    base = max(base, val)
                else:
                    val = c-97+36
                    base = max(base, val)
                if c!=45:
                    sum += val
            

            if base == 0:
                print("2")
            else:
                base += 1
                while(sum%(base-1) != 0):
                    if base > 62:
                        print("such number is impossible!")
                        possible = False
                        break
                    base += 1
                if possible:
                    print(base)
        except EOFError:
            break