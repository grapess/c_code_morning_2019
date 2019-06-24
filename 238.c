#include<stdio.h>
int main()
{
	int num , result;
	num = 4324; // 1000011100100
	result = num << 2; // 100001110010000
	printf("\n Number : %d Result : %d \n",num,result);
	result = num >> 2; // 10000111001
	printf("\n Number : %d Result : %d \n",num,result);
	result = ~num; // 00000000 00000000 00010000 11100100
	// 1111111111111111110111100011011
	printf("\n Number : %d Result : %d \n",num,result);
	return 0;
}