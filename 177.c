#include<stdio.h>
/*
13579
3579
579
79
9
*/
void number_pattern()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 2 * row - 1; col <= 9; col+=2 )
		{
			printf("%d",col);
		}
		printf("\n");
	}
}
int main()
{
	number_pattern();
	return 0;
}