#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/* bits
why we should use bits ?
-> because bits are generally faster than operaters like +,-,*,/,etc.
there are 
*/

int main(){
	uint8_t n = 0x04;
	/* the above statement declares an 8bit unsinged int in hexadecimal
	0x means hexadecimal
	1 - 0001	8 - 1000	f - 1111
	2 - 0010	9 - 1001
	3 - 0011	a - 1010
	4 - 0100	b - 1011
	5 - 0101	c - 1100
	6 - 0110	d - 1101
	7 - 1111	e - 1110
	0x04 -> 0 0 0 0 0 1 0 0 -> 2^2 -> 4 decimal
	index :	7 6 5 4 3 2 1 0

	0xaa -> 1 0 1 0 1 0 1 0 -> 2^7 + 2^5 + 2^3 + 2^1 -> 170 decimal
	index : 7 6 5 4 3 2 1 0

	0b means binary
	0b1010 -> 10

	0 means octal
	012  -> 0 0 1 0 1 0 -> 2^3 + 2^1 -> 10 decimal
	index : 5 4 3 2 1 0
	*/

	uint8_t a = 0x0a;
	uint8_t b = 0b1010;
	uint8_t c = 012;
	// actually all values in decimal are 10

	printf("a : %d, b : %d, c : %d\n", a, b, c);

	/*
	there are mainly & and, | or, ^ xor, << leftshift, >> rightshift
		1 0 1 0 0 0 1 1		1 & 1 -> 1
	&	0 0 1 1 0 1 0 1		1 & 0 -> 0
	--------------------	0 & 1 -> 0
		0 0 1 0 0 0 0 1		0 & 0 -> 0
	in hexadecimal ans 0x21	

		1 0 1 0 0 0 1 1		1 & 1 -> 1
	|	0 0 1 1 0 1 0 1		1 & 0 -> 1
	--------------------	0 & 1 -> 1
		1 0 1 1 0 1 1 1		0 & 0 -> 0
	in hexadecimal ans 0xb7	

		1 0 1 0 0 0 1 1		1 & 1 -> 0
	^	0 0 1 1 0 1 0 1		1 & 0 -> 1
	--------------------	0 & 1 -> 1
		1 0 0 1 0 1 1 0 	0 & 0 -> 0
	in hexadecimal ans 0x96

	1 0 1 0 0 0 1 1 leftshift 
	(1 0 1 0 0 0 1 1)<<2
	1 0 1 0 0 0 1 1 0 0, hexcode -> 0x28c
	the binary shifts 2 bits forward
	
	1 0 1 0 0 0 1 1 rightshift 
	(1 0 1 0 0 0 1 1)>>2
	1 0 1 0 0 0, hexcode -> 0x28
	the binary shifts 2 bits backwards
	*/
	uint8_t x = 0xa3;
	uint8_t y = 0x35;

	printf("value of x & y : 0x%x\n", (x&y));
	// x&y, & - bitwise and operator, %x stands for lowercase hexadecimal

	printf("value of x | y : 0x%x\n", (x|y));
	// x|y, | - bitwise or operator

	printf("value of x ^ y : 0x%x\n", (x^y));
	// x^y, ^ - bitwise xor operator

	printf("value of x<<2 : 0x%x\n", (x<<2));
	// x<<y, << - bitwise leftshift operator

	printf("value of x>>2 : 0x%x\n", (x>>2));
	// x>>y, >> - bitwise rightshift operator


	// Find if a number is odd or even
	uint16_t u = 122;
	(u&1)?printf("Number is odd\n"):printf("Number is even\n");


	// Checking if a number is power of 2
	// if a number is power of 2 then it will have only one set bit
	// eg 0x40 -> 0 1 0 0 0 0 0 0 -> 64, so 64-1 -> 0 0 1 1 1 1 1 1
	// that means if we & n and n-1 then the result will be zero
	// but x should not be 0
	u = 0x40;
	bool flag = u && !(u & (u-1));
	// checks if u is not zero and the not of u & u-1 is 1
	// prints 1 if u is a power of 2 else 1
	printf("Is u is a power of 2 : %d\n", flag);


	// Check if ith bit is on or off
	u = 0xaa;
	uint8_t i = 3;
	flag = u & (1<<(i-1));
	printf("%dth bit of %d is : ", i, u);
	(flag)?printf("on\n"):printf("off\n");


	//counting no of set bits
	u = 0x31;
	// 0x32 -> 0 0 1 1 0 0 1 0
	uint8_t count = 0;
	while(u){
		if(u&1)count+=1;
		u>>=1;
	}
	printf("No of set bit in %d are : %d\n", 0x31, count);


	// multiply by ith power of 2
	u = 0x6;
	i = 2;
	u <<=i;
	// multiplying by 2^i;
	printf("%d multiplied by 2 to the power %d is : %d\n", 0x6, i, u);


	// dividing by ith power of 2
	u = 0x6;
	i = 2;
	u >>=i;
	// dividing by 2^i;
	printf("%d dividied by 2 to the power %d is : %d\n", 0x6, i, u);


	// xor swaping
	a = 0xa2;
	b = 0xf4;
	printf("before swaping %d and %d\n", a, b);
	a^=b;
	b^=a;
	a^=b;
	printf("after swaping %d and %d\n", a, b);


	// switching last set bit off
	a = 0x24;
	printf("before stripping %d\n", a, b);
	a = a & (a-1);
	printf("after stripping %d\n", a, b);


	// toggling ith bit
	a = 0x11;
	i = 2;
	printf("before toggling %dth bit : %d\n", i, a);
	a ^= (1<<(i-1));
	printf("after toggling %dth bit : %d\n", i, a);


	// check if an alphabet is uppercase or lowercase
	char ch = 'z';
	uint8_t mask = 0x20;
	(ch & mask)?printf("Char is lowercase\n"):printf("Char is uppercase\n");


	// change lower to upper and if it is lower keep it in lower case
	// but make sure that the ch is an alphabet
	ch = 'e';
	printf("ch before converting to uppercase %c\n", ch);
	mask = 0xdf;
	ch &= mask;
	printf("ch after converting to uppercase %c\n", ch);


	// change uppercase to lowercase and if it is uppercase it will remain in uppercase
	// but make sure that the ch is an alphabet
	ch = 'E';
	printf("ch before converting to lowercase %c\n", ch);
	mask = 0x20;
	ch |= mask;
	printf("ch after converting to lowercase %c\n", ch);


	// change uppercase to lowercase and lowercase to uppercase
	// but make sure that the ch is an alphabet
	ch = 'f';
	printf("ch before toggling %c\n", ch);
	mask = 0x20;
	ch ^= mask;
	printf("ch after toggling %c\n", ch);

	return 0;
}
