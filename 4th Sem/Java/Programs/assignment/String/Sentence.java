import java.util.*;
import java.io.*;

class Sentence {
	public static void main(String[] args) {
		String[] words = {"Santosh", "is", "a", "good", "Teacher"};
		String delimiter = " ";
		String sentence = String.join(delimiter, words);
		System.out.println(sentence + ".");
	}
}