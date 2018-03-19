/*
 * Test class for Jni
 */
 
 class JniDemo {
	 static {
		System.loadLibrary("JniTest");
		 
	 }
	 
	 public static void main(String[] args) {
		JniM oJniM = new JniM();
		oJniM.sayRunPlace();
	 }
 }
