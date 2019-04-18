public class If1 
{
    static boolean b;
    public static void main(String [] args) 
    {
        short hand = 42;
        if ( hand < 50 && !b ) /* Line 7 */
            hand++;
        if ( hand > 50 );     /* Line 9 */
        else if ( hand > 40 ) 
        {
            hand += 7;
            hand++;    
        }
        else
            --hand;
        System.out.println(hand);
    }
}