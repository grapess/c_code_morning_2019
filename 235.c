#include<stdio.h>
#include<math.h>
int rPrime( int num, int range )
{
	static int div = 2;
	if ( div <= range )
	{
		if( num % div == 0 )
		{
			return 0;
		}
		else
		{
			div++;
			return rPrime( num , range );
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
	
	rPrime( num ,sqrt(num) ) ? printf("\n Prime Number \n") : printf("\n Not a Prime Number \n");
	return 0;
}