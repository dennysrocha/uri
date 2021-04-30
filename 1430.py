if __name__ == '__main__':
    dict = {'': 0.0, 'W': 1.0, 'H': 0.5, 'Q': 0.25, 'E': 0.125, 'S': 0.0625, 'T': 0.03125, 'X': 0.015625}
    while True:
        userinput = input()
        count = 0
        if userinput == '*':
            break
        userinput = userinput.split('/')
        for str in userinput:
            chr = list(str)
            sum = 0
            for i in range(len(chr)):
                sum += dict[chr[i]]
            if sum == 1.0:
                count += 1
        print(count)