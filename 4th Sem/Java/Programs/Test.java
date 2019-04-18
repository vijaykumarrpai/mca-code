import java.io.FileNotFoundException;
import java.io.PrintWriter;

// class Parent {
//     void Parent() { // when void is used, it is a normal function and not a constructor
//         System.out.println("Parent constructor");
//     }
// }

// class Child extends Parent {
//     void Child() {
//         System.out.println("Child Constructor");
//     }
// }

// public class Test {
//     public static void main(String[] args) {
//         Child c = new Child();
//         // c.Parent();
//         c.Child();
//         Parent p = new Parent();
//         p.Parent(); // child class cannot be accessed through parent object

//     }
// }

// class Parent {
//     // Parent(int a) {
//     //     System.out.println("Parent constructor");
//     // }
// }

// class Child extends Parent {
//     Child() {
//         System.out.println("Child Constructor");
//     }
// }

// public class Test {
//     public static void main(String[] args) {
//         Child c = new Child();
//     }
// }

// class Parent {
//     // Parent(int a) {
//     //     System.out.println("Parent 1 arg constructor");
//     // }
// }

// class Child extends Parent {
//     Child() {
//         // this(10);
//         super();
//         System.out.println("Child zero arg constructor");
//     }
//     Child(int a) {
//         super(a); // super is the keyword used to call super class or parent class construtor
//         System.out.println("Child 1 arg constructor");
//     }
// }
// // If there is a parent constructor in parent class with parameters, then it is no default constructor
// // If there are 2 constructors in the same class with the same name, it will lead to ambiguity
// public class Test {
//     public static void main(String[] args) {
//         Child c = new Child();
//     }
// }

// class Parent {
//     int m;
//     Parent() {
//         System.out.println("0 arg Parent constructor");
//     }
//     Parent(int x) {
//         System.out.println("Hi"); // this won't be called
//     }
// }

// class Child extends Parent {
//     int x,y;
//     Child(int a, int b) {
//         this(b);
//         this.y = a;
//     }
//     Child(int b) {
//         // this.x = b;
//         System.out.println("Hello");
//     }
// }
// // imp - If at all there is a constructor without this and super, then the compiler will automatically place super keyword in Child(int b) constructor
// public class Test {
//     public static void main(String[] args) {
//         Child c = new Child(5,10);
//     }
// }

// class Parent {
//     int m;
//     Parent() {
//         System.out.println("0 arg Parent constructor");
//     }
//     Parent(int x) {
//         System.out.println("Hi"); // this won't be called
//     }
// }

// class Child extends Parent {
//     int x,y;
//     Child(int a, int b) {
//         this(b);
//         this.y = a;
//     }
//     Child(int b) {
//         // this.x = b;
//         System.out.println("Hello");
//     }
// }
// // imp - If at all there is a constructor without this and super, then the compiler will automatically place super keyword in Child(int b) constructor
// public class Test {
//     public static void main(String[] args) {
//         Parent p = new Child(5); // Parent can have new child but child cannot have new parent
//     }
// }

// class Parent {
//     int m;
//     void changes() {}
//     Parent() {
//         System.out.println("0 arg Parent constructor");
//     }
//     Parent(int x) {
//         System.out.println("Hi"); // this won't be called
//     }
// }

// class Child extends Parent {
//     int x,y;
//     Child(int a, int b) {
//         this(b);
//         this.y = a;
//     }
//     Child(int b) {
//         // this.x = b;
//         System.out.println("Hello");
//     }
//     void change() {
//         super.m = 10;
//         this.m = 20;
//         super.changes();
//     }
// }
// // imp - If at all there is a constructor without this and super, then the compiler will automatically place super keyword in Child(int b) constructor
// public class Test {
//     public static void main(String[] args) {
//         Parent p = new Child(5); // Parent can have new child but child cannot have new parent
//     }
// }

// instance block
// static block - only when the class is loaded, it will get executed - parent class and then child class

// Child c = new Child();
// Static block of Parent class
// Static block of Child class
// Instance block of Parent class
// Constructor of Parent class
// Child c1
// Child c2

// given a string encrypt the data

class Test {
    public static void main(String[] args) throws FileNotFoundException{
        try {
        PrintWriter pw = new PrintWriter("abc.txt");
        pw.write("Hello");
        pw.close();
        }
        catch(ArithmeticException ae) {
            System.out.println("Arithmetic exception ");
        }
        finally {
            System.out.println("Out of try catch block");
        }
    }
}