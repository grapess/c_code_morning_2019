#include<stdio.h>
/*

56789
4567
345
23
1

*/
int main()
{
	int row,col,value;
	for( row = 1; row <= 5; row++ )
	{
		value = 6 - row;
		for( col = 1; col <= 6 - row; col++ )
		{
			printf("%d",value);
			value++;
		}
		printf("\n");
	}
	return 0;
}