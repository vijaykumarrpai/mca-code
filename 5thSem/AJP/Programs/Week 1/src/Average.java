import java.util.Scanner;

public class Average {
	public static void main(String[] args) {
		double arr[] = new double[5];
		System.out.println("Enter the marks to find the average");
		Scanner sc = new Scanner(System.in);
		double total = 0;
		
		for(int i = 0; i < 5; i++) {
			arr[i] = sc.nextDouble();
		}
		for(int i = 0; i < 5; i++) {
			total = total + arr[i];
		}
		
		double average = total / arr.length;
		
		System.out.println("Total: " +total);
		System.out.format("The average is: %.3f", average);
	}
}
