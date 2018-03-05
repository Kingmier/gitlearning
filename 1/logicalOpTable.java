/*
 * Logical operation table
 */

class LogicalOpTable {
	public static void main(String args[]) {
		System.out.println("X\tY\tAND\tOR\tNOT\tXOR");
//		boolean varT = true, varF = false;
		boolean varFst = true, varSec = true;
		
		System.out.println(varFst + "\t" + varSec + "\t" + (varFst & varSec) + "\t" + (varFst | varSec) + "\t" + (!varFst) + "\t" + (varFst ^ varSec));
	
		varSec = false;
		System.out.println(varFst + "\t" + varSec + "\t" + (varFst & varSec) + "\t" + (varFst | varSec) + "\t" + (!varFst) + "\t" + (varFst ^ varSec));

		varFst = false;
		System.out.println(varFst + "\t" + varSec + "\t" + (varFst & varSec) + "\t" + (varFst | varSec) + "\t" + (!varFst) + "\t" + (varFst ^ varSec));

		varSec = true;
		System.out.println(varFst + "\t" + varSec + "\t" + (varFst & varSec) + "\t" + (varFst | varSec) + "\t" + (!varFst) + "\t" + (varFst ^ varSec));
	}
}
