class HelpDemo {
	public static void main(String[] args)
	throws java.io.IOException{
		Help oHelp = new Help();
		
		// Show menu
		oHelp.showMenu();
		
		// Get user's choice
		while (true)
		{
			char cChc = (char)System.in.read();
			if ('0' == cChc)
			{
				return ;
			}
			else if (('\n' == cChc) || ('\r' == cChc))
			{
				continue;
			}
			else
			{
				oHelp.showHelpContentByChoice(cChc);
			}
		}
	}
}