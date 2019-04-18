// class MyThread extends Thread {
//     public void run() {
//         for(int i = 1; i <= 10; i++) 
//             System.out.println("Child Thread");
//         }
//     }
//     class ThreadDemo {
//         public static void main(String[] args) throws Exception {
//             MyThread t1 = new MyThread();
//             t1.start();
//             for(int i = 1; i <= 10; i++)
//             System.out.println("Main Thread");
//         }
//     }

class MyThread extends Thread {
    public void start() {
        System.out.println("Hello");
    }
    public void run() {
        System.out.println("Hi");
    }
}

class ThreadDemo {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();
        t1.run();
        MyThread t2 = new MyThread();
        t2.start();
        t2.run();
    }
}