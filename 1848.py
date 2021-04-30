dict = {'0b': '0b', '*': 1, '-': 0}

if __name__ == '__main__':
    num = 0
    for n in range(3):
        while True:
            num_bin = ['0b']
            line = input()
            if line == 'caw caw':
                break
            num_bin.extend(list(line))
            # print(num_bin)
            for i in range(len(num_bin)):
                num_bin[i] = dict[num_bin[i]]
            num += int(str(''.join(map(str, num_bin))), 2)
        print(num)
        num = 0