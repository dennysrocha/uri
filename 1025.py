def binary_search(array, target):
    lower = 0
    upper = len(array)
    while lower < upper:   # use < instead of <=
        x = lower + (upper - lower) // 2
        val = array[x]
        if target == val:
            if x>0:
                while target == array[x-1]:
                    x -= 1
            return x
        elif target > val:
            if lower == x:   # these two are the actual lines
                break        # you're looking for
            lower = x
        elif target < val:
            upper = x

if __name__ == '__main__':
    N, Q = map(int, input().split())
    case = 1
    while (N, Q) != (0, 0):
        marbles = [100001] * N
        print(f"CASE# {case}:")
        for i in range(N):
            marbles[i]=int(input())
        marbles = sorted(marbles)
        #print(marbles)

        for j in range(Q):
            numToFind = int(input())
            index = binary_search(marbles, numToFind)
            if index == None:
                print(f"{numToFind} not found")
            else:
                print(f"{numToFind} found at {index+1}")

        marbles.clear()
        case += 1

        N, Q = map(int, input().split())