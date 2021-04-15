#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char name[20];

	printf("Enter the name : ");
	scanf("%[^\n]%*c", name);
	/* here [] is a scanset character. ^\n tells to take
	input until newline doesn’t get encountered
	Then, with this %*c, it reads newline character and here used * indicates that
	this newline character is discarded.
	It helps us to take a sentence as input
	*/
	printf("Your name is %s\n", name);

	int len = strlen(name);

	printf("length of %s is %d\n", name, len);
	// prints length of arr

	/* Basic string.h functions
	strlen(name) -> returns length of string
	strlwr(name) -> converts name to lowercase
	strupr(name) -> converts name to uppercase
	strcat(name, " ok") -> concats " ok" at the end of name
	strcpy(target, source) -> copies source to target
	strncpy(target, source, n) -> copies first n characters from source to target
	strcmp(str1,str2) -> compares string str1 and str2 char by char, returns the value where they mismatch
	strcmp(str1,str2,n) -> compares first n characters
	strcmpi(str1,str2) -> compares str1 and str2 by ignoring their case, that means "abc" and "AbC" are equal i.e. it will return 0
	strnicmp(str1,str2,n) -> compares first n characters of str1 and str2 by ignoring their case
	*/

	char arr[20];
	strncpy(arr, name, 5);
	memset(arr+5, '\0', sizeof(arr+5));
	// memset the rest of the character in arr to null or it will contain garbage value in it

	printf("First 5 characters of %s : %s\n", name, arr);

	int comp = strcmp("abcf","abde");
	// comp will contain -1 in this case because they mismatch at index 3
	// so comp will be equals to ascii of 'c' - ascii of 'd'
	printf("Compare of \"abcf\" and \"abde\" : %d\n", comp);

	/* we can also take string input in char pointers
	but if we want to store a user input string in char pointer
	then we need to give the pointer some memory to store the data we need malloc function for that
	malloc is include under stdlib.h file
	syntax : (datatype*)malloc(n * sizeof(datatype)) , where n is the size of array
	we will learn more on pointers in pointer based Data Structures like
	LinkedList, Binary Tree, Tries, Heaps, etc.
	*/
	char *str = "Hi, this is Chef.";
	// char pointer based string
	printf("pointer based string : %s\n",str);

	char *p = (char*)malloc(20 * sizeof(char));
	printf("Enter the string : ");
	scanf("%[^\n]%*c",p);
 	
 	printf("Your string is : %s", p);

	return 0;
}