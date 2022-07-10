/*
import java.util.Date;

class TestFormats {
	public static void main(String[] args) {
		String s = String.format("%, d", 1000000);
		System.out.println(s);

		String s2 = String.format("%tc", new Date());
		System.out.println(s2);
	}
}
*/

/*
class Person {
	private int num;

	public int getNum() {
		return num;
	}

	public void setNum(int n) {
		num = n;
	}
}

class TestFormats {
	public static void main(String[] args) {
		Person p1 = new Person();
		Person p2 = new Person();
		p1.setNum(5);
		p2.setNum(6);
		boolean bool = p1.getNum() == p2.getNum();
		System.out.print(bool);
	}
}

*/

class TestFormats {
	static int s;
	static {
		System.out.print("one");
	}

	TestFormats() {
		System.out.print("two");
	}

	public static void main(String[] args) {
		TestFormats t = new TestFormats();
	}
}