class Test {
    void m1() {
        System.out.println("Parent class");
    }
}
class C extends Test {
    void m2() {
        System.out.println("Child class");
    }
}

// class A extends A {
//     void m3() {
//         System.out.println("Class A extends A"); // cyclic inheritance - java doesn't support it.
//     }
// }

class One {
    public static void main(String[] args) {
        Test O1 = new Test();
        O1.m1();
        // O1.m2(); // Not valid - not accessible by the parent class
        
        C O2 = new C();
        O2.m1();
        O2.m2();

        Test O3 = new Test();
        O3.m1();
        // O3.m2(); // Not valid - not accessible by the parent class

        // C O4 = new Test(); // Object of child class cannot access object of parent class
        // A O4 = new A();
        // O4.m3();
    }
}

// developers.google.com