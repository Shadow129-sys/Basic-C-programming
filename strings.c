#include <stdio.h>

int main(){
    /* 
    One thing to note is that there is no such thing as string
    present in C programming, string are just array of character
    characters are a single alphanumeric character
    every character have a integer value that means every char has it's
    ascii code
    [65-90] - ['A'-'Z']		[48-57] - ['0'-'9']
    [97-122] - ['a'-'z']
    we represent char by single quotes 'E' -> this is a character
    we represent char by double quotes "This is a String" -> this is a string
    */

    char c;
    printf("Enter a char : ");
    scanf("%c", &c);
    //takes a char input

    printf("Ascii value of \'%c\' : %d\n", c, c);
    // as we can see that c is char type vriable but i have written %d
    // that stands for int, what the statement will do is that it will
    // typecase 'A' into int i.e. it's ascii value, this is also called explicit typecasting

    /* we can convert uppercase values into lowercase or lowercase into uppercase
	like this */

	if(c>='A' && c<='Z'){
		c = c + 32;
	}else if(c>='a' && c<='z'){
		c = c - 32;
	}else{
		// if this block is executed that means c is not an alphabet
	}

	printf("Value of c is \'%c\'\n", c);
	// prints value of c

	char str[] = "This is a string!!";
	// declares a string

	printf("%s\n", str);
	// prints the string

	char arr[20];
	// here 50 is maxlength of the string
	// a string whose length is more than 50 their first 50 letters will be taken
	printf("Enter a string : ");
	scanf("%s", arr);
	// Takes a string input but the problem with this is that it only
	// takes in one word as input 
	// to take a whole sentence as input we can use gets

	printf("Your string is : %s\n", arr);
	// prints the string

	return 0;
}
