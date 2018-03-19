/*
 * Test class for Jni
 */
 
 class JniDemo {
	 static {
		System.loadLibrary("JniTest");
		 
	 }
	 
	 public static void main(String[] args) {
		JniM oJniM = new JniM();
		//Test Code 
		oJniM.sayRunPlace();
		
		// Get keyborad 
		String strRslt;
		int count = 0;
		while (true){
			count++;
			if (10 < count){
				break;
			}
			strRslt = oJniM.getKeyCode();
			System.out.println("User input is :" + strRslt);
		}
	 }
 }
