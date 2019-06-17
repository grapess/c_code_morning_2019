#include<stdio.h>
/*

12345
4321
123
21
1

*/
int main()
{
	int row,col,value;
	for( row = 1; row <= 5; row++ )
	{
		if( row % 2 == 0 )
		{
			value = 6 - row;
		}
		else
		{
			value = 1;
		}
		for( col = 1; col <= 6 - row; col++ )
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