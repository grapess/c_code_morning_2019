#include<stdio.h>
int main()
{
	int x, result;
	x = 5;
	//result = ++x + x++;
	//result = ++x + ++x + ++x;  
	//result = ++x + x++ + ++x;
	//result = x++ + x++ + x++;
	//result = ++x + ++x * ++x;
	// result = 7 + 7 * 8
	// result = 8 + 8 * 8 = 72
	// 48 50 50 57 75 48 75
	//result = ++x * ++x * ++x;
	// result = 7 * 7 * 8 = 49 * 8 = 392
	result = ++x * ++x * ++x * ++x;
	// result = 7 * 7 * 8 = 49 * 8 = 392 * 9 = alc
	printf("\n The X : %d The Result : %d \n",x,result);
	return 0;
}