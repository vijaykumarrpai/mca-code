class Electricity {
	public static void main(String[] args) {
		float units = 250;
		double billPay = 0;

		if(units < 100) {
			billPay = units * 1.20;
		}
		else if (units >= 100 && units < 199) {
			billPay = (100 * 1.20) + (units - 100) * 2.10;
		}
		else if (units >= 200 && units < 299) {
			billPay = (100 * 1.20) + (200 * 2.10) + (units - 300) * 3.50;
		}
		else { 
			billPay = (100 * 1.20) + (200 * 2.10) + (300 * 3.50) + (units - 400) * 4.20;
		}
		System.out.println("Bill to pay : " + billPay);
	}
}