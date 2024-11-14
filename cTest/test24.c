#include <stdio.h>
#include <stdlib.h>


int main() {
	int a = 0;
	switch (a) {
		case 0:
			printf("a==0\n");
		case 1:
			printf("in case1\n");
			break;
		case 3:
			printf("in case 3\n");
	}
	return 0;
}
