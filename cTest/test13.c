#include <stdio.h>
#include <stdlib.h>


int main() {
	char testStr[4] = {'a', 'b', 'c', 'd'};
	int charSize = sizeof(testStr)/sizeof(char);
	printf("show testStr[1]: %c\n", testStr[1]);
}
