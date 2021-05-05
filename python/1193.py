dict = {0:"0", 1:"1", 2:"2", 3:"3", 4:"4", 5:"5", 6:"6", 7:"7", 8:"8",
        9:"9", 10:"A", 11:"B", 12:"C", 13:"D", 14:"E", 15:"F"}
dictHexToBin = {"0":"0000", "1":"0001", "2":"0010", "3":"0011", "4":"0100", "5":"0101", "6":"0110",
                "7":"0111", "8":"1000", "9":"1001", "A":"1010", "B":"1011", "C":"1100", "D":"1101", 
                "E":"1110", "F":"1111"}

# returning a string
def bin2Hex(num):
    res = ""
    aux = (4-len(num)%4)%4
    while aux>0: # make the length multiple of 4: _ _ _ _  _ _ _ _  _ _ _ _
        num = "0" + num
        aux-=1
    for i in range(0, len(num), 4):
        c = 8*int(num[i]) + 4*int(num[i+1]) + 2*int(num[i+2]) + int(num[i+3])
        res += dict[c]
    return res

# returning a string
def bin2Dec(num):
    if num == "":
        return 0
    aux = len(num)
    return int(num[aux-1]) + 2*bin2Dec(num[:aux-1]) # truncate from '0' up to 'aux' but not including it

# returning a int
def dec2Bin(num):
    if num == 0:
        return ""
    aux = num//2
    return dec2Bin(aux) + str(num%2)

# returning a string with a possible sequence of "zeros" in head... need to treat
def hex2Bin(num):
    if num == "":
        return ""
    return dictHexToBin[num[0]] + hex2Bin(num[1:])




if __name__ == '__main__':
    N = int(input())
    for i in range(N):
        num, base = input().split()
        num = num.upper()
        if base == "bin":
            dec = bin2Dec(num)
            hex = bin2Hex(num)
            hex = hex.lower()
            print(f"Case {i+1}:\n{dec} dec\n{hex} hex\n")
        elif base == "hex":
            dec = hex2Bin(num)
            while dec[0] == "0":
                dec = dec[1:]
            dec = bin2Dec(dec)
            bin = hex2Bin(num)
            while bin[0] == "0":
                bin = bin[1:]
            print(f"Case {i+1}:\n{dec} dec\n{bin} bin\n")
        else: # case base == "dec"
            hex = dec2Bin(int(num))
            hex = bin2Hex(hex)
            hex = hex.lower()
            bin = dec2Bin(int(num))
            print(f"Case {i+1}:\n{hex} hex\n{bin} bin\n")