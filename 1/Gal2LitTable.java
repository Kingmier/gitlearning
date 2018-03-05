/*
 * Galoon to Liters Table
 */

class Gal2LitTable {
	public static void main(String args[]){
		for (float gallon = 1.0f; gallon <= 20; ++gallon)
		{
			System.out.println(gallon + "  ------ " + gallon * 3.7854);
		}
	}
}
