#include<stdio.h>
/*

    +
    +
    +
    +
+++++++++
    +
    +
    +
    +

*/
int main()
{
	int row,col;
	for( row = 1; row <= 9; row++ )
	{
		for( col = 1; col <= 9; col++ )
		{
			if( row == 5 || col == 5)
			{
				printf("+");
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