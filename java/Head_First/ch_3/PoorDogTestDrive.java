class PoorDog {
	private String name;
	private int size;

	void setSize(int s) {
		size = s;
	}

	int getSize() {
		return size;
	}

	String getName() {
		return name;
	}
}

class PoorDogTestDrive {
	public static void main(String args[]) {

		PoorDog dog1 = new PoorDog();
		System.out.println(dog1.getName());
		System.out.println(dog1.getSize());
	}
}