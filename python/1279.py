def leap(year): # divisible by 4 and not by 100, except in cases that is divisible by 400
    return ((year%4 == 0 and year%100 != 0) or year%400 == 0)

def huluculu(year): # divisible by 15
    return year%15 == 0

def bulukulu(year): # divisible by 55 and leap year
    return (leap(year) and year%55 == 0)

if __name__ == '__main__':
    first = True
    while True:
        try:
            year = int(input())
            flag = True
            if not first:
                print("")
            first = False
            if leap(year):
                print("This is leap year.")
                flag = False
            if huluculu(year):
                print("This is huluculu festival year.")
                flag = False
            if bulukulu(year):
                print("This is bulukulu festival year.")
            if flag:
                print("This is an ordinary year.")
        except EOFError:
            break