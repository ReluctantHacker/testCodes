#include <iostream>

class testClass {
	private:
	public:
		int testFunct();
		static int testFunct2();
};


int testClass::testFunct() {
	std::cout << "testFunct" << std::endl;
	return 1;
}

int testClass::testFunct2() {
	std::cout<< "testFunct2" << std::endl;
	return 1;
}

int main() {
	testClass testObj;
	testObj.testFunct();
	testClass::testFunct2();
	return 1;
}
