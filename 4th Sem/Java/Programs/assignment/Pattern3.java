public class Pattern3 {
    public static void main (String args[]){
        int ln = 6; //Number Of Lines
        int pre1 = 1 , pre2 =0; 
        String temp = "";
        System.out.println(1);
        for(int r=1;r < ln;r++){
            System.out.print(1);
            for(int c=1; c <= r; c++){
                int print = 0;
                if(temp.length() >= c ){
                    System.out.print(temp.subSequence(c-1, c));
                } else{
                    print = pre1+pre2;
                    System.out.print(print);
                    pre1 = pre1+pre2 +pre1- (pre2 = pre1);
                    temp = temp + print;
                }
            }
            System.out.println();
        }
    }
}