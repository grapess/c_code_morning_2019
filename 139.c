#include<stdio.h>
/*

12345
23455
34555
45555
55555

*/
int main()
{
	int row,col;
	for( row = 1; row <= 5; row++ )
	{
		for( col = row; col <= 5; col++ )
		{
			printf("%d",col);
		}		
		for( col = 1; col <= row - 1; col++ )
		{
			printf("5");
		}
		printf("\n");
	}
	return 0;
}