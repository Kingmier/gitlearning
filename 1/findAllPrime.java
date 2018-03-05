/*
 * Find all prime numbers between 2 and 100
 */

class FindAllPrime {
	public static void main(String arg[]) {
		for (int iLoop = 3; iLoop < 100; ++iLoop)
		{
			int iCount = 0;
			for (int iTmp = 2; iTmp < iLoop; ++iTmp)
			{
				if (iLoop % iTmp == 0)
				{
					iCount++;
				}
			}
			if (0 == iCount)
			{
				System.out.print(iLoop + " ");
			}
		}
		System.out.println();
	}
}
