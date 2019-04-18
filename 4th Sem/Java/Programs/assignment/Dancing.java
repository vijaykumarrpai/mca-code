import java.io.IOException;
import dance.Clear;
class Dancing extends Thread
{
    public static void clearScreen() {
        System.out.print("");
        System.out.flush();
        }

    public static void main(String[] args) throws IOException,InterruptedException {     
        String firstName="AyUsH";
        String lastName="";
        System.out.println("Dancing : " + firstName);
        for(int i = 0; i < firstName.length(); i++)
        {
            if(Character.isUpperCase(firstName.charAt(i)))
            {
                lastName+=((Character.toString(Character.toLowerCase(firstName.charAt(i)))));       
            }
            else
                if(Character.isLowerCase(firstName.charAt(i)))
                {
                    lastName+=((Character.toString(Character.toUpperCase(firstName.charAt(i)))));
                }
        }
        try
        {
        while(true)        
        {
            System.out.println("Dancing : " + firstName);
            Thread.sleep(2000);
                                
            clearScreen();
            System.out.println("Dancing : " + lastName);
            Thread.sleep(1000);
            new ProcessBuilder("cmd","/c","cls").inheritIO().start().waitFor();
            System.exit(0);
        }
    }
        catch (Exception e) {

        }
    }
}



