dict = {1:"1", 2:"2", 3:"3", 4:"4", 5:"5", 6:"6", 7:"7", 8:"8",
        9:"9", 10:"A", 11:"B", 12:"C", 13:"D", 14:"E", 15:"F"}
def bin2Hex(num):
    res = ""
    aux = (4-len(num)%4)%4
    while aux>0:
        num = "0" + num
        aux-=1
    for i in range(0, len(num), 4):
        c = 8*int(num[i]) + 4*int(num[i+1]) + 2*int(num[i+2]) + int(num[i+3])
        res += dict[c]
    return res

def bin2Dec(num):
    if num == "":
        return 0
    return int(num[len(num)-1]) + 2*bin2Dec(num[0:len(num)-1])

def inverseDec2Bin(num):
    if num == 0:
        return ""
    aux = num//2
    return str(num%2) + inverseDec2Bin(aux)

def dec2Bin(num):
    var = inverseDec2Bin(int(num))
    print(var)
    aux = list(var)
    aux.reverse()
    return ''.join(aux)


def hex2Bin(num):
    return




if __name__ == '__main__':
    # N = int(input())
    # for i in range(N):
    #     num, base = input().split()
    #     if base == "bin":
    #         print(f"Case {i+1}:\n{bin2Dec(num)} dec\n{bin2Hex(num)} hex\n")
    #     elif base == "hex":
            
    #     else:
    a = print(dec2Bin("233"))