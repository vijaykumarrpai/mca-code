import java.util.Scanner;
import java.math.*;

public class Compound {
	public static void main(String args[]) {
		int p, t, r, n, compound;
		System.out.println("Enter the values");
		Scanner sc = new Scanner(System.in);
		p = sc.nextInt();
		t = sc.nextInt();
		r = sc.nextInt();
		n = sc.nextInt();
		
		double amount = p * Math.pow(1 + (r / n), n * t);
		double interest = amount - p;
		
		System.out.println("Compound interest is : " + interest);
		System.out.println("Amount is : " + amount);
	}
}
