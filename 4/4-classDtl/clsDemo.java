class ClsDemo{
	public static void main(String[] args){
		ClsBsc oBsc = new ClsBsc(4);
		
		int iRet = ClsBsc.getWheelNO();
		System.out.println("The wheel is:" + iRet);
		
		ClsBsc oBscT = new ClsBsc(8);
		oBsc.getCarInfo(oBscT);
		System.out.println("Car Info:\n \tWheel NO. = " + iRet);
	}
}