#include<stdio.h>
/*

55555
54444
54333
54322
54321

*/
int main()
{
	int row,col;
	for( row = 1; row <= 5; row++) 
	{
		for( col = 5; col >= 6 - row; col-- )
		{
			printf("%d",col);
		}
		for( col = 1; col <= 5 - row; col++ )
		{
			printf("%d",6-row);
		}
		printf("\n");
	}
	return 0;
}