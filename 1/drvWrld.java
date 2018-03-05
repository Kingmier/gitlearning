/* 
 * Java Drive the World.
 */

class PrcJavaDrvWrld
{
	public static void main(String args[])
	{
		System.out.println("Java drive the world.");
		
		System.out.println("---------------------------------------");
		int var = 0, varSec = -1;
		var = 100;
		System.out.println("var = " + var);
		varSec = 100 / 5;
		System.out.print("varSec =  ");
		System.out.println(varSec);

		System.out.println("---------------------------------------");
		double varRslt = (double)var / 3;
		double varTmp = 100.0;
		float varRsltSec = (float)varTmp / 3;
		System.out.println("Double variable varRslt = " + varRslt);
		System.out.println("Double variable varRsltSec = " + varRsltSec);

		System.out.println("---------------------------------------");
		double liters = 0.0;
		double gallons = 10;
		System.out.println(gallons + " gallon is " + (gallons * 3.7854) + " liters");

		System.out.println("---------------------------------------"); 
		double varTmpFinal = 0.0;
		int count = 0;
		for (; (varTmp > 0 || varTmp < 0); )
		{
			varTmpFinal = varTmp;
			varTmp = varTmp / 3;
			count++;
		}
		System.out.println("After " + count + "times loop, the varTmp overflowed. The last value is :" + varTmpFinal);
	}
}
