// bubbleSort, selection sort, insertion sort
#include <stdio.h>
#include <stdlib.h>

int swap(int arr[], int pos_1, int pos_2) {
	int temp = arr[pos_1];
	arr[pos_1] = arr[pos_2];
	arr[pos_2] = temp;
}


int bubbleSort(int arr[], int arrSize) {
	int is_swap;
	for (int i=0; i<arrSize-1; i++) {
		is_swap = 0;
		for (int j=0; j < arrSize-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr, j, j+1);
				if (is_swap==0) {
					is_swap = 1;
				}
			}

		}
		if (is_swap==0) {
			break; // end the bubbleSort
		}
	}
}

int selectionSort(int arr[], int arrSize) {
	int max_pos;
	for (int i=0; i<arrSize-1; i++) {
		max_pos = 0;
		for (int j=0; j<arrSize-i; j++) {
			if (arr[max_pos] < arr[j]) {
				max_pos = j;
			}
		swap(arr, max_pos, arrSize - i -1);
		}
	}
}

int insertionSort(int arr[], int arrSize) {
	for (int i=1; i<arrSize; i++) {
		for (int j=i; j>0; j--) {
			if (arr[j] < arr[j-1]) {
				swap(arr, j, j-1);
			}
		}
	}
}

int showArr(int arr[], int arrSize) {
	printf("[");
	for (int i=0; i<arrSize; i++) {
		if (i<arrSize-1) {
			printf("%d,", arr[i]);
		}else {
			printf("%d", arr[i]);
		}
	}
	printf("]");
}

int main() {
	int testArr[5] = {5, 4, 3, 2, 1};
	int arrSize = sizeof(testArr)/sizeof(int);
	//bubbleSort(testArr, arrSize);
	//selectionSort(testArr, arrSize);
	insertionSort(testArr, arrSize);
	showArr(testArr, arrSize);
}

