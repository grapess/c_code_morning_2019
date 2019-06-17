#include<stdio.h>
/*
1
10
101
1010
10101
*/
void number_pattern()
{
	int row,col,value;
	for( row = 1; row <= 5; row++ )
	{
		value = 1;
		for( col = 1; col <= row; col++ )
		{
			printf("%d",value);
			if( value == 1 )
			{
				value = 0;
			}
			else
			{
				value = 1;
			}
		}
		printf("\n");
	}
}
int main()
{
	number_pattern();
	return 0;
}