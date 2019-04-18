class Box {
	double width, height, depth;
	int boxNo;

	Box(double w, double h, double d, int num) {
		width = w;
		height = h;
		depth = d;
		boxNo = num;
	}
	Box() {
		this(2);
		width = height = depth = 0;
		System.out.println("Welcome");
	}
	Box(int num) {
		boxNo = num;
		System.out.println("Constructor overloading");
	}
	public static void main(String[] args) {
		Box box1 = new Box(2);
		System.out.println(box1.width);
	}
}