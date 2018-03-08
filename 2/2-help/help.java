class Help {
	void showMenu () 
	{
		System.out.println("Please input your choice:");
		System.out.print("\t1.if\n");
		System.out.print("\t2.switch\n");
		System.out.print("\t3.for\n");
		System.out.print("\t4.while\n");
		System.out.print("\t5.do-while\n");
		System.out.print("\t0.quite\n");
		System.out.println("***********************************");
		
		return ;
	}
	
	void showHelpContentByChoice(char choice)
	{
		switch (choice)
		{
			case '1':
                System.out.println("***********************************");
				System.out.println("The if:");
				System.out.println("if (condition) statement;");
				System.out.println("else statemen");
				break;
			case '2':
                System.out.println("***********************************");
				System.out.println("The switch:\n");
				System.out.println("switch(expression) {");
				System.out.println("\tcase constant:");
				System.out.println("\t\tStatement sequence;");
				System.out.println("\t\tbreak;");
				System.out.println("\t......");
				System.out.println("\tdefault:\n\t\t.....\n\t\tbreak;\n}");
				break;
			case '3':
                System.out.println("***********************************");
				System.out.println("The for:\n");
                System.out.println("for(inti; condition; iteration)");
                System.out.println("\tstatement");
				break;
			case '4':
                System.out.println("***********************************");
                System.out.println("The while:\n");
                System.out.println("while(condition)");
                System.out.println("\tstatement");
				break;
			case '5':
                System.out.println("***********************************");
                System.out.println("The do-while:\n");
                System.out.println("do {");
                System.out.println("\tstatement\n}");
                System.out.println("while(condition)");
				break;
			default:
                System.out.println("***********************************");
				if ((32 <= choice) && (126 >= choice))
				{
					System.out.println("Your choice \'" + choice + "\' is incorrect!");
				}
				else
				{
					System.out.println("Your choice which ASCII \'" + (int)choice + "\' is incorrect!");
				}
		}
	}
}