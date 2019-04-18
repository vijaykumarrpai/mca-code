import java.util.Scanner;
class Loops_Reverse {
public static void main(String args[]) {
      int num, reverse = 0;
 
      System.out.println("\nEnter the number to reverse");
      Scanner scan = new Scanner(System.in);
      num = scan.nextInt();
 
      while( num != 0 ) {
          reverse = reverse * 10;
          reverse = reverse + num % 10;
          num = num/10;
      } 
      System.out.println("\nReverse of entered number is "+reverse);
   }
 }