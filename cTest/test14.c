// this is a test for call another function in a function
#include <stdio.h>
#include <stdlib.h>

int square(int num) {
	return num*num;
}

int functional(int num, int (*funct)(int)) {
	return funct(num);

}

int main() {
	int testNum = 3;
	int resultNum = functional(testNum, square);
	printf("%d\n", resultNum);
}
