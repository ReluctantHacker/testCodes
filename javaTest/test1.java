class test2 {
	static int testVar = 3;
	int testvar2 = 4;
}


public class test1 {
	static int testVar = 1;
	int testVar2 = 2;

	public void testFunct2() {
		System.out.println(testVar2);
	}

	public static void testFunct() {
		System.out.println("testFunct");
	}
	public static void main(String[] args) {
		System.out.println("Hello, world.");
		System.out.println(testVar);
		testFunct();
		test2 testInstance = new test2();
		System.out.println(testInstance.testVar);
	}
}
