// n-dimensional array
#include <stdio.h>
#include <stdlib.h>


int main() {
	int 2d_array[3][3] = {
		{1, 2, 3}, 
		{4, 5, 6}, 
		{7, 8, 9}
	};

	int 3d_array[3][3][3] = {
		{
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
		},
		{
			{10, 11, 12},
			{13, 14, 15},
			{16, 17, 18}
		},
		{	
			{19, 20, 21},
			{22, 23, 24},
			{25, 26, 27}
		},

	};




	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			printf("2d_array[%d][%d]:%d\n", i, j, 2d_array[i][j]);
		}
	}
}
