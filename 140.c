#include<stdio.h>
/*

1
2  3
4  5  6
7  8  9  10
11 12 13 14 15

*/
int main()
{
	int row,col,value = 1;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 1; col <= row; col++ )
		{
			printf("%d ",value);
			if( value < 10 )
			{
				printf(" ");
			}
			value++;
		}		
		printf("\n");
	}
	return 0;
}