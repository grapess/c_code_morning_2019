#include<stdio.h>
/*

5
45
345
2345
12345

*/
int main()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 6 - row; col <= 5; col++ )
		{
			printf("%d",col);
		}
		printf("\n");
	}
	return 0;
}