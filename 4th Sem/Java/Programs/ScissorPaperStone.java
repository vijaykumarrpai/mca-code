import java.util.Random;
import java.util.Scanner;

/*
 * Define an enumeration called Sign, with 3 elements, referred to as:
 * HandSign.SCISSOR, HandSign.PAPER, HandSign.STONE.
 */
enum HandSign {
   SCISSOR, PAPER, STONE
}

/*
 * A game of scissor-paper-stone.
 */
public class ScissorPaperStone {
   public static void main(String[] args) {
      Random random = new Random();   // Create a random number generator
      boolean gameOver = false;
      HandSign playerMove = HandSign.SCISSOR;
      HandSign computerMove;
      int numTrials = 0;
      int numComputerWon = 0;
      int numPlayerWon = 0;
      int numTie = 0;

      Scanner in = new Scanner(System.in);
      System.out.println("Let us begin...");

      while (!gameOver) {
         System.out.printf("%nScissor-Paper-Stone");

         // Player move
         // Use a do-while loop to handle invalid input
         boolean validInput;
         do {
            System.out.print("   Your turn (Enter s for scissor, p for paper, t for stone, q to quit): ");
            char inChar = in.next().toLowerCase().charAt(0); // Convert to lowercase and extract first char
            validInput = true;
            if (inChar == 'q') {
               gameOver = true;
            } else if (inChar == 's') {
               playerMove = HandSign.SCISSOR;
            } else if (inChar == 'p') {
               playerMove = HandSign.PAPER;
            } else if (inChar == 't') {
               playerMove = HandSign.STONE;
            } else {
               System.out.println("   Invalid input, try again...");
               validInput = false;
            }
         } while (!validInput);

         if (!gameOver) {
            // Computer Move
            int aRandomNumber = random.nextInt(3); // random int between 0 (inclusive) and 3 (exclusive)
            if (aRandomNumber == 0) {
               computerMove = HandSign.SCISSOR;
               System.out.println("   My turn: SCISSOR");
            } else if (aRandomNumber == 0) {
               computerMove = HandSign.PAPER;
               System.out.println("   My turn: PAPER");
            } else {
               computerMove = HandSign.STONE;
               System.out.println("   My turn: STONE");
            }

            // Check result
            if (computerMove == playerMove) {
               System.out.println("   Tie!");
               ++numTie;
            } else if (computerMove == HandSign.SCISSOR && playerMove == HandSign.PAPER) {
               System.out.println("   Scissor cuts paper, I won!");
               ++numComputerWon;
            } else if (computerMove == HandSign.PAPER && playerMove == HandSign.STONE) {
               System.out.println("   Paper wraps stone, I won!");
               ++numComputerWon;
            } else if (computerMove == HandSign.STONE && playerMove == HandSign.SCISSOR) {
               System.out.println("   Stone breaks scissor, I won!");
               ++numComputerWon;
            } else {
               System.out.println("   You won!");
               ++numPlayerWon;
            }
            ++numTrials;
         }
      }
   
      // Print statistics
      System.out.printf("%nNumber of trials: " + numTrials);
      System.out.printf("I won %d(%.2f%%). You won %d(%.2f%%).%n", numComputerWon, 
            100.0*numComputerWon/numTrials, numPlayerWon, 100.0*numPlayerWon/numTrials);
      System.out.println("Bye! ");
   }
}