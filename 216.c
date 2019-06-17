#include<stdio.h>
int main()
{
	int num[10][10];
	int srow, erow, scol, ecol, i,j,value;
	value = 1;
	srow = scol = 0;
	erow = ecol = 9;
	for( i = 1; i <= 5; i++ )
	{
		for( j = scol; j <= ecol; j++ )
		{
			num[srow][j] = value;
			value++;
		}
		srow++;
		for( j = srow; j <= erow; j++ )
		{
			num[j][ecol] = value;
			value++;
		}
		ecol--;
		for( j = ecol; j >= scol; j-- )
		{
			num[erow][j] = value;
			value++;
		}
		erow--;
		for( j = erow; j >= srow; j-- )
		{
			num[j][scol] = value;
			value++;
		}
		scol++;
	}
	for( i = 0; i < 10; i++ )
	{
		for( j = 0; j < 10; j++ )
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