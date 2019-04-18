class Bike 
{
	Bike() 
	{
		System.out.println("Bike Class");
	}

	void bike() 
	{
		System.out.println("Runs on 2 wheels");
	}

	public static void main(String[] args)
	{
		Bike vijay = new Bike();
		Car kumar = new Car();

		vijay.bike();
		kumar.car();
	}
}

class Car
{
	Car()
	{
		System.out.println("Car Class");
	}

	void car()
	{
		System.out.println("Runs on 4 wheels");
	}
}