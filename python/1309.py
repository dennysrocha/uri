import math

def moneyFormat(usd):
    if usd == 0:
        print("$0", end='')
        return
    else:
        l = int(math.log10(usd)) + 1
        # print(f"l: {l}")
        i = math.ceil(l/3)-1
        # print(f"i: {i}")
        res = ""
        print("$", end='')
        for j in range(l):
            pos = l-j
            print((usd//(10**(pos-1)))%10, end='')
            if (pos-1)%3 == 0 and pos>1:
                print(",", end='')
        return

if __name__ == '__main__':
    while True:
        try:
            dol_input = int(input())
            cen_input = int(input())
            moneyFormat(dol_input)
            print(f".{cen_input:02d}")
        except EOFError:
            break