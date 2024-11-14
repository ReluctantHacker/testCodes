// this is a test for return a array in a function
#include <stdio.h>
#include <stdlib.h>


int *returnArray() {
	int testArray[3] = {8, 2, 3};
	return testArray;
}

int main() {
	int *resultArray = returnArray();
	for (int i=0; i<3; ++i) {
		printf("%d\n", resultArray[i]);
	}
}
