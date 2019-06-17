#include<stdio.h>
/*

  *****     *****
 *******   *******
********* *********
******GRAPESS******
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
	    ***
		 *

*/
int main()
{
	int row,col,space,star;
	star = 5;
	space = 5;
	for( row = 1; row <= 3; row++ )
	{
		for( col = 1; col <= 3 - row; col++ )
		{
			printf(" ");
		}
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
		star += 2;
		space -= 2;
	}
	printf("******GRAPESS******\n");
	star = 17;
	for( row = 1; row <= 9; row++ )
	{
		for( col = 1; col <= row; col++ )
		{
			printf(" ");
		}
		for( col = 1; col <= star; col++ )
		{
			printf("*");
		}
		printf("\n");
		star -= 2;
	}
	return 0;
}