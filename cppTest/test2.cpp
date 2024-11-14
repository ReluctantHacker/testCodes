#include <iostream>

class MyClass {
	public:
		int a = 10;
		int b = 20;
		int testFunct() {
			std::cout << "normal Hello" << std::endl;
			std::cout<< a << std::endl;
		}

		static int testStaticFunct() {
			std::cout << "static Hello" <<std::endl;
			// error! you can't use class variable a here 
			// std::cout << a << std::endl; 
		}
};


int main() {
	// 一般function使用".", 與其他語言差不多
	MyClass testObj;
	testObj.testFunct();
	testObj.testStaticFunct(); // it works but kinda unreadable so not recommended

	// 靜態function使用"::"
	MyClass::testStaticFunct();  // recommended method to  implement static function in this way.
	return 0;
}
