#include<stdio.h>
/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/
int main()
{
	int row, col, space, star;
	space = 4;
	star = 1;
	for( row = 1; row <= 9; row++ )
	{
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
			star += 2;
			space--;
		}
		else
		{
			star -= 2;
			space++;
		}
	}
	return 0;
}