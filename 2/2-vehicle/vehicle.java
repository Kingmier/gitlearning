class Vehicle{
	int passengers;
	int fuelCap;
	float LtrPerHndrK;
	
	Vehicle(int pass, int fuel, float mpg)
	{
		this.passengers = pass;
		this.fuelCap = fuel;
		this.LtrPerHndrK = mpg;
	}
	
	float range()
	{
		return ((float)fuelCap / LtrPerHndrK) * 100 ;
	}
}
