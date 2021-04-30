if __name__ == '__main__':
    while True:
        N = int(input())
        if N == 0:
            break
        stackA = list(input().split())
        desired = list(input().split())
        stackB = []
        stackS = []
        num = N
        while num != 0:
            sizeA = len(stackA)
            sizeS = len(stackS)
            if sizeS != 0 and stackS[sizeS-1] == desired[N - num]:
                num -= 1
                stackB.append(stackS[sizeS-1])
                stackS.pop()
                print("R", end='')
            elif sizeA != 0:
                stackS.append(stackA[0])
                stackA.pop(0)
                print("I", end='')
            else:
                print(" Impossible", end='')
                break
        stackA.clear()
        stackS.clear()
        stackB.clear()
        print("")