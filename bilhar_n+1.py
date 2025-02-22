import math

class Points:
    def __init__(self, x, y):
        self.x = x
        self.y = y


def dist(pointsWhiteBall, pointsOtherBall):
    xx = pow((pointsWhiteBall.x - pointsOtherBall.x), 2)
    yy = pow((pointsWhiteBall.y - pointsOtherBall.y), 2)
    return math.sqrt(xx+yy)

n = int(input())
while n != 0:
    pn = int(input())
    pn+=1
    pointsList = list()
    while pn != 0: 
        xx, yy= map(int, input().split())
        points = Points(x=xx, y=yy)
        pointsList.append(points)
        pn-=1
    lowerIndex = 1
    lowerResult = dist(pointsList[0], pointsList[1])
    for i in range(2, len(pointsList)):
        aux = dist(pointsList[0], pointsList[i])
        if(aux < lowerResult):
            lowerResult = aux
            lowerIndex = i

    print(lowerIndex)
    n-=1
