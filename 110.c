#include<stdio.h>
/*

*
**
* *
*  *
*****

*/
int main()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 1; col <= row; col++ )
		{
			if( row == 5 || col == 1 || col == row)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}