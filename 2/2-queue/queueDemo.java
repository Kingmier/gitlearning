/*
 * Demo of queue usage
 */
 class QueueDemo {
	public static void main(String[] args) {
		Queue oQue = new Queue(10);
		
		oQue.put(1);
		oQue.put(3);
		oQue.put(5);
		oQue.put(2);
		oQue.put(4);
		System.out.println("Output: " + oQue.get());
		oQue.put(7);
		oQue.put(8);
		oQue.put(8);
		oQue.put(10);
		oQue.put(5);
		
		System.out.println("Output: " + oQue.get());
		System.out.println("Output: " + oQue.get());
		System.out.println("Output: " + oQue.get());
		System.out.println("Output: " + oQue.get());
		
		oQue.put(21);
		oQue.put(22);
		oQue.put(23);
		oQue.put(24);
		oQue.put(25);
		oQue.put(26);
	}
 }