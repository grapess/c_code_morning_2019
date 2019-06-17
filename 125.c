#include<stdio.h>
int main()
{
	int row,col,value;
	for( row = 1; row <= 5; row++ )
	{
		value = 1;
		if( row % 2 == 0 )
		{
			value = 2;
		}
		for( col = 1; col <= row; col++ )
		{
			printf("%d",value);
			value += 2;
		}
		printf("\n");
	}
	return 0;
}
