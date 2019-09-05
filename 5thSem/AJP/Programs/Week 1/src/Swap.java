import java.util.Scanner;

public class Swap {
	public static void main(String[] args) {
		int m,n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter first number");
		m = sc.nextInt();
		System.out.println("Enter second number");
		n = sc.nextInt();
		m = m ^ n;
		n = m ^ n;
		m = m ^ n;
		System.out.println("After swapping");
		System.out.println("First no : " +m);
		System.out.println("Second no : " +n);
	}
}
