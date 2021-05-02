import math

def probToWin(EV1, EV2, AT, D):
    
    # in gambler's ruin problem, the probability to reach a fortune $N starting with $i rolling
    # a dice with probability 'p' to win and thus q = '1-p' to loose is given by (only if p!=q):
    # P_i = ( 1 - (q/p)^(i) ) / ( 1 - (q/p)^(N) )
    # if p = q, then P_i = i/N
    # since 'i' denote the vampires 1 starting life: i = EV1
    # in our case, vampire 1 wins when vampire's 2 healthpoints == 0, that is reached when he
    # wins EV2 times... therefore, we can say that the victory occurs when vampires 1 life is
    # equal to N = EV1 + EV2
    # the probability to vampire 1 wins and loose are, respectively p = AT/6 and q = (6-AT)/6,
    # because the number of faces is given as 6... then: q/p = (6-AT)/AT
    # finally, the solution (to vampire 1 = V1 wins) can be rewritten as:
    # P(V1) = ( 1 - ((6-AT)/AT)^(EV1) ) / ( 1 - ((6-AT)/AT)^(EV1+EV2) )

    # first it's necessary to normalize the lifes to treat as "money", like gambler's problem:
    EV1 = math.ceil(EV1/D)
    EV2 = math.ceil(EV2/D)

    if AT == 3: # case when p==q, thus P_i = i/N = EV1/(EV1+EV2)
        return EV1/(EV1 + EV2)

    # applying the solution above:
    return (1-pow((6-AT)/AT, EV1))/(1-pow((6-AT)/AT, EV1+EV2))

if __name__ == '__main__':
    while True:
        EV1, EV2, AT, D = map(int, input().split())
        if EV1 == EV2 == AT == D == 0:
            break
        print(f"{100*probToWin(EV1, EV2, AT, D):.1f}")