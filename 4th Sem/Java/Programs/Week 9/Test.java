import java.io.*;

class Test {
	public static void main(String[] args) {
		int x = 0;
		int y = 10;
		// try{
		// 	int z = y/x;
		// }catch(ArithmeticException ae) {
		// 	System.out.println("Arithmetic Exception occured\n" + ae); // Exception handled
		// }
		
		// try {
		// 	int z = y/x;
		// }catch(ArithmeticException ae) {
		// 	System.out.println("Arithmetic Exception occured\n" + ae);
		// }catch(ArithmeticException ae1) {
		// 	System.out.println("Arithmetic Exception occured\n" + ae1); // Error
		// }
		
		// try {
		// 	int z = y/x;
		// }finally{
		// 	System.out.println("This is finally block"); // Finally block executed and exception not handled
		// }
		
		// try {
		// 	int z = y/x;
		// }finally {
		// 	System.out.println("This is finally block");
		// }catch(ArithmeticException ae2) {
		// 	System.out.println("Arithmetic Exception occured\n" + ae2); // Illegal start of type
		// }
		
		// try catch(ArithmeticException ae) {
		// 	System.out.println("Arithmetic Exception occured\n" + ae); // Error - flower bracket expected
		// }

		try {
			int z = y/x;
		}catch(ArithmeticException ae) // Flower bracket expected - error
	}
}