#include <stdio.h>

void divide_conquer(int x[], int lb, int ub, int *pj)
{
 int a, down, temp, up;
 a = x[lb];
 up = ub;
 down = lb;
 while(down < up){
 while(x[down] <= a && down < ub)
 down++;
 while(x[up] > a)
 up--;
 if(down < up){
 temp = x[down];
 x[down] = x[up];
 x[up] = temp;
 }
 }
 x[lb] = x[up];
 x[up] = a;
 *pj = up;
}

void showArr(int arr[], int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d,", arr[i]);
	}
	printf("]\n");
}

int main() {
	int testArr[8] = {30, 75, 53, 47, 21, 94, 88, 39};
	int *pivot;
	divide_conquer(testArr, 0, 7, pivot);

}
