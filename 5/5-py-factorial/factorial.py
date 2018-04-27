# factorial.py
# Source code for factorial of user input


def main():
	dataInput = int(input("Please input NO. "))
	rslt = 1;
	for iLoop in range(dataInput):
		rslt *= (iLoop + 1);
		
	print("The factorial of ", dataInput, " is ", rslt)
	
main()