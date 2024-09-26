n = int(input())

while n > 0:
    casas = int(input())
    resp = 1
    for i in range(1, casas+1):
        resp = resp * 2
    resp = (resp // 12) // 1000
    print(f"{resp} kg")
    n -= 1