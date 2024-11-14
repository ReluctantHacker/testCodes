class animal {
	public void animalSound() {
		System.out.println("animal says:...");
	}
}

class pig extends animal {
	public void animalSound() {
		System.out.println("wee wee...");
	}
}

class dog extends animal {
	public void animalSound() {
		System.out.println("woof woof...");
	}
}



class test {
	public static void animalSays(animal some_animal) {
		some_animal.animalSound();
	}

	public static void main(String[] args) {
		animal testAnimal = new animal();
		pig testPig = new pig();
		dog testDog = new dog();
		animalSays(testAnimal);
		animalSays(testPig);
		animalSays(testDog);
		animal[] testAnimalArray = {testPig, testDog};
		testAnimalArray[0].animalSound();
	}
}
