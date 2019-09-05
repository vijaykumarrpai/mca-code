package customexp;
import customexp.CustomExp;
public class SomeString {
	public static void main(String[] args) throws CustomExp {
		String s = null;
		if(s == null) {
			throw new CustomExp("Exception");
		}
	}
}
