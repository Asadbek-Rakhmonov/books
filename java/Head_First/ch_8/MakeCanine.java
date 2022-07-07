abstract class Animal {

}

abstract class Canine extends Animal {
	public void roam() {
		System.out.println("true");
	}
}

class Dog extends Canine {

}

public class MakeCanine {
	public static void main(String args[]) {
		//public void go() {
			Canine c;
			c = new Dog();
			c.roam();
		//}
	}
}



