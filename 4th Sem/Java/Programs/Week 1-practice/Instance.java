class Instance
{
	static
	{
		System.out.println("Welcome to Java");
	}
	Instance() {
		this(2);
		System.out.println("Zero argument constructor");
	}

	Instance(int a) 
	{
		System.out.println("One argument constructor");
	}
	{
		System.out.println("Instance Block - 1");
		{
			System.out.println("Instance Block 1 of 1");
		}
	}
	{
		System.out.println("Instance Block - 2");
	}
	public static void main(String[] args)
	{
		new Instance();
		System.out.println("");
	}
}