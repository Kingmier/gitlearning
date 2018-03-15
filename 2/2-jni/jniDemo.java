/*
 * Test class for Jni
 */
 class JniDemo {
	 static {
		 System.loadLibrary("JniM");
		 
	 }
	 
	 public static void main(String[] args) {
		 JniM oJniM = new JniM();
		 JniM.syaRunPlace();
	 }
 }