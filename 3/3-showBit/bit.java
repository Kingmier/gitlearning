/*
 * Bit operation
 */
class Bit{
	public void showRsltInBitModel(int arg){
		int iMsk = 0x8000;
		int iVar = arg;
		while (iMsk != 0x00){
			if((iVar & iMsk) != 0){
				System.out.print(1);
			} 
			else {
				System.out.print(0);
			}
			iMsk = iMsk >>> 1;
		}
		System.out.println();
	}
}
