#include<stdio.h>
/*

54321
4321
321
21
1

*/
int main()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 6 - row; col >= 1; col-- )
		{
			printf("%d",col);
		}		
		printf("\n");
	}
	return 0;
}