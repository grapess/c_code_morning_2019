#include<stdio.h>
void pf( int num )
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
}
void rpf( int num )
{
	static int div = 2;
	if( div <= num )
	{
		if( num % div == 0 )
		{
			printf(" [ %d ]",div);
			num = num / div;
			rpf( num );
		}
		else
		{
			div++;
			rpf( num );
		}
	}
}
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	printf("\n Prime Factor \n");
	pf(num);
	printf("\n Prime Factor \n");
	rpf(num);
	printf("\n");
	return 0;
}