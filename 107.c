#include<stdio.h>
/*

11111
10001
10001
10001
11111

*/
int main()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 1; col <= 5; col++ )
		{
			if( row == 1 || row == 5 || col == 1 || col == 5 )
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}