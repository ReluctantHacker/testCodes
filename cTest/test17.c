#include <stdio.h>
#include <stdlib.h>

void changeValue(int num) {
	num = 2;
}

int main() {
	int a = 1;
	changeValue(a);
	printf("%d\n", a);
}
