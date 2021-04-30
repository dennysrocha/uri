if __name__ == '__main__':
    cidade = 0
    N = input()
    while True:
        consumption = [0] * 201
        water_total = 0
        people_total = 0
        cidade += 1
        print(f"Cidade# {cidade}:")
        for i in range(int(N)):
            people, water = map(int, input().split())
            water_total += water
            people_total += people
            media = water//people
            consumption[media] += people
        bo = False
        for i in range(201):
            if consumption[i] != 0:
                if bo != True:
                    print(f"{consumption[i]}-{i}", end='')
                    bo = True
                else:
                    print(f" {consumption[i]}-{i}", end='')
        print('')
        val = int(float("%.2f" % float((water_total*100)/(people_total))))
        print(f"Consumo medio: {val/100:.2f} m3.")
        consumption.clear()
        N = input()
        if N == '0':
            break
        print('')