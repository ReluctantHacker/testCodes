abstract class animal {
	public abstract void animalSound();
	public void sleep() {
		System.out.println("ZZZ...");
	}
}

class pig extends animal {
	public void animalSound() {
		System.out.println("Wee...");
	}
}

class dog extends animal {
	public void animalSound() {
		System.out.println("Woof...");
	}
}


class Main {
	public static void main(String[] args) {
		// You can't create animal object
//		animal testAnimal = new animal();
		animal testPig = new pig();
		animal testDog = new dog();
		
//		testAnimal.animalSound();
		testPig.animalSound();
		testDog.animalSound();
	}
}
