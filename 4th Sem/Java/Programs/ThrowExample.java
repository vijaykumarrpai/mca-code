import java.util.Scanner;

public class ThrowExample {
    static void checkEligibility(int stuage, int stuweight) {
        if(stuage < 12 && stuweight < 40) {
            throw new ArithmeticException("Student is not eligible");
        }
        else {
            System.out.println("Student entry is valid");
        }
    }
    public static void main(String[] args) {
        System.out.println("Welcome");
        Scanner sc = new Scanner(System.in);
        checkEligibility(13, 41);
        System.out.println("Have a nice day");
    }
}