#include <stdio.h>
#include <stdlib.h>


int main() {
	int testArray[3] = {1, 2, 3};
	int *resultArray = testArray;
	printf("%d\n", resultArray[2]);
	printf("%d\n", testArray[2]);
}
