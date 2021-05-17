#include <stdio.h>
#include <string.h>

int main(){
	int arr[5][5];
	// declares a 2D array of 5 x 5
	/*   0	     1	     2	     3       4 
	------------------------------------------
	0 | 0,0     0,1     0,2     0,3     0,4
	1 | 1,0     1,1     1,2     1,3     1,4
	2 | 2,0     2,1     2,2     2,3     2,4
	3 | 3,0     3,1     3,2     3,3     3,4
	4 | 4,0     4,1     4,2     4,3     4,4

	array index starts from 0 the top left coordinate is 0,0
	and the top right corner is 0,4 as the size of each row is 5
	bottom right corner is at 4,4
	arr[2][3] -> this means 3rd row and 4th column
	in this way we can access any coordinate in the matrix
	*/

	memset(arr, 0, sizeof(arr));
	// fills the 2D array with 0

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	// in this way we can print the matrix

	arr[0][0] = 5;
	// changes the value of 0,0 coordinate in matrix to 5

	int array[3][3];

	// finding rows and col of and array
	int row = sizeof(array) / sizeof(array[0]);
	int col = sizeof(array[0]) / sizeof(array[0][0]);
	
	// taking a 3 x 3 matrix input
	printf("Enter values of %d x %d matrix\n", row, col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Enter value of array[%d][%d] : ", i, j);
			scanf("%d", &array[i][j]);
		}
	}


	// printing the 2Darray input array
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}
