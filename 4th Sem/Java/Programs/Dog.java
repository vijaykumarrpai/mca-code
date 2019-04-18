import java.io.*;
import java.util.*;

abstract class Animal {
    public abstract void sound();
}

class Horse extends Animal {
    public void sound() {
        System.out.println("neigh");
    }
}

public class Dog extends Animal {
    public void sound() {
        System.out.println("woof");
    }
    public static void main(String[] args) {
        Animal obj = new Dog();
        obj.sound();
        Animal obj2 = new Horse();
        obj2.sound();
    }
}