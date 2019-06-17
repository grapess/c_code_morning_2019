#include<stdio.h>
/*

    1
   1 1
  1 3 1
 1 3 3 1
1 3 5 3 1

*/
int main()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 1; col <= 5 - row; col++ )
		{
			printf(" ");
		}
		for( col = 1; col <= row; col++ )
		{
			if( col % 2 == 0 )
			{
				printf(" ");
			}
			else
			{
				printf("%d",col);
			}
		}
		for( col = row - 1; col >= 1; col-- )
		{
			if( col % 2 == 0 )
			{
				printf(" ");
			}
			else
			{
				printf("%d",col);
			}
		}
		printf("\n");
	}
	return 0;
}