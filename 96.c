#include<stdio.h>
int main()
{
	int num,d1,d2,d3,sum;
	printf("\n Armstrong Number between 1 and 500 \n");
	num = 1;
	while( num <= 500 )
	{
		d1 = num / 100;
		d2 = ( num / 10 ) % 10;
		d3 = num % 10;
		sum = d1 * d1 * d1 + d2 * d2 * d2 + d3 * d3 * d3;
		if( num == sum )
		{
			printf(" [ %d ]",num);
		}
		num++;
	}
	printf("\n");
	return 0;
}