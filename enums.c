#include <stdio.h>

/* Enums
they are user defined datatype which have user defined value inside it
that means they can only have values that are defined it
syntax:
enum EnumName{
	choice1, choice2, choice3, choice4	
};
it has 0 based index like array
choice1 -> 0
choice2 -> 1
and soon
*/
enum status{
	online,busy,offline
};

int main(){
	enum status CurStatus = busy;
	/* declare enum variable
	emnu EnumName VariableName = choice1;
	emnu EnumName VariableName = index;
	where index is index of choice
	we can either give choice or index of that choice
	*/

	printf("status : %d\n", CurStatus);
	// we can print enum values like this

	// we can check enum values like this
	if(CurStatus==online){
		printf("User is online\n");
	}else{
		printf("User is not online\n");
	}

	// we can also take enum values input just by taking in the index of the choice
	enum status Current;
	printf("Enter ur status : ");
	scanf("%d", &Current);
	// takes input the status
	// if someone enters an invalid index it will become and integer value

	printf("Your current status is %d\n", Current);

	switch(Current){
		case online:
			printf("U are online");
		break;
		case busy:
			printf("U are busy");
		break;
		case offline:
			printf("U are Offline");
		break;
		default:
			printf("Invalid Status");
	}
	printf("\n");

	// we can also use all relation operations with enum
	// because they behave just like int
	if(Current<=offline){
		printf("ok");
	}
	return 0;
}