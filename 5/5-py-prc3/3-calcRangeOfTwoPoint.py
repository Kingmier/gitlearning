# Programming practice of Chapter3 6~10

import math


def calcSlopOfSegment():
    x1, y1 = eval(input("Please input position of first point: "))
    x2, y2 = eval(input("Please input position of second point: "))
    print("The slop of segment is :", round((y1 - y2) / (x1 - x2), 2))

def calcRange():
    x1, y1 = eval(input("Please input position of first point: "))
    x2, y2 = eval(input("Please input position of second point: "))
    print("The range between two points is :", round(math.sqrt(pow((x1-x2), 2) + pow((y1-y2), 2)), 2))

def calcRangeOfTwoPoint(x1, y1, x2, y2):
    return round(math.sqrt(pow((x1-x2), 2) + pow((y1-y2), 2)), 2)

def calcAreaOfTriangle():
    x1, y1 = eval(input("Please input position of first point: "))
    x2, y2 = eval(input("Please input position of second point: "))
    x3, y3 = eval(input("Please input position of third point: "))
    sideA = round(calcRangeOfTwoPoint(x1, y1, x2, y2), 5)
    sideB = round(calcRangeOfTwoPoint(x3, y3, x2, y2), 5)
    sideC = round(calcRangeOfTwoPoint(x1, y1, x3, y3), 5)
    sideT = (sideA + sideB + sideC) / 2

    area = math.sqrt(sideT * (sideT - sideA) * (sideT - sideB) * (sideT - sideC))
    print("The area of triangle is: ", round(area, 2))

def calcLengthOfStair():
    angle = eval(input("Please input angle of stair in degrees: "))
    height = eval(input("Please input height: "))
    radians = math.pi * angle / 180

    length = height / math.sin(radians)
    print("The length of stair should be more than ", round(length, 1), " meters")

def main():
    print("*** Calculate slop ***\n")
    calcSlopOfSegment()
    
    print("*** Get length of segment ***\n")
    calcRange()
    
    print("*** Calculate area of triangle ***\n")
    calcAreaOfTriangle()
    
    print("*** Get lenght of stair ***\n")
    calcLengthOfStair()

main()
