#include<stdio.h>
int main()
{
	int value;
	for( value = 1; value <= 100; value++ )
	{
		if( value == 50 )
		{
			break;
		}
		if( value % 2 == 0 )
		{
			continue;
		}
		printf("\n [ %d ]",value);
	}
	return 0;
}