#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
/*
struct are nothing but user defined datatype like int,char,long,float,etc.
but struct is user defined
syntax :
struct DatatypeName{
	// defined variables
};

*/
struct People{
	char name[20];
	int age;
	char bloodGrp[3];
};

/* void function with one parameter
syntax
returnType FunctionName(parameter){
	code
}

*/
void show(struct People A){
	printf("Name : %s\n", A.name);
	printf("Age : %d\n", A.age);
	printf("Blood Group : %s\n", A.bloodGrp);
	// function to print the values of A
}

int main(){

	// to make variable of People Datatype just write
	// syntax : struct DatatypeName VariableName;
	struct People person1;
	strcpy(person1.name,"Jhon Joe");
	person1.age = 30;
	strcpy(person1.bloodGrp,"A+");
	show(person1);
	// we used strcpy because arrays can't be assigned directly
	// we use . operator to access different attributes inside struct Datatype
	// The above lines just assigns those values to person1 variable

	struct People person2 = { "Anup Roy" , 23 , "B+" };
	// In this way we can also assign value but maintain the order
	show(person2);
	// calls the function and passes the value of person2

	struct People persons[5];
	// creates an array of struct People

	struct People person3;

	printf("Enter name : ");
	scanf("%[^\n]%*c", &person3.name);
	// takes input name for person3 variable
	printf("Enter age : ");
	scanf("%d", &person3.age);
	// takes input age for person3 variable
	printf("Enter bloodGrp : ");
	scanf("%s", &person3.bloodGrp);
	// takes input blood Group for person3 variable

	show(person3);
	// calls the function and passes the value of person3

	return 0;
}
