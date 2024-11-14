#include <iostream>
#include <string>

class testClass {
	private:
		int testVar1 = 1;
		int testVar2 = 2;
	public:
		int testVar3 = 3;
		int testVar4 = 4;
		testClass(int x, int y) {
			testVar3 = x;
			testVar4 = y;
		}

		int testFunct() {
			std::cout << "Hello, world." << std::endl;
		}

		int readVars() {
			std::cout << "testVar1:" + std::to_string(testVar1)  << std::endl;
		}
};


int main() {
	testClass testInstance(1, 2);
	testInstance.testFunct();
	testInstance.readVars();
}
