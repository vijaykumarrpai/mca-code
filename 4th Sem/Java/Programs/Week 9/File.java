import java.io.*;

class File {
	public static void main(String[] args) {
		FileInputStream fis = null;
		try {
			fis = new FileInputStream("B:/test.txt");
		}catch(FileNotFoundException fnfe) {
			System.out.println("The specified file is not " + "present at the given location" + fnfe);
		}
	}
}