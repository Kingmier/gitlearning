/*
 * Bit operation demo
 */
class BitDemo{
	public static void main(String[] args)
	throws java.io.IOException{

		//System.out.print("Please input the number: ");
		//int iInput = System.in.read();
		Bit oBit = new Bit();
		System.out.print("Please input the number: ");
	        int iInput = System.in.read();
		oBit.showRsltInBitModel(iInput);
	}
}
