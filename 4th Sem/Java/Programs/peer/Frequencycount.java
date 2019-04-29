import java.io.*;
class Frequencycount
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Given: ");
        String s=br.readLine();
        System.out.println("Given word: ");
        String sub=br.readLine();
        int ind,count=0;
        for(int i=0; i+sub.length()<=s.length(); i++)    
        {
            ind=s.indexOf(sub,i);
            if(ind>=0)
            {
                count++;
                i=ind;
                ind=-1;
            }
        }
        System.out.println("Output '"+sub+"' in String is "+count);
 
    }
}
