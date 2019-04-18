import java.io.*;

class Array {
	public static void main(String[] args) {
		int a[] = new int[5];
		try{
			a[10] = 50;
		}catch(ArrayIndexOutOfBoundsException ae) {
			System.out.println("Array Index Out Of Bounds Exception\n" + ae);
		}
	}
}