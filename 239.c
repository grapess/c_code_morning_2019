#include<stdio.h>
int main()
{
	int num1 , num2 , result;
	num1 = 344; // 0101011000
	num2 = 654;//  1010001110
	result = num1 & num2; // 0000001000
	printf("\n Number1 : %d Number 2 : %d Result : %d \n",num1,num2,result);
	result = num1 | num2; // 1111011110
	printf("\n Number1 : %d Number 2 : %d Result : %d \n",num1,num2,result);
	result = num1 ^ num2; // 1111010110
	printf("\n Number1 : %d Number 2 : %d Result : %d \n",num1,num2,result);
	return 0;
}