if __name__ == '__main__':
    list = []
    while True:
        try:
            n = int(input())
            q = 0
            s = 0
            pq = 0
            impossible = 0
            first = 0
            last = 0
            maximum = 0
            countop = 0
            list.clear()
            for i in range(n):
                op,num = map(int, input().split())
                if op==1:
                    list.append(num)
                    if len(list)==1:
                        first = num
                        last = num
                        maximum = num
                if op==2:
                    countop+=1
                    if num==first:
                        q+=1
                    if num==maximum:
                        pq+=1
                    if num==last:
                        s+=1
                    if num in list:
                        list.remove(num)
                    else:
                        impossible += 1
                if len(list)>0:
                    first = list[0]
                    last = list[len(list)-1]
                    maximum = max(list)
            if (q==countop and (pq==countop or s==countop)) or (pq==countop and s==countop):
                print('not sure')
            elif q==countop:
                print('queue')
            elif s==countop:
                print('stack')
            elif pq==countop :
                print('priority queue')
            elif impossible != 0:
                print('impossible')
            else:
                print('not sure')
        except EOFError:
            break

