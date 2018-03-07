class VehicleDemo {
	public static void main (String args[])
	{
		Vehicle vhclDemo = new Vehicle(5, 50, 10.0f);
		
		System.out.println("The demo car can't run more than " + vhclDemo.range() + "KiloMeters.");
	}
}