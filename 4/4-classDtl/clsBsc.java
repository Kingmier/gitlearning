class ClsBsc{
	ClsBsc(ClsBsc arg){
		m_iWheel = arg.m_iWheel;
	}
	
	ClsBsc(int iWheelNO){
		m_iWheel = iWheelNO;
	}
	
	static int getWheelNO(){
		System.out.println("You are calling a static method.");
		//int iWheelNO = m_iWheel;
		return m_iWheel;
	}
	
	
	void getCarInfo(ClsBsc oCarInfo){
		System.out.println("You are calling a normal method.");
		oCarInfo = new ClsBsc(m_iWheel);
	}
	
	
	private static int m_iWheel;
}