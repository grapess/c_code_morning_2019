#include<stdio.h>
int main()
{
	int num[9][9];
	int srow, erow, scol, ecol, i,j,value;
	value = 5;
	srow = scol = 0;
	erow = ecol = 8;
	for( i = 1; i <= 5; i++ )
	{
		for( j = scol; j <= ecol; j++ )
		{
			num[srow][j] = value;			
		}
		srow++;
		for( j = srow; j <= erow; j++ )
		{
			num[j][ecol] = value;			
		}
		ecol--;
		for( j = ecol; j >= scol; j-- )
		{
			num[erow][j] = value;			
		}
		erow--;
		for( j = erow; j >= srow; j-- )
		{
			num[j][scol] = value;			
		}
		scol++;
		value--;
	}
	for( i = 0; i < 9; i++ )
	{
		for( j = 0; j < 9; j++ )
		{
			printf("%d ",num[i][j]);
			if( num[i][j] < 10 )
			{
				printf("  ");
			}
			else if( num[i][j] < 100 )
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}