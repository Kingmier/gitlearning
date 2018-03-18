/*
 * Test class for Jni
 */
 import java.io.File;
 
 class JniDemo {
	 static {
		 System.loadLibrary("JniTest");
		 
	 }
	 
	 public static void main(String[] args) {
		 JniM oJniM = new JniM();
		 oJniM.sayRunPlace();
		 
		 System.out.println("Run in C++ successful");
	 }
 }
