/*
 * Test class for Jni
 */
 class JniDemo {
	 static {
		 System.load("/home/binwangn/workspace/git/gitlearning/2/2-jni/JniTest.so");
		 
	 }
	 
	 public static void main(String[] args) {
		 JniM oJniM = new JniM();
		 oJniM.sayRunPlace();
		 
		 System.out.println("Run in C++ successful");
	 }
 }
