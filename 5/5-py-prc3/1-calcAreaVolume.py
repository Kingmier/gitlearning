# Programming pratice 3-1/3-2

import math
def calAreaOfCircle(rds):
    return math.pi * rds * rds;
    #print("The area of circle is :", math.pi * radius * radius)

def calAreaAndVolumnOfCircle(rds):
    print("The area is :", 4 * calAreaOfCircle(rds))
    print("The volumn is :", 4* math.pi * rds * rds * rds / 3)
    
def main():
    radius = float(input("Please input the radius of ball :"))
    calAreaAndVolumnOfCircle(radius)

    price = float(input("Please input the price of cake :"))
    print("The cost square centimeter is :", price / calAreaOfCircle(radius))
    
main()
