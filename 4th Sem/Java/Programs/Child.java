class Parent {
    int money, gold, silver;
    void get() {

    }
    final void marry() {
        System.out.println("Manikarnika");
    }
}

class Child extends Parent {
    // void marry() {
    //     System.out.println("Trisha or Esha");
    // }
public static void main(String[] args) {
    Child c = new Child();
    c.marry();    
    }
}
