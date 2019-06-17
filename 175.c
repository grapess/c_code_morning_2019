#include<stdio.h>
/*
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
*/
void number_pattern()
{
	int row,col,value,diff;
	for( row = 1; row <= 5; row++ )
	{
		value = row;
		diff = 4;
		for( col = 1; col <= row; col++ )
		{
			printf("%d ",value);
			value = value + diff;
			diff--;
		}
		printf("\n");
	}
}
int main()
{
	number_pattern();
	return 0;
}