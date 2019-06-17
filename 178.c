#include<stdio.h>
/*
1
10
101
1010
10101
*/
void number_pattern()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 1; col <= row; col++ )
		{
			printf("%d",col%2);
		}
		printf("\n");
	}
}
int main()
{
	number_pattern();
	return 0;
}