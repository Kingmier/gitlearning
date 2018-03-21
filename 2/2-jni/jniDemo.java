/*
 * Test class for Jni
 */
 
 class JniDemo {
	 static {
		System.loadLibrary("cppadp");
		 
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
			if (1 < count){
				break;
			}
			strRslt = oJniM.getKeyCode();
			System.out.println("User input is :" + strRslt);
		}
		
		// Show panel
		String pnlAry[][] = {
		{"0", "0", "1", "0", "0", "0", "\n"},
		{"0", "0", "1", "1", "1", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"}
		};
		oJniM.showPanel(pnlAry, 2, 7);
waitSpecifiedTime(800);
		String pnlAry1[][] = {
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "1", "0", "0", "0", "\n"},
		{"0", "0", "1", "1", "1", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"}
		};
		oJniM.showPanel(pnlAry1, 2, 7);
waitSpecifiedTime(800);	
		String pnlAry2[][] = {
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "1", "0", "0", "0", "\n"},
		{"0", "0", "1", "1", "1", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"},
		{"0", "0", "0", "0", "0", "0", "\n"}
		};
		oJniM.showPanel(pnlAry2, 2, 7);
	 }
	 
	 public static void waitSpecifiedTime(int iTmLen)
	 {
		try {
            Thread.sleep(iTmLen);
        } catch (InterruptedException e) {
            e.printStackTrace(); 
        }
	 }
 }
