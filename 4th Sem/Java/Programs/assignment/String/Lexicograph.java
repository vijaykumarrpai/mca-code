import java.util.*;
import java.io.*;

class Lexicograph {
	public static void main(String[] args) {
		String[] words = {"Santosh", "Suraj", "Sudhanva", "Shreedhar", "Sushma", "Smita"};

		for(int i = 0; i < 5; ++i) {
			for (int j = i + 1; j < 6; ++j) {
				if (words[i].compareTo(words[j]) > 0) {
					String temp = words[i];
					words[i] = words[j];
					words[j] = temp;
				}
			}
		}
		System.out.println("Lexicographical order : ");
		for(int i = 0; i < 6; i++) {
			System.out.println(words[i]);
		} 
	}
}