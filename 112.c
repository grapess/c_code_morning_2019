#include<stdio.h>
/*

 ***
*   *
*   *
*   *
 ***
*   *
*   *
*   *
 ***

*/
int main()
{
	int row,col;
	for( row = 1; row <= 9; row++ )
	{
		for( col = 1; col <= 5; col++ )
		{
			if( row == 1 || row == 5 || row == 9 )
			{
				if( col == 1 || col == 5 )
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else if( col == 1 || col == 5 )
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