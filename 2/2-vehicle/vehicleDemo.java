class VehicleDemo {
	public static void main (String args[])
	{
		Vehicle vhclDemo = new Vehicle();
		vhclDemo.passengers = 5;
		vhclDemo.fuelcap = 50;
		vhclDemo.mpg = 10;
		
		System.out.println("The car has defined with the spe: " + vhclDemo.passengers + "-" + vhclDemo.fuelcap + "-" + vhclDemo.mpg);
	}
}