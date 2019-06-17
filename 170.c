#include<stdio.h>
#include"functions.h"
#include"functions.h"
int main()
{
	int n1,result;
	printf("\n Enter Any Number : ");
	scanf("%d",&n1);
	result = factorial( n1 );
	printf("\n Factorial : %d \n",result);
	return 0;
}