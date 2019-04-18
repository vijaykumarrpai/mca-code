class Samsung
{
	public void phone1()
	{
		System.out.println("Samsung mobile");
	}
}
class SamsungS10 extends Samsung
{
	public void features1()
	{
		System.out.println("6.4-inch display and 4,100 mAh battery you get with the Galaxy S10+.");
		System.out.println("The S10+ also adds an 8-megapixel depth camera to the front of the phone");
	}
}
class Micromax
{
	public void phone2()
	{
		System.out.println("Micromax mobile");
	}
}
class MicromaxInfinity12 extends Micromax
{
	
		public void features2()
		{
			System.out.println("Micromax Infinity N12 is powered by a 2GHz octa-core MediaTek Helio P22 SoC processor");
			System.out.println("It comes with 3GB of RAM");
			System.out.println("Micromax Infinity N12 runs Android 8.1 and is powered by a 4,000mAh battery");
		}
	}

class Mobile 
{
	
		public static void main(String[] args) {
			SamsungS10 s1=new SamsungS10();
			s1.phone1();
			s1.features1();
			MicromaxInfinity12 m1=new MicromaxInfinity12();
			m1.phone2();
			m1.features2();

			int mprice=30000;
			int sprice=60000;
			if(mprice>sprice)
			{
				System.out.println("customer will buy MicromaxInfinity12");
			}
			else
			{
				System.out.println("customer will buy SamsungS10");
			}
		}
	}
