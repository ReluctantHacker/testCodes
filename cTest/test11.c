// quick sort
#include <stdio.h>
#include <stdlib.h>

int swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}


int partition(int arr[], int lo, int hi) {
	int pivot = arr[hi];
	int i = lo;
	for (int j=lo; j<hi; j++) {
		if (arr[j] < pivot) {
			swap(arr, i, j);
			i++;
		}
	}
	swap(arr, i, hi);
	return i; // return the final pivot position
}

int partition_v2(int arr[], int lo, int hi) {
	int pivot_pos = (lo+hi)/2;
	int pivot = arr[pivot_pos];
	int i = lo;
	int j = hi;
	while (i < j) {
		while (arr[i] < pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		swap(arr, i, j);
	}
	return i;
}

int quickSort(int arr[], int lo, int hi) {
	int pivot_pos = partition(arr, lo, hi);
	if (pivot_pos-1>lo){
		quickSort(arr, lo, pivot_pos - 1);
	}
	if (pivot_pos+1<hi){
		quickSort(arr, pivot_pos + 1, hi);
	}
}

int mPartition(int arr[], int lo, int hi) {
	int mid = (lo + hi) / 2;
	mPartition(arr[], lo, mid);
	mPartition(arr[], mid, hi);
}

int showArr(int arr[], int arrSize) {
	printf("[");
	for (int i=0; i<arrSize; i++) {
		if (i<arrSize-1) {
			printf("%d,", arr[i]);
		}else {
			printf("%d]", arr[i]);
		}
	}

}

int main() {
	int testArr[5] = {12, 344, 1, 2, 9};
	//int testArr[5] = {3, 2, 4, 1, 5};
	//int testArr[5] = {5, 4, 3, 2, 1};
	int arrSize = sizeof(testArr)/sizeof(int);
	quickSort(testArr, 0, arrSize-1);
	showArr(testArr, arrSize);
}
