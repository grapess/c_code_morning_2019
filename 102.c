#include<stdio.h>
/*

1        1
12      21
123    321
1234  4321
1234554321

*/
int main()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 1; col <= row; col++ )
		{
			printf("%d",col);
		}
		for( col = 1; col <= 2 * (5 - row); col++ )
		{
			printf(" ");
		}
		for( col = row; col >= 1; col-- )
		{
			printf("%d",col);
		}
		printf("\n");
	}
	return 0;
}