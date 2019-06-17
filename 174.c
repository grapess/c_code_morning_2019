#include<stdio.h>
/*
    1
  2 3 4
5 6 7 8 9
*/
void number_pattern()
{
	int row,col,value=1;
	for( row = 1; row <= 3; row++ )
	{
		for( col = 1; col <= 2 * (3 - row); col++ )
		{
			printf(" ");
		}
		for( col = 1; col <= 2 * row - 1; col++ )
		{
			printf("%d ",value);
			value++;
		}
		printf("\n");
	}
}
int main()
{
	number_pattern();
	return 0;
}