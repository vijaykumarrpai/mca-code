import java.util.*;
   
enum Suit { SPADE, DIAMOND, CLUB, HEART }
enum Rank { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING }
   
class Card {  // A card
   private Suit suit;
   private Rank rank;
   
   Card(Suit suit, Rank rank) {   // constructor
      this.suit = suit;
      this.rank = rank;
   }
   
   Rank getRank() { return rank; }
   Suit getSuit() { return suit; }
   public String toString() { return "This card is " + rank + " of " + suit; }
}
   
class CardDeck {  // A deck of card
   List<Card> deck;
   CardDeck() {   // constructor
      deck = new ArrayList<Card>();
      for (Suit suit : Suit.values()) {
         for (Rank rank : Rank.values()) {
            deck.add(new Card(suit, rank));
         }
      }
   }
   public void print() {
      for (Card card : deck) System.out.println(card);   // print all cards
   }
   public void shuffle() {
      Collections.shuffle(deck);  // use java.util.Collections' static method to shuffle the List
   }
}
   
public class CardTest {
   public static void main(String[] args) {
      CardDeck deck = new CardDeck();
      deck.print();
      deck.shuffle();
      deck.print();
   }
}