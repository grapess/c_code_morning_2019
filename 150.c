#include<stdio.h>
#define SQUARE(x) (x * x)
int main()
{
	int num,result;
	num = 4;
	result = 64 / SQUARE(num); // 64 / (4 * 4) = 64 * 16 = 4
	printf("\n Square : %d \n",result);
	return 0;
}