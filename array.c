#include <stdio.h>
#include <string.h>

int main(){
	int arr[10];
	// arrays ar just list of variable of a specific datatype
	// array index starts from 0
	// the above statement declares an array of 10 integers in memory
	// an array of size 10 means the last index of array is 9, first index being 0

	int n = sizeof(arr)/sizeof(arr[0]);
	// the above statement helps us to find the size of a SDA
	// sizeof(arr) -> returns the size of variable arr in memory

	for(int i=0;i<n;i++){
		arr[i] = i+1;
	}
	// arr[index] -> this returns the value stored in that index of the array
	// the above loop just assigns
	// arr[index] = index + 1 -> for every index in that array

	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	// prints the whole array in one line
	// prints -> 1 2 3 4 5 6 7 8 9 10

	printf("\n");

	// One thing to remember is that arrays are also pointer based
	printf("Memory of arr[0] : %p\n", arr);
	// this prints the memory location that arr pointer points to
 
	printf("Memory of arr[1] : %p\n", arr+1);
	// this prints the memory location where arr[1] is stored
	// int are of 4 bytes if we see carefully then there is difference
	// of 4 in the hexadecimal
	// decimal are numbers of base 10 that means we have 10 digits 0 to 9
	// hexadecimal are numbers of base 16 that means we have 16 digits 0 to f
	// a - 10	b - 11
	// c - 12	d - 13
	// e - 14	f - 15

	printf("Value of arr at index 4 arr[4] : %d\n", arr[4]);
	// prints value of array at index 4

	memset(arr, 0, sizeof(arr));
	// memset is a function of string.h we mainly use it to initialize the array
	// with 0 

	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");


	int arr1[] = { 3, 5, 7, 2, 9 };
	// array can also be declared like this

	char array[5];

	printf("Enter 5 characters : ");
	for(int i=0;i<5;i++){
		scanf("%c", &array[i]);
	}
	// taking array input from user

	printf("Array : ");
	for(int i=0;i<5;i++){
		printf("%c ", array[i]);
	}
	printf("\n");

	/* output terminal : 
	Enter 5 characters : ABCRE
	Array : A B C R E

	char array inputs are given like this
 	*/

 	int array1[5];

	printf("Enter 5 numbers : ");
	for(int i=0;i<5;i++){
		scanf("%d", &array1[i]);
	}
	// taking array input from user

	printf("Array : ");
	for(int i=0;i<5;i++){
		printf("%d ", array1[i]);
	}
	/* output terminal : 
	Enter 5 numbers : 23 4 78 9 10
	Array : 23 4 78 9 10

	int, float, long, double, etc array inputs are given like this
	*/

	return 0;
}
