#include <stdio.h>
#include <stdlib.h>

void changeValue(int **a, int *newPointerValue) {
//	*a = newPointerValue;
	**a = 3;
}


int main() {
	int a = 1;
	int b = 2;
	int *p;
	p = &a;
	// change value of pointer p
	//p = &b;
	changeValue(&p, &b);
	printf("show *p: %d\n", *p);
}
