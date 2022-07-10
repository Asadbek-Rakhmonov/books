abstract class Animal {
	String name;

	public String getName() {
		return name;
	}
	/*
	public Animal(String s) {
		name = s;
	}
	*/
	public void setName(String s) {
		name = s;
	}
}

class Hippo extends Animal {
	/*
	public Hippo(String name) {
		super(name);
	}
	*/
}

public class MakeHippo {
	public static void main(String[] args) {
		//Hippo h = new Hippo("Buffy");
		Hippo h = new Hippo();
		h.setName("Buffy");
		System.out.println(h.getName());
	}
}