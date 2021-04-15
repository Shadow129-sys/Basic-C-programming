#include <stdio.h>

// Remember one thing that only the main function is executed in the entire program
int main(){

	int n;
	printf("Enter a number : ");
	scanf("%d", &n);

	// Conditional Statements

	// the if statement checks if n is divisible by 2 or not
	// if the given condition is true then the if block will be executed
	// and if the condition is false then the else block will be executed

	if(n%2==0){

		// if block
		printf("%d is even\n", n);

	}else{

		// else block
		printf("%d is odd\n", n);

	}

	/* syntax
	if (condition){
		//code
	}else{
		//code
	}
	This is a simple if-else statement

	we can also have else if
	if (condition1){
		// if block
	}else if(condition2){
		// else if block
	}else{
		// else block
	}
	if the condition1 is true then "if block" will be executed
	if condition1 is false then program will check condition2
	if condition2 is true "else if block" will be executed if condition2
	is false then only "else block" will be executed
	we can have multiple else if blocks but only one if and else block

	==,!=,>=,>,<=,< are called relational operators
	a==b -> returns true if a and b are same
	a>=b -> returns true if a greater than or equal to b
	a>b  -> returns true if a greater than b
	a!=b -> returns true if a and b are not same
	a<b  -> returns true if a is less than b
	a<=b -> returns true if a is less than or equal to b


	if(condition1 && condition2) -> returns true if both condition1 and condition2 are true
	if(condition1 || condition2) -> returns true if any one of the condition is true

	1 -> true
	0 -> false
	to use boolean variables just include stdbool.h header file at the top
	#include <stdbool.h>
	*/

	int age;
	printf("Enter your age : ");
	scanf("%d", &age);

	if(age>=18 && age<=40){
		printf("Valid age\n");
	}else if(age>40){
		printf("Too old\n");
	}else{
		printf("Too young\n");
	}

	/* now we can go crazy from here we can have nested if else blocks */


	// Ternary operator

	/* syntax
	(condition)?(code1):(code2);
	if the consition is true code1 will be executed or else code2 will be executed
	*/
	(n%2==0)?printf("%d is even", n):printf("%d is odd", n);
	

	// Switch case

	int choice;
	printf("Enter a num from [1-5] : ");
	scanf("%d", &choice);

	switch(choice){
		case 1:
			printf("Your have entered 1\n");
		break;
		case 2:
			printf("Your have entered 2\n");
		break;
		case 3:
			printf("Your have entered 3\n");
		break;
		case 4:
			printf("Your have entered 4\n");
		break;
		case 5:
			printf("Your have entered 5\n");
		break;
		default:
			printf("Wrong Choice\n");
	}

	/*
	Switch Case block 
	if(choice==1) -> case 1 will be executed
	
	if(choice==c) -> case c will be executed
	and if none of the choices match default block
	will be executed
	we give break statement after every statement just to show end the Switch there
	or else all the cases below the executed case will be executed
	*/

	return 0;
}