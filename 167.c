#include<stdio.h>
void prime_factor( int num );
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	printf("\n Prime Factor of Given Number [ %d ] \n",num);
	prime_factor( num );	
	return 0;
}
void prime_factor( int num )
{
	int div = 2;
	while( div <= num )
	{
		if( num % div == 0 )
		{
			printf(" [ %d ]",div);
			num = num / div;
		}
		else
		{
			div++;
		}
	}
	printf("\n");
}