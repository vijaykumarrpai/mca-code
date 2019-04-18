import java.io.*;
import java.util.*;

class Frequency {
    static int countOccurences(String str, String word) {
        String a[] = str.split(" ");

        int count = 0;
        for(int i = 0; i < a.length; i++) {
            if (word.equals(a[i]))
            count++;
        }
        return count;
    }
    public static void main(String[] args) {
        String str = "Santosh and Anand are sanskrit terms meaning happiness. The difference is Santosh is the happiness that spreads and Anand is the happiness that is felt by one-self.  Santosh enhances by giving and Anand enhances by involving. Anology: A person eats a chocolate and relishes its taste, and this is Anand, a feeling when you involve. You gift chocolate to your friend who likes it and when you see the joy on your friends face, you feel Santosh, a feeling of spreading happiness";
        String word = "Anand";
        System.out.println(word + " appears " + countOccurences(str, word) + " times in the given paragraph");
    }
}