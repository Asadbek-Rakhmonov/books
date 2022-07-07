class GoodDog {
	private String name;
	private int size;

	public int getSize() {
		return size;
	}
	public void setSize(int s) {
		size = s;	
	}
	

	void bark() {
		if(size > 60) {
			System.out.println("Woof! Woof!");
		} else if(size > 14) {
			System.out.println("Ruff! Ruff!");
		} else {
			System.out.println("Yipp! Yipp!");
		}
	}
}

class GoodDogTestDrive {
	public static void main(String args[]) {
		GoodDog one = new GoodDog();
		one.setSize(80);
		GoodDog two = new GoodDog();
		two.setSize(15);
		GoodDog three = new GoodDog();
		three.setSize(10);

		one.bark();
		two.bark();
		three.bark();
	}
}