class Boo {
	private Boo() {

	}
	static Boo bo = new Boo();

	int i;
}

public class Foo extends Boo{

	public static void main(String[] args) {

		//Boo fo = new Boo();
		bo.i = 2;
	}
}