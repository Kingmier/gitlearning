/*
 * Bit operation demo
 */
import java.util.Scanner;
class BitDemo{
	public static void main(String[] args)
	throws java.io.IOException{

		//System.out.print("Please input the number: ");
		//int iInput = System.in.read();
		Bit oBit = new Bit();
		Scanner oScan = new Scanner(System.in);
		System.out.print("Please input the number: ");
	        int iInput = oScan.nextInt();
		//iInput = (int)System.in.read();
		oBit.showRsltInBitModel(iInput);
	}
}
