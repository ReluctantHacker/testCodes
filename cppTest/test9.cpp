#include <iostream>

void passByValue(int num) {
	printf("The value of num: %d\n", num);
	printf("The address of num: %p\n", &num);
	printf("-------------------------------------\n");
	num = num+1;
	printf("The value of num: %d\n", num);
	printf("The address of num: %p\n", &num);
	printf("-------------------------------------\n");
}


void passByReference(int &num) {
	num = num+1;
}


int main() {
	int a = 3;
	printf("The value of a: %d\n", a);
	printf("The address of a: %p\n", &a);
	passByValue(a);
	passByReference(a);
	printf("The value of a: %d\n", a);
	printf("The address of a: %p\n", &a);
	return 1;
}
