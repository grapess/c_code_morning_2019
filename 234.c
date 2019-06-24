#include<stdio.h>
#include<math.h>
int isPrime( int num )
{
	int div = 2;
	int range = sqrt( num );
	while ( div <= range )
	{
		if( num % div == 0 )
		{
			return 0;
		}
		div++;
	}
	return 1;
}
int rPrime( int num, int div )
{
	int range = sqrt( num );
	if ( div <= range )
	{
		if( num % div == 0 )
		{
			return 0;
		}
		else
		{
			return rPrime( num , div + 1 );
		}		
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	
	isPrime( num ) ? printf("\n Prime Number \n") : printf("\n Not a Prime Number \n");
	
	rPrime( num ,2 ) ? printf("\n Prime Number \n") : printf("\n Not a Prime Number \n");
	return 0;
}