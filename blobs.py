n = int(input())
while n > 0:
    kg = float(input())
    dias = 0
    while kg > 1:
        kg = kg / 2
        dias += 1
        
    print(f"{dias} dias")
    n -= 1