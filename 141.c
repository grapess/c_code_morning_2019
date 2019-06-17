#include<stdio.h>
/*

1
21
123
4321
12345

*/
int main()
{
	int row,col,value;
	for( row = 1; row <= 5; row++ )
	{
		value = 1;
		if( row % 2 == 0 )
		{
			value = row;
		}
		for( col = 1; col <= row; col++ )
		{
			printf("%d",value);
			if( row % 2 == 0 )
			{
				value--;
			}
			else
			{
				value++;
			}
		}		
		printf("\n");
	}
	return 0;
}