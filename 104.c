#include<stdio.h>
/*

**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********

*/
int main()
{
	int row, col, star, space;
	space = 0;
	star = 5;
	for( row = 1; row <= 9; row++ )
	{
		for( col = 1; col <= star; col++ )
		{
			printf("*");
		}
		for( col = 1; col <= space; col++ )
		{
			printf(" ");
		}
		for( col = 1; col <= star; col++ )
		{
			printf("*");
		}
		printf("\n");
		if( row < 5 )
		{
			space += 2;
			star--;
		}
		else
		{
			space -= 2;
			star++;
		}
	}
	return 0;
}