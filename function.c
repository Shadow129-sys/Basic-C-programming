#include <stdio.h>

/* Functions
void FunctionName(){
	code
}
void functions are those functions which donot return any variable
functions can also take parameters
void functionName(int a){
	printf("%d\n", a);
}
this function take in an int parameter and prints it
we can have as many parameter as we want
functionName(10) -> we can call the function like this
*/
// function name is "show" here
void show(int a){
	printf("%d\n", a);
}

/* functions can also return values 

datatype functionName(int a){
	code
	return variable;
}

datatype -> is the datatype of variable that we want to return
return statement is used to return variable
*/
// the function takes in a variable and return the value of a by adding 2 
int Alpha(int a){
	return a+2;
}

/* we can also call one function from another Alpha2 function takes in a variable
and calls Alpha and returns the value that Alpha returns
*/

int Alpha2(int a){
	return Alpha(a);
}

/* multiple parameters
void function(int a,int b,int c){
	code
}
function(2,4,6) -> calling the function
*/

/* we can also change a variable without returning it from a function by using the memory of a variable
void func(int *a){
	*a = *a + 2;
}
this means the parameter takes in the memory if a variable and chnages the value stored in that memory
but we can't pass in value in th pariable of the function directly
*a means value stored in that memory
func(10) -> this will give an error because the function takes in the memory of the variable not value
*/
void func(int *a){
	*a = *a + 2;
}

int main(){
	// we can call the function show like this
	show(10);

	// this is how we can call function that returns a variable
	int x = Alpha(10);
	printf("Value of x : %d\n", x);

	printf("Alpha2 called %d\n", Alpha2(10));
	// we can directly print the value returned from Alpha2 without storing it


	int n = 12;
	// we know that value of n is 12
	printf("value of n before calling func : %d\n", n);

	// but if we write
	func(&n);
	// after calling the function
	// the value of n is increased by 2 this is called pass by reference

	printf("value of n after calling func : %d\n", n);

	return 0;
}