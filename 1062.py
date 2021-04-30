if __name__ == '__main__':
    while True:
        N = int(input())
        if N == 0:
            break
        while True:
            stackA = list(map(int, input().split()))
            stackB = []
            stackS = []
            num = N
            err = False
            if stackA == [0]:
                break
            while num != 0:
                #print(f"Nova iteracao:")
                sizeA = len(stackA)
                sizeS = len(stackS)
                #print(f"Inicio: sizeA = {sizeA}, sizeS = {sizeS}")
                if sizeA != 0 and stackA[sizeA-1] == num:
                    num -= 1
                    stackB.append(stackA[sizeA-1])
                    stackA.pop()
                elif sizeS != 0 and stackS[sizeS-1] == num:
                    num -= 1
                    stackB.append(stackS[sizeS-1])
                    stackS.pop()
                else:
                    if sizeA == 0:
                        print("No")
                        err = True
                        break
                    stackS.append(stackA[sizeA-1])
                    stackA.pop()
            if err == False:
                print("Yes")
            stackA.clear()
            stackS.clear()
            stackB.clear()
        print("")