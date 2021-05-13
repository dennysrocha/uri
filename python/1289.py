def prob2Win(n, p, i):
    aux1 = (1-p)**(i-1)*p
    aux2 = (1-(1-p)**n)
    if aux2 == 0.0:
        return 0.0
    return aux1/aux2
if __name__ == '__main__':
    S = int(input())
    for _ in range(S):
        N, P, I = input().split()
        print(f"{prob2Win(int(N), float(P), int(I)):.4f}")

# the probability to win is the sum of:
# 1) when the 0->I-1 players lose and the I player win:
# 2) when the 0->N->0->I-1 players lose and the I player win
# 3) when the 0->N->0->N->0->I-1 players lose and the I player win
# 4) when the 0->N->0->N->0->N->0->I-1 players lose ant the I player win
# ...
# S = (1-p)^(i-1)*p*(1 + (1-p)^N + (1-p)^2N + (1-p)^3N + ...)        (1)
# multiply (1) by (1-p)^N:
# (1-p)^N*S = (1-p)^(i-1)*p*((1-p)^N + (1-p)^2N + (1-p)^3N + ...)    (2)
# subtract (2) from (1):
# S(1-(1-p)^N) = (1-p)^(i-1)*p
# finally:
# S = ((1-p)^(i-1)*p)/(1-(1-p)^N)