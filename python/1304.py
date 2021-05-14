def hhmmssToH(hhmmss):
    h, m, s = [float(time) for time in hhmmss]
    return 3600*h + 60*m + s

if __name__ == '__main__':
    d = 0.0
    t = 0.0
    v = 0.0
    while True:
        try:
            line = input().split()
            if len(line) == 2:
                t0 = t
                t = hhmmssToH(line[0].split(":"))
                d += v*(t-t0)/3600
                v = float(line[1])
            else:
                t0 = t
                t = hhmmssToH(line[0].split(":"))
                d += v*(t-t0)/3600
                print(f"{line[0]} {d:.2f} km")
        except EOFError:
            break
