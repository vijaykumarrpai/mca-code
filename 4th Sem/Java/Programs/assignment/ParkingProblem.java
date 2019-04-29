import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class ParkingProblem {

	public static void main(String[] args) {
		int n, i = 1;
		int choice;
		String lots = null;
		System.out.println("Enter How many Cars in One Lots: ");
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
	    Queue<Integer> lot1 = new LinkedList<Integer>();   
	    Queue<Integer> lot2 = new LinkedList<Integer>();
	    Queue<Integer> lot3 = new LinkedList<Integer>();
	    
	    System.out.println("Vehicle Parked.");
	    while(true)
	    {
	    	System.out.println("1. For Parking");
	    	System.out.println("2. For Exiting");
	    	System.out.println("3. End Program");
	    	System.out.println("Enter the choice:");
	    	choice = sc.nextInt();
	    	switch(choice)
	    	{
	    		case 1: 
	    			System.out.println("You want to park");
	    			if(lot1.size() < n)
	    			{
	    				lot1.add(i);
	    				i= i+1;
	    				System.out.println(lot1);
	    			}
	    			else if(lot2.size() < n)
	    			{
	    				lot2.add(i);
	    				i = i+1;
	    				System.out.println(lot2);
	    			}
	    			else if(lot3.size() < n)
	    			{
	    				lot3.add(i);
	    				i = i + 1;
	    				System.out.println(lot3);
	    			}
	    			else
	    			{
	    				System.out.println("All Lots are full sorry wait");
	    			}
	    			break;
	    		case 2: 
	    			System.out.println("You want to exit with your car");
	    			System.out.println("Which lot?\nlot1\nlot2\nlot3");
	    			lots = sc.next();
	    			if(lots.equals("lot1"))
	    			{
	    				if(lot1.isEmpty())
	    				{
	    					System.out.println("Sorry No Vechicles");
	    				}
	    				else
	    				{
	    					lot1.remove();
		    				lot1.peek();
		    				System.out.println("In lot1:"+lot1);
	    				}
	    			}else if(lots.equals("lot2"))
	    			{
	    				if(lot2.isEmpty())
	    				{
	    					System.out.println("Sorry No Vechicles");
	    				}
	    				else
	    				{
	    					lot2.remove();
		    				lot2.peek();
		    				System.out.println("In lot2:"+lot2);
	    				}

	    			}
	    			else if(lots.equals("lot3"))
	    			{
	    				if(lot3.isEmpty())
	    				{
	    					System.out.println("Sorry No Vehicles");
	    				}
	    				else
	    				{
	    					lot3.remove();
		    				lot3.peek();
		    				System.out.println("In lot3:"+lot3);
	    				}
	    			}
	    			break;
	    		case 3: 
	    			System.out.println("You want to end program");
	    			System.exit(0);
	    			break;
	    		default: 
	    			System.out.println("Wrong choice");
	    	}
	    }
	}

}
