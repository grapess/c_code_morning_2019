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
	int row,col,star,space;
	star = 5;
	space = 0;
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
			star--;
			space += 2;
		}
		else
		{
			star++;
			space -= 2;
		}
	}
	return 0;
}