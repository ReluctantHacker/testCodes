#include <stdio.h>
#include <stdlib.h>


int recFun(int);
int main(void) {
	printf("%d\n", recFun(12345));
	return 0;
}


int recFun(int n) {
	if (n<10) {
		return n;
	} else {
		return recFun(n/10) + n%10;
	}
}
