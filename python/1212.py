def digitSum(n):
    return sum(map(int,str(n)))

def carryCounter(a, b):
    return int((digitSum(a) + digitSum(b) - digitSum(a+b)) / 9)

if __name__ == '__main__':
    while True:
        a, b = map(int, input().split())
        if a == 0 and b == 0:
            break
        carry = carryCounter(a, b)
        if carry == 0:
            print("No carry operation.")
        elif carry == 1:
            print(f"{carry} carry operation.")
        else:
            print(f"{carry} carry operations.")
        

    # for example, let observ the sum of 4065 and 1897:
    # 4065 + 1897 = 5962

    #     4 +  0 +  6 +  5 = 15
    # +   1 +  8 +  9 +  7 = 25
    #     ---------------------
    #     5 +  8 + 15 + 12 = 40
    # -   5 +  9 +  6 +  2 = 22
    #     ---------------------
    #     0 + -1 +  9 + 10 = 18
    #
    # we can see that for every carry, the result will increase by 9

