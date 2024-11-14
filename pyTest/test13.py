class animal:
    age: 0
    gender: 0
    
    def __init__(self):
        pass

    def animalSound(self):
        print("animal makes sound")

if __name__ == "__main__":
    testAnimal = animal()
    testAnimal.animalSound()

    height = 10
    testAnimal.height = height
    print(testAnimal.height)
