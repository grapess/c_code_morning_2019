#include<stdio.h>
/*

2
242
24642
2468642
2468108642

*/
int main()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 1; col <= row; col++ )
		{
			printf("%d",2 * col);
		}
		for( col = row - 1; col >= 1; col-- )
		{
			printf("%d",2 * col);
		}
		printf("\n");
	}
	return 0;
}