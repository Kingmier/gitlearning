# Chapter 5 Practice
from graphics import *

def cretUsrName():
    inputName = input("Please input your name:")
    iBlackPos = 0
    for chr in inputName:
        if (" " == chr):
            break
        iBlackPos += 1
    #print("iBlackPos = ", iBlackPos)
    usrName = inputName[0] + inputName[iBlackPos + 1 : iBlackPos + 8]
    print("Your name is :", usrName)

def encoder():
    encStr = input("Plese input the string to encode:")
    rslt = ""
    for encChr in encStr:
        rslt += str(ord(encChr))
        rslt += " "
    rslt = rslt.rstrip()
    return rslt

def decoder(rslt):
    #print("\nThe original string is: ")
    reslt = ""
    for code in rslt.split(" "):
        reslt += chr(eval(code))
    print("The string after decoded is : ", reslt)
    return

def encoderExt():
    encStr = input("Plese input the string to encode:")
    rslt = []
    for encChar in encStr:
        rslt.append(ord(encChar))

    return "".join(str(rslt))

def decoderExt(codedStr):
    codedStrTmp = codedStr.replace("[", "")
    codedStrTmp = codedStrTmp.replace("]", "")
    
    print("The input string is : ", codedStrTmp)
    rslt = ""
    for codedChr in codedStrTmp.split(","):
        rslt += chr(eval(codedChr))

    print("The string after decoded is : ", rslt)

def cvtRMB2USD():
    # draw window
    diag = GraphWin("Convert RMB to USD", 400, 250)
    #Line(Point(50, 50), Point(50, 250)).draw(diag)

    # draw static text
    stacRMB = Text(Point(70, 50), "RMB:")
    stacRMB.setSize(25)
    stacRMB.setStyle("bold")
    stacRMB.setTextColor("blue")
    stacRMB.draw(diag)
    
    stacUSD = Text(Point(70, 130), "USD:")
    stacUSD.setSize(25)
    stacUSD.setStyle("bold")
    stacUSD.setTextColor("blue")
    stacUSD.draw(diag)

    # draw input controller
    #Line(Point(230, 50), Point(230, 250)).draw(diag)
    inputRMB = Entry(Point(240, 52), 25)
    inputRMB.setText("")
    inputRMB.draw(diag)

    # draw convert button
    Text(Point(320,210), "Convert").draw(diag)
    Rectangle(Point(280, 190), Point(360, 230)).draw(diag)

    # calculate USD
    diag.getMouse()
    strUSD = inputRMB.getText()
    if (strUSD == ""):
        promp(diag, "Please input the RMB value", 200, 75)
    else:
        varUSD = eval(strUSD) / 6.4070
        outputUSD = "{0:<50.5f}".format(varUSD)
    
        # show USD
        Text(Point(240, 130), outputUSD).draw(diag)

    diag.getMouse()
    diag.close()

def promp(win, text, x, y):
    prompTxt = Text(Point(x, y),text)
    prompTxt.setTextColor("red")
    prompTxt.setStyle("italic")
    prompTxt.draw(win)
    
def main():
    #cretUsrName()

    #codedStr = encoder()
    #print("The coded string is : ", codedStr)

    #decoder(codedStr)

    #encStr = encoderExt()
    #print("The coded string is : ", encStr)
    #decoderExt(encStr)

    cvtRMB2USD()
    
main()
