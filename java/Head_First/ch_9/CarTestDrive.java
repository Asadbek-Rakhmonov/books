class Car {
	String name;

	public Car() {
		this("BMW");
	}

	public Car(String s) {
		name = s;
		System.out.println(name);
	}
}

public class CarTestDrive {
	public static void main(String[] args) {
		Car van = new Car("Mercedes");
	}
}