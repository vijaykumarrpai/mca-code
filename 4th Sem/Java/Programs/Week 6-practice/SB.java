import java.io.*;
import java.util.*;

class Bank {
	Scanner sc = new Scanner(System.in);
	String bk, branch;
	public void getBank() {
		System.out.println("Enter the bank :");
		bk = sc.nextLine();
		System.out.println("Enter the Branch name : ");
		branch = sc.nextLine();
	}
	public void showBank() {
		System.out.println("Bank name is : " + bk);
		System.out.println("Branch name is : " + branch);
	}
}

class Loan extends Bank {
	String customerName, loanType;
	int accountNumber;
	public void getLoan() {
		System.out.println("Enter the Customer name : ");
		customerName = sc.nextLine();
		System.out.println("Enter the loanType : ");
		loanType = sc.nextLine();
		System.out.println("Enter the accountNumber : ");
		accountNumber = sc.nextInt();
	}
	public void showLoan() {
		System.out.println("Customer name is : " + customerName);
		System.out.println("Loan type : " + loanType);
		System.out.println("Account Number is : " + accountNumber);
	}
}
class VLoan extends Loan {
	String vNo;
	int vlAmt;
	public void getVLoan() {
		System.out.println("Enter the Vehicle no : ");
		vNo = sc.nextLine();
		System.out.println("Enter Vehicle amount : ");
		vlAmt = sc.nextInt();
	}
	public void showVLoan() {
		System.out.println("Vehicle no is : " + vNo);
		System.out.println("Vehicle amount is : " + vlAmt);
	}
}
class Hloan extends Loan {
	String hNo;
	int hlAmt;
	public void getHLoan() {
		System.out.println("Enter the House No : ");
		hNo = sc.nextLine();
		System.out.println("Enter the Home loan amount : ");
		hlAmt = sc.nextInt();
	}
	public void showHLoan() {
		System.out.println("House no is : " + hNo);
		System.out.println("Home loan amount is : " + hlAmt);
	}
}

class Ploan extends Loan {
	int aadharNo, plAmt;
	public void getPLoan() {
		System.out.println("Enter the Aadhar No : ");
		aadharNo = sc.nextInt();

		System.out.println("Enter the Personal loan amount : ");
		plAmt = sc.nextInt();
	}
	public void showPloan() {
		System.out.println("Aadhar no is : " + aadharNo);
		System.out.println("Personal loan amount is : " + plAmt);
	}
}

class SB {
	public static void main(String[] args) {
		Hloan H1 = new Hloan();
		H1.getBank();
		H1.getLoan();
		H1.getHLoan();
		H1.showBank();
		H1.showLoan();
		H1.showHLoan();
	}
}

