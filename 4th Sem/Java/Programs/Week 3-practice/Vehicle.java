import java.util.*;

class Vehicle {
	Random random = new Random();

	static int i = 0;
	static int[] startNumber = new int[3];
	int vehicleNumber;

	public static boolean isUniqueNumber(int vehicleNumber){
		return Arrays.asList(startNumber).contains(vehicleNumber);
	}

	Vehicle() {
		int tempNumber = random.nextInt(9000) + 1000;

		if(!isUniqueNumber(tempNumber)){
			vehicleNumber = tempNumber;
			startNumber[i] = vehicleNumber;
			i++;	
		}
		else{
			System.out.println("Sorry, no more numbers exist");
		}
		
	}

	public int getVehicleNumber(){
		return vehicleNumber;
	}

	public static String getAllVehicleNumbers(){
		return Arrays.toString(Arrays.copyOfRange(startNumber, 0, i));
	}

	public static void main(String[] args) {
		Vehicle v1 = new Vehicle();
		System.out.println(v1.getVehicleNumber());
		System.out.println(v1.getAllVehicleNumbers());
		Vehicle v2 = new Vehicle();
		System.out.println(v2.getVehicleNumber());
		System.out.println(v2.getAllVehicleNumbers());
		Vehicle v3 = new Vehicle();
		System.out.println(v3.getVehicleNumber());
		System.out.println(v3.getAllVehicleNumbers());
	}
}