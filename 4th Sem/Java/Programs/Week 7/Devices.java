import java.util.*;

interface Functionalities {
	void create();
	void retrieve();
	void update();
	void delete();
}

class PC implements Functionalities {
	public void create() {
		System.out.println("Created a word document");
	}
	public void retrieve() {
		System.out.println("Read the document");
	}
	public void update() {
		System.out.println("Updated the file");
	}
	public void delete() {
		System.out.println("Delete the file");
		System.out.println();
	}

	public void crud() {
		create();
		retrieve();
		update();
		delete();
	}
}

class Server implements Functionalities {
	public void create() {
		System.out.println("Created a web app");
	}
	public void retrieve() {
		System.out.println("Accessed the app");
	}
	public void update() {
		System.out.println("Updated the app");
	}
	public void delete() {
		System.out.println("Deleted the app");
		System.out.println();
	}

	public void crud() {
		create();
		retrieve();
		update();
		delete();
	}
}

class SmartPhone implements Functionalities {
	public void create() {
		System.out.println("Created an app");
	}
	public void retrieve() {
		System.out.println("Opened the app");
	}
	public void update() {
		System.out.println("Versioning");
	}
	public void delete() {
		System.out.println("Deleted the app from store");
		System.out.println();

	}

	public void crud() {
		create();
		retrieve();
		update();
		delete();
	}
}

class Devices {
	public static void main(String[] args) {
		PC pc = new PC();
		pc.crud();

		Server server = new Server();
		server.crud();

		SmartPhone smartphone = new SmartPhone();
		smartphone.crud();
	}
}