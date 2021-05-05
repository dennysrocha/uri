dict = {"0":0, "1":1, "2":2, "3":3, "4":4, "5":5, "6":6, "7":7, "8":8,
        "9":9, "A":10, "B":11, "C":12, "D":13, "E":14, "F":15}

def hex2Dec(n):
    if n == "":
        return 0
    aux = len(n)
    return dict[n[aux-1]] + 16*hex2Dec(n[:aux-1])

def dec2Hex(n):
    if n == 0:
        return ""
    r = n%16
    if r>9:
        aux = chr(r+55)
        r = aux
    else:
        r = str(r)
    return dec2Hex(n//16) + r

if __name__ == '__main__':
    while True:
        n = input()
        if n[0] == "-":
            break
        if len(n)>1 and n[1] == "x":
            print(hex2Dec(n[2:].upper()))
        else:
            print(f"0x{dec2Hex(int(n))}")
