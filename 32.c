#include<stdio.h>
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);

	if( num % 2 == 0 )
	{
		printf("\n Even Number Given \n");
	}
	else
	{
		printf("\n Odd Number Given \n");
	}
	return 0;
}