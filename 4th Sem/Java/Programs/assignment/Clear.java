package dance;
import java.io.IOException;
public class Clear 
{
public static void main(String[] args) throws IOException,InterruptedException
{
Thread.sleep(2000);
new ProcessBuilder("cmd","/c","cls").inheritIO().start().waitFor();
}
}