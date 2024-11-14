#include <stdio.h>
#include <stdlib.h>

// bubble sort 
void bubbleSort(int arr[], int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
}

void showArr(int arr[], int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d,", arr[i]);
	}
	printf("]\n");
}

int main(){
	int arr[] = {5, 4, 3, 2, 1};
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	showArr(arr, size);
}
