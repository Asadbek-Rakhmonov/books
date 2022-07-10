class Duck {
	private int size;

	public Duck(int s) {
		System.out.println("Quack");
		size = s;
		System.out.println("Size of the duck is " + size);
	}
}

public class DuckTestDrive {
	public static void main(String[] args) {
		Duck d = new Duck(40);
	}
}