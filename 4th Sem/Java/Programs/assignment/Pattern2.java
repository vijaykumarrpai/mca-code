public class Pattern2 {
	int i,j;
	public void show ()
	{
	for(i=0; i < 4; i++)
	{
	for(j=0; j<=i; j++)
	{
	if(j % 2 == 0)
	System.out.print("*");
	else
	System.out.print("#");
	}
	System.out.println();
	}
	}
	public static void main(String args[])throws Exception
	{
	Pattern2 ob = new Pattern2();
	ob.show();
	}
	}