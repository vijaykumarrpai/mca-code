import java.text.ParseException;
import java.util.Arrays;

public class StringToASCII {
    public static void main(String args[]) throws ParseException {

        try {
            String text = "PESU";

            byte[] bytes = text.getBytes("US-ASCII");
            
            System.out.println("ASCII value of " + text + " is");
            System.out.println(Arrays.toString(bytes));
            
        } catch (java.io.UnsupportedEncodingException e) {
            e.printStackTrace();
        }
    }

}