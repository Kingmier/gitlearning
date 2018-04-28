# Python mathematics library learning
import math


def main():
    print("please input the parameters like a b c in this expression: ax² + bx + c = 0.\n")
    aPar = int(input("a = "))
    print()
    bPar = int(input("b = "))
    print()
    cPar = int(input("c = "))
    print()

    dRoot = math.sqrt(bPar * bPar - 4 * aPar * cPar)
    x1 = round((bPar * (-1) + dRoot) / (aPar * 2), 3)
    x2 = round((bPar * (-1) - dRoot) / (aPar * 2), 3)

    print("The result is : ", x1, x2)


main()

