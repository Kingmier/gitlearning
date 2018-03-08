/* 
 * Help menu for Java - Practice for switch 
 */

class Help {
	public static void main (String arg[]) 
		throws java.io.IOException {
		System.out.println("Help on:\n\t1.if\n\t2.switch\n\t3.for\n\t4.while\n\t5.do-while\n\t0.quite");
		System.out.print("Choose one:");
		while(true)
		{
			char chc;
			do {
				chc = (char)System.in.read();
				System.out.println("===========" + chc + "============");
			} while ('\n' != chc);
			
			if ('0' == chc) {
				break;
			}	
				
			switch (chc) {
				case '1':
					System.out.println("The if:");
					System.out.println("if (condition) statement;");
					System.out.println("else statemen");
					break;
				case '2':
					System.out.println("The switch:");
					System.out.println("switch(expression) {");
					System.out.println("\tcase constant:");
					System.out.println("\t\tStatement sequence;");
					System.out.println("\t\tbreak;");
					System.out.println("\t......");
					System.out.println("\tdefault:\n\t\t.....\n\t\tbreak;\n}");
					break;
				case '3':
					System.out.println("The for:");
                                        System.out.println("for(inti; condition; iteration)");
                                        System.out.println("\tstatement");
					break;
				case '4':
                                        System.out.println("The while:");
                                        System.out.println("while(condition)");
                                        System.out.println("\tstatement");
					break;
				case '5':
                                        System.out.println("The do-while:");
                                        System.out.println("do {");
                                        System.out.println("\tstatement\n}");
                                        System.out.println("while(condition)");
					break;
				default:
					System.out.println("Your choice \'" + chc + "\' is incorrect!");
			}
		}
	}
}
