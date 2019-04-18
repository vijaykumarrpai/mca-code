import java.io.*;
import java.util.*;
class MyThread extends Thread {
	synchronized public void run() {
		Thread currThread = Thread.currentThread();
		try {
			for(int i = 1; i <= 5; i++) {
				System.out.println(currThread.getName() + " completed " + "lap " + i);
				Thread.sleep(1000);
			}
		}
		catch(InterruptedException e) {
			System.out.println("Interrupted Exception : " + e);
		}
	}
}
class Synchronization extends MyThread{
	public static void main(String[] args) {
		MyThread car1 = new MyThread();
		car1.setName("Ferrari");
		MyThread car2 = new MyThread();
		car2.setName("Mclaren");
		MyThread car3 = new MyThread();
		car3.setName("Lotus");
		MyThread car4 = new MyThread();
		car4.setName("Audi");
		car1.start();
		car2.start();
		car3.start();
		car4.start();
	}
}