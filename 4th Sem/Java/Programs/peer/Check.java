public class Check {
    public static void main(String[] args) {
         String[] words = { "santosh", "suraj", "sudhanva","shreedhar", "sushma", "smita"};
    
        for(int i = 0; i < 6; ++i) 
         {
         for (int j = i + 1; j < 6; ++j) 
     {
        if (words[i].compareTo(words[j]) > 0) 
        {
         String temp = words[i];
        words[i] = words[j];
        words[j] = temp;
        }
        }
        }
    
        System.out.println(
         for(int i = 0; i < 6; i++) {
        System.out.println(words[i]);
         }
         }
    }
    