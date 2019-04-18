class Test {
    public static void main(String[] args) {
        doStuff();
        System.out.println("Hello");
    }
    public static void doStuff() {
        doMoreStuff();
        System.out.println("Hi");
    }
    public static void doMoreStuff() {
        System.out.println("Bye");
        // System.out.println(10/0);
    }
}