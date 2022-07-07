import java.util.ArrayList;

class Animal {
	
	public void bark() {
		System.out.println("waw");
	}
	
}

class Dog extends Animal {
	/*
	public void bark() {
		System.out.print("gaf");
	}
	*/
}

class Foo {
	public static void main(String[] args) {
		//ArrayList<Animal> list = new ArrayList<Animal>();
		Animal[] list = new Animal[5];
		//Dog d = new Dog();
		list[0] = new Dog();
		//Dog a = list.get(0);
		//list.get(0).bark();
		list[0].bark();
	}
}