class Bank {
    int balance = 10000;
    public int bal() {
        return (balance);
    }
}

class Customer extends Bank {
    public static void main(String[] args) {
        Customer c = new Customer();
        int y = c.balance;
        System.out.println("Your balance is : " + y);
    }
}