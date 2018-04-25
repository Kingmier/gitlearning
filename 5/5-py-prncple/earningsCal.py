#coding=utf-8

def main():
    prncple = eval(input("Please input the principle that you used for investment:"))
    print("The interest rate is : 3.5%")
    years = eval(input("Please input the time length (years):"))

    prncpleFnl = prncple
    for year in range(years):
        prncpleFnl = prncpleFnl * (1 + 0.035)

    print("The principle you'll have after ", years, "is : ", prncpleFnl)


main()
