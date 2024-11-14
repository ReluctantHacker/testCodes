#include <stdio.h>
#include <stdlib.h>

void passByValue(int num) {
	printf("The value of num: %d\n", num);
	printf("The address of num: %p\n", &num);
	printf("-------------------------------------");
	num = num+1;
	printf("The value of num: %d\n", num);
	printf("The address of num: %p\n", &num);
	printf("-------------------------------------");
}


void passByReference(int &num) {
	num = num+1;
}


void main() {
	int a = 3;
	printf("The value of a: %d\n", a);
	printf("The address of a: %p\n", &a);
	passByValue(a);
	passByReference(a);
	printf("The value of a: %d\n", a);
	printf("The address of a: %p\n", &a);
}
