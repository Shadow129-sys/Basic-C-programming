#include <stdio.h>
// Tt includes the header file stdio.h which helps us in IO
// Is stands for Standard Input Output 
// This statement basically says include the header file stdio.h

int main(){
	
	// Comments

	// This is called a single line comment

	/* This is called a
	multiline comment*/

	// Don't forget to add semicolon a the end of each statement
	// It marks the end of each statement

	int a = 10;
	// declares an integer variable of value 10
	// syntax : datatype variableName = value;

	printf("This is a number : %d\n", a);
	// prints -> This is a number : 10
	// while printing the value of a variable we need to specify the
	// datatype of that variable
	// %d for int   		%s for string
	// %c for char			%f for real values or float
	// %p for pointer		%lf for double
	// %x for hexadecimal	%Lf for long double
	// $ld for long int

	//	we can also print multiple outputs like this
	a = 20;
	// reassigns the value of a to 20

	double b = 23.973;
	printf("%d %lf\n", a, b);
	// prints -> 20 23.973000
	// but just keep one thing in mind to keep the datatype and order of variable
	// by default when we print double 6 places after decimal is printed by default
	// we can change that by to 4 or 7 places aafter decimal
	printf("%0.3lf\n", b);
	// prints 3 places after decimal

	int n;
	// declares a int variable

	printf("Enter a number : ");
	scanf("%d", &n);
	// scanf is used to take input from user in C
	// &n means the position of variable n in memory
	// so scanf basically take input from user as assignes it to the desired
	// location in memory

	printf("Your number is %d\n", n);
	// just prints the number n

	int x,y;
	printf("Enter 2 numbers : ");
	scanf("%d %d", &x, &y);
	// taking multiple inputs at once using scanf

	printf("Your numbers are %d and %d", x, y);
	// prints the numbers in terminal

	return 0;
	// this statements is used just to say the compiler that the code
	// executed seccessfully
}