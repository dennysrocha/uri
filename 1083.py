operators = {'^':6, '*':5, '/':5, '+':4, '-':4, '>':3, '<':3, '=':3, '#':3, '.':2, '|':1}

# operators = ['(', ')', '^', '*', '/', '+', '-']

def priority(c, top):
    if c == '^':
        pc = 7
    elif c == '*' or c == '/':
        pc = 5
    elif c == '+' or c == '-':
        pc = 4
    else:
        pc = 7

    if top == '^':
        ptop = 6
    elif top == '*' or top == '/':
        ptop = 5
    elif top == '+' or top == '-':
        ptop = 4
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
