if __name__ == '__main__':
    while True:
        try:
            open = 0
            err = False
            expression = input()
            for i in range(len(expression)):
                if expression[i] == '(':
                    open += 1
                elif expression[i] == ')':
                    if open == 0:
                        print("incorrect")
                        err = True
                        break
                    open -= 1
            if open == 0 and err == False:
                print("correct")
            elif err == False:
                print("incorrect")
        except EOFError:
            break