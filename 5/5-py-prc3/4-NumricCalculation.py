# Python for numerical data operation

import math
# iCnt : Count of natural numbers
def sumOfNaturalNumber(iCnt):
    iRslt = 0;
    for iLoop in range(1, iCnt + 1):
        iRslt += iLoop

    print("The sum of ", iCnt, "natural numbers is ", iRslt)

def cubicOfNaturalNumber(iNtrlNO):
    return iNtrlNO * iNtrlNO * iNtrlNO

def cubicSumOfNaturalNumber(iCnt):
    iRslt = 0;
    for iLoop in range(1, iCnt + 1):
        iRslt += cubicOfNaturalNumber(iLoop)

    print("The cubic sum of ", iCnt, "natural numbers is ", iRslt)

def sumOfSpeNatNO():
    iCnt = eval(input("How much NO. you'll input"))
    iRslt = 0;
    for iLoop in range(iCnt):
        iRslt += eval(input("Please input the NO.:"));

    print("The sum of you input is:", iRslt)
    return iRslt, iCnt;

def meanValOfInputNO():
    iRslt, iCnt = sumOfSpeNatNO();
    fRslt = float(iRslt / iCnt)

    print("The mean of you input NO is: ", fRslt)

def getPiValue():
    iCnt = eval(input("How many bits you'll input?"))
    fRslt = 0
    iTmp = 1
    for iLoop in range(iCnt):
        fRslt += 4 / (math.pow(-1, iLoop) * iTmp)
        iTmp += 2

    print("Pi = ", fRslt)
    print("Pi - math.pi = ", fRslt - math.pi)

def getSpeFibonacciNO():
    iCnt = eval(input("Which Fibonacci NO. you want:"))
    iRslt, iLst = -1, 0
    for iLoop in range(iCnt - 1):
        iRslt = abs(iRslt + iLst)
        iLst = iRslt - iLst
    print("The ", iCnt, "'th Fibonacci NO. is:", iRslt)

def main():
    # 11~12
    print("-------Chapter3-11~12-------\n")
    iCnt = int(input("Please input the NO. you want:"))
    sumOfNaturalNumber(iCnt)

    cubicSumOfNaturalNumber(iCnt)

    # 13
    print("-------Chpater3-13-------\n")
    sumOfSpeNatNO()

    #14
    print("-------Chapter3-14-------\n")
    meanValOfInputNO()

    #15
    print("-------Chapter3-15-------\n")
    getPiValue()

    #16
    print("-------Chapter3-16-------\n")
    getSpeFibonacciNO()


main() 
