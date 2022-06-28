public abstract class Animal {
	private String name;

	String getName() {
		return name;
	}
}



public class Hippo extends Animal {

	/*
		Hippo h = new Hippo();
		System.out.println(h.name);
	*/
	
}

public class SubClass {
	public static void main(String[] args) {
		Hippo h = new Hippo();
		System.out.println(h.getName());
	}
}
