interface Pet {
	public abstract void beFriendly();
	public abstract void play();
}

class Animal {
	public void beFriendly() {
		System.out.println("Animal");
	}
}

class Dog extends Animal implements Pet {
	public void beFriendly() {
		System.out.println("Dog");
	}
	public void play() {}
}

public class Boo {
	public static void main(String[] args) {
		Dog d = new Dog();
		d.beFriendly();

		Pet[] petList = new Pet[1];
		petList[0] = d;
		petList[0].beFriendly();
	}
}