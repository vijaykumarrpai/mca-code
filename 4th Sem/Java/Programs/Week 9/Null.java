import java.io.*;

class Null {
	public static void main(String[] args) {
		Object ref = null;
		try{
			ref.toString();
		}catch(NullPointerException np) {
			System.out.println("Null Pointer Exception occured \n" + np);
		}
	}
}