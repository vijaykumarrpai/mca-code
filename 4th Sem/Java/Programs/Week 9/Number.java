import java.io.*;

class Number {
	public static void main(String[] args) {
		String s = "abc";
		try{
			int i = Integer.parseInt(s);
			System.out.println(i);
		}catch(NumberFormatException nfe) {
			System.out.println("Number format Exception occured\n" + nfe);
		}
	}
}