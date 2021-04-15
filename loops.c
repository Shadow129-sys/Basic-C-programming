#include <stdio.h>

int main(){

	/*For Loop
	for(datatype variablename = initialValue; condition; change){
		//code
	}
	it runs while the given condition is true
	*/

	for(int i=0;i<10;i++){
		printf("%d ", i);
	}
	// prints numbers from 0 to 9
	printf("\n");

	for(int i=10;i>0;i--){
		printf("%d ", i);
	}
	// prints numbers from 10 to 1
	printf("\n");

	/* While Loop
	while(condition){
		//code
	}
	it runs while the given condition is true
	*/

	int i = 0;
	while(i<10){
		printf("%d ", i);
		i++;
	}
	// prints numbers from 0 to 9
	printf("\n");

	/* Do while
	do{
	
	}while(condition);
	runs till the given condition is true but the dif is even if the condition is false
	the loop will run atleast once because it checks the condition after executing the code
	*/

	i = 0;
	do{
		printf("%d ", i);
		i--;
	}while(i>0);
	// the loop will run once but even if the condition is false

	return 0;
}