public class Equals {
 public static void main(String args[])
  {
    String x = "a test";
    String y = new String("a test");
    System.out.println(x==y); //prints false
    System.out.println(x.equals(y)); //prints true
}
}