# Chapter 5 Practice

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
    
def main():
    #cretUsrName()

    #codedStr = encoder()
    #print("The coded string is : ", codedStr)

    #decoder(codedStr)

    encStr = encoderExt()
    print("The coded string is : ", encStr)
    decoderExt(encStr)

    
main()
