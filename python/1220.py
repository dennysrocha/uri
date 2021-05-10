if __name__ == '__main__':
    while True:
        N = int(input())
        if N == 0:
            break
        price = 0
        payments = []
        for _ in range(N):
            aux = float(input())
            payments.append(aux)
            price += aux
        price /= N
        payments.sort()
        #print(price)
        max = math.ceil(100*price)/100
        min = math.floor(100*price)/100
        #print(min, max)
        changes = 0
        amount1 = 0.0
        amount2 = 0.0
        for i in range(N):
            if payments[i] > max:
                amount1 += payments[i] - max
                changes += 1
            elif payments[i] < min:
                amount2 += min - payments[i]
                changes += 1
        if amount1 > amount2:
            print(f"${amount1:.2f}")
        else:
            print(f"${amount2:.2f}")
