class ClsDemo{
	public static void main(String[] args){
		ClsBsc oBsc = new ClsBsc(4);
		
		int iRet = ClsBsc.getWheelNO();
		System.out.println("The wheel is:" + iRet);
		
		ClsBsc oBscT = new ClsBsc(8);
		oBsc.getCarInfo(oBscT);
		System.out.println("Car Info:\n \tWheel NO. = " + iRet);
		
		System.out.println("---------------Sataic usage test---------------");
		ClsBsc oCar = new ClsBsc(4, 5);
		System.out.println("Car Info_Seat no:" + oCar.getSeatNO());
		
		ClsBsc oCatT = new ClsBsc(4, 6);
		ClsBsc.m_iSeatNO = 7;
		
		// After change the vale of static member, all Object(include initialized before it) change to new value
		System.out.println("CarT Info_Seat no:" + oCar.getSeatNO());
		System.out.println("Car Info_Seat no:" + oCar.getSeatNO());
	}
}