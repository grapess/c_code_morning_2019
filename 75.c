#include<stdio.h>
int main()
{
	int num,isprime,div,count;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	
	isprime = 1;
	count = 0;
	if( num % 2 == 0 || num % 3 == 0 )
	{
		count = 1;
		isprime = 0;
	}
	else
	{
		count = 1;
		div = 5;		
		while( div * div <= num )
		{
			count++;
			if( num % div == 0 || num % ( div + 2 ) == 0 )
			{
				isprime = 0;
				break;
			}
			div += 6;
		}
	}
	
	if( isprime == 1 )
	{
		printf("\n Given Number is Prime \n");
	}
	else
	{
		printf("\n Given Number is Composite \n");
	}
	printf("\n Total Count : %d \n",count);
	return 0;
}