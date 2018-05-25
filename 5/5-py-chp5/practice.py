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
    print("The encoded string is: ")
    rslt = ""
    for encChr in encStr:
        rslt += str(ord(encChr))
        rslt += " "
    rslt.rstrip()
    print(rslt)
    return rslt

def decoder(rslt):
    print("\nThe original string is: ")
    reslt = ""
    rslt = rslt.strip(" ")
    for code in rslt.split(" "):
        reslt += chr(eval(code))
    print(reslt)
    return 

def main():
    #cretUsrName()

    codedStr = encoder()
    decoder(codedStr)



    
main()
