import java.io.*;
import java.util.*;

interface Hospital {
	public void inPatientTreatment();
	public void outPatientTreatment();
}

class Adapterclass implements Hospital {
	public void inPatientTreatment() {}
	public void outPatientTreatment() {}
}

class Surgeon extends Adapterclass {
	public void inPatientTreatment() {
		System.out.println("Surgeon treated InPatients");
	}
}

class Doctor extends Adapterclass {
	public void outPatientTreatment() {
		System.out.println("Doctor treated OutPatients");
	}
}

class Treatment extends Doctor {
	int choice;

	Treatment() {
	System.out.println("1. InPatient");
	System.out.println("2. OutPatient");
	Scanner sc = new Scanner(System.in);
	this.choice = sc.nextInt();
}
}

class Treat {
	public static void main(String[] args) {
		
		Doctor doctor1 = new Doctor();
		Surgeon surgeon1 = new Surgeon();
		Treatment treatment1 = new Treatment();

		if(treatment1.choice == 1) {
			surgeon1.inPatientTreatment();
		} else {
			doctor1.outPatientTreatment();
		}
	}
}