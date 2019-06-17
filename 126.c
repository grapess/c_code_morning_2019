#include<stdio.h>
int main()
{
	int num;
	num = 400000 * 400000 / 400000;
	printf("\n Number : %d \n",num);
	num = 2147483649;
	printf("\n Number : %d \n",num);
	num = -2147483650;
	printf("\n Number : %d \n",num);
	return 0;
}
