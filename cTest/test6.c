/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>

int factorial(int n) {
	int result = 1;
	for (int i=1; i<=n ; i++) {
		result *= i;
	}
	return result;
}

int* getRow(int rowIndex) {
	int *final_result = malloc((rowIndex+1)*sizeof(int));
	for (int i=0; i<=rowIndex; ++i) {
		final_result[i] = factorial(rowIndex)/(factorial(rowIndex-i)*factorial(i));
		
	}
	return final_result;
}

int main() {
	int rowIndex = 3;
	int* Pascal_result = getRow(3);
	
	// Show the result
	printf("[");
	for (int i=0; i<=rowIndex; i++) {
		if (i<rowIndex){
			printf("%d,", Pascal_result[i]);
		}else {
			printf("%d", Pascal_result[i]);
		}
	}
	printf("]\n");
}	
