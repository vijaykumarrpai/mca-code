import java.io.*;
import java.util.*;

class Replaceword {
	public static void main(String[] args) {
		String sentence = "Santosh is a good boy";
		String newSentence = sentence.replace("boy", "Teacher");
		System.out.println(newSentence);
	}
}