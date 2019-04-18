import java.io.FileNotFoundException;
import java.io.PrintWriter;

class Test2 {
    public static void main(String[] args) throws FileNotFoundException {
        PrintWriter pw = new PrintWriter("abc.txt");
        pw.write("Hello");
        pw.close();
        System.out.println(10/0);
    }
}