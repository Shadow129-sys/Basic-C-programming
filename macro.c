#include <stdio.h>
#include <stdbool.h>
 
/* MACRO in C
they are used for diffrent purposes in C programming
e.g. if we want to define something in our program
*/ 
  
#define a 10
// set the value of a to be 10
#define isDigit(x) (x>='0' && x<='9')
// it can be user to check of a char x in digit or not
// this is called a function
#define and &&
// this define && to and that means not we can use and instead of && in if else
#define yes printf("yes\n");
// this means if we write yes in out program then printf("yes\n") this line will be executed
#define area(x) (x*x)
// this means is gives us the area of square of size x
/*
#undef macroname
 
This statement is used to undefine some defined micro
in this program i can write
#undef area
that means area will not work
*/
#define ch char
// we can also define datatypes with it

int main(){
	printf("value of a : %d\n", a);
	// prints the value of a 

	char c = 'e';
	bool flag = isDigit(c);
	printf("Result of isDigit() : %d\n", flag);
	// as we know 0 means false and 1 means true
	// that is why we can typecase bool variable to int
	// but include the stdbool.h header file to declare bool variable

	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	// takes n input

	// we can see how we can use "and" is place of && as we have defined it earlier
	if(n>=10 and n<100){
		printf("%d is a 2 digit number\n", n);
	}else{
		printf("%d is not a 2 digit number\n", n);
	}

	yes
	// we can see when we execute it how this will execute printf("yes\n") this statement

	int side = 5;
	int ar = area(side);
	// code to execute func area(x)

	printf("Area of square of side %d is %d\n", side, ar);
	// prints the area 

	/* ifdef
	syntax :

	#ifdef macroname
		code
	#else
		code1
	#endif
	
	code executes only when microname is defined else code1 will be executed
	but we may or may not write #else block
	*/
	#ifdef area
		// executes only when area is defined
		printf("Area is defined\n");
	#endif

	ch C = 'S';
	// ch is basically char and it is not wrong as we have defined
	// char as ch
	printf("value of \"C\" : %c\n", C);
	// prints the character

	return 0;
}
