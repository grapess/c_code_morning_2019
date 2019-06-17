#include<stdio.h>
int main()
{
	int value;
	value = 1;
g1:	if( value <= 10 )
	{
		printf("\n Grapess Solutions ");
		value++;
		goto g1;
	}
	return 0;
}