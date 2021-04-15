#include <stdio.h>
#include <math.h>
// this header file contains many math functions

int main(){
	int a,b;
	printf("Enter 2 numbers : ");
	scanf("%d %d", &a, &b);

	double c = a + b;
	// stores the value of a + b in c
	printf("%d + %d = %0.3lf\n", a, b, c);
	// prints the value of a + b

	c = a - b;
	// stores the value of a - b
	printf("%d - %d = %0.3lf\n", a, b, c);

	c = a * b;
	// stores the value of a * b
	printf("%d * %d = %0.3lf\n", a, b, c);

	c = a / b;
	// stores the value of a / b
	printf("%d / %d = %0.3lf\n", a, b, c);

	c = a % b;
	// stores the value of a mod b i.e. the value of remainder when a is divided by b
	printf("%d mod %d = %0.3lf\n", a, b, c);

	// exp(x) -> returns value of e to the power x
	// log(x) -> returns value of log base e x
	// log10(x) -> returns value of log base 10 x
	// pow(x,y) -> returns x to the power y
	// sqrt(x) -> returns square root of x
	// and there are many more functions in math.h that can be used

	int ans = log(exp(2));
	// this is log base e of e to the power 2, so it's value is 2
	printf("log(exp(2)) = %d\n", ans);

	ans = pow(2,3);
	// stores 2 to the power 3 
	printf("2 to the power 3 is %d\n", ans);

	ans = 2 * 3 + 5 - 3 / 3;
	// 1st priority *,/,% same priority that means these operators will be executed in the order they appear in the from left to right order
	// 2nd priority +,- 
	// 3rd priority =

	int x = 8;
	x += 1;
	// this means x is increased by 1
	// this statement can be written as x++;
	// x += 1 means x = x + 1
	// x++ means x will be increased by 1, remember ++x and x++ have different meaning
	printf("%d\n", x);

	return 0;
}