#include<stdio.h>
#include<math.h>
int main()
{
	int num,isprime,div,range,count;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	
	isprime = 1;
	count = 0;
	div = 2;
	range = sqrt( num );
	while( div <= range )
	{
		count++;
		if( num % div == 0 )
		{
			isprime = 0;
			break;
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
	printf("\n Total Count : %d \n",count);
	return 0;
}