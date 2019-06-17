#include<stdio.h>
#define SQUARE num * num
int main()
{
	int num,result;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	result = SQUARE;
	printf("\n Square : %d \n",result);
	return 0;
}