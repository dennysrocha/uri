# problema bem legal

# algoritmo:

# recebe no input uma string com a expressão a ser convertida
# de infixo para pos-fixo


operators = ['(', ')', '^', '*', '/', '+', '-']

def priority(c, top):
    if c == '^':
        pc = 4
    elif c == '*' or c == '/':
        pc = 2
    elif c == '+' or c == '-':
        pc = 1
    else:
        pc = 4

    if top == '^':
        ptop = 3
    elif top == '*' or top == '/':
        ptop = 2
    elif top == '+' or top == '-':
        ptop = 1
    else:
        ptop = 0

    return pc <= ptop

def infix2postfix(infix):
    s = []
    postfix = []
    for i in range(len(infix)):
        c = infix[i]
        if c not in operators:
            postfix.append(c)
        elif c == '(':
            s.append(c)
        elif c == ')':
            while True:
                top = s.pop()
                if top != '(':
                    postfix.append(top)
                else:
                    break
        else: # é um operador (^, *, /, +, -)
            while s and priority(c, s[len(s)-1]):
                top = s.pop()
                postfix.append(top)
            s.append(c)

    while s:
        postfix.append(s.pop())

    return str(''.join(map(str, postfix)))


if __name__ == '__main__':
    N = int(input())
    for i in range(N):
        expression = input()
        print(infix2postfix(expression))
