def add(n1,d1,n2,d2):
    numLeft = n1*d2 + n2*d1
    divLeft = d1*d2
    simplify(numLeft,divLeft)

def sub(n1,d1,n2,d2):
    numLeft = n1 * d2 - n2 * d1
    divLeft = d1 * d2
    simplify(numLeft, divLeft)

def pdt(n1,d1,n2,d2):
    numLeft = n1 * n2
    divLeft = d1 * d2
    simplify(numLeft, divLeft)

def div(n1,d1,n2,d2):
    numLeft = n1 * d2
    divLeft = n2 * d1
    simplify(numLeft, divLeft)

def simplify(a,b):
    num = a
    div = b
    while b:
        a,b = b, a%b
    print(f"{num}/{div} = {int(num/a)}/{int(div/a)}")


dictionary = {'+':add, '-':sub, '*':pdt, '/':div}

if __name__ == '__main__':
    for N in range(int(input())):
        n1,div1,d1,op,n2,div2,d2 = input().split()
        dictionary.get(op)(int(n1),int(d1),int(n2),int(d2))