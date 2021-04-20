#include <stdio.h>

struct address{
	char street[20];
	int pin;
};

struct Person{
	char name[20];
	struct address Address;
	// here we can see that a struct is defined inside another structure
	// but make sure to define the struct Address before struct Person
};

int main(){
	struct Person person1 = {"Jhon Joe" ,{"Root st." , 120035}};
	// defines a variable of struct Person 
	printf("Name : %s\n", person1.name);
	printf("Street : %s\n", person1.Address.street);
	// in this way we can access attributes of nested structs
	// we can have many nested struct
	printf("pin : %d\n", person1.Address.pin);
	return 0;
}
