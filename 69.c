#include<stdio.h>
int main()
{
	int num,isprime,div,range;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	
	isprime = 1;
	div = 2;
	range = num - 1;
	while( div <= range )
	{
		if( num % div == 0 )
		{
			isprime = 0;
		}
		div++;
	}
	
	if( isprime == 1 )
	{
		printf("\n Given Number is Prime \n");
	}
	else
	{
		printf("\n Given Number is Composite \n");
	}
	
	return 0;
}