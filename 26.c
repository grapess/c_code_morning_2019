#include<stdio.h>
int main()
{
	int num, result;
	num = 5;
	result = --num;
	printf("\n The Number : %d The Result : %d \n",num,result);
	num = 5;
	result = num--;
	printf("\n The Number : %d The Result : %d \n",num,result);
	return 0;
}