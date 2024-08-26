#melhor fazer em python

first_output = True 
while True:
    try:
        year = int(input())
        if not year:
            break
        if not first_output:
            print()
        isLeap = False
        if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
            isLeap = True
            print("This is leap year.")
        if year % 15 == 0:
            print("This is huluculu festival year.")
        if year % 55 == 0 and isLeap:
            print("This is bulukulu festival year.")
        if (year % 400 != 0 and (year % 4 != 0 or year % 100 == 0)) and year % 15 != 0:
            print("This is an ordinary year.")
        first_output = False  
    except EOFError:
        break