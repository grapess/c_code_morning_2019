#include<stdio.h>
/*

1
2 4
1 3 5
2 4 6 8
1 3 5 7 9

*/
int main()
{
	int row,col,value;
	for( row = 1; row <= 5; row++ )
	{
		if( row % 2 == 0 )
		{
			value = 2;
		}
		else
		{
			value = 1;
		}
		for( col = 1; col <= row; col++ )
		{
			printf("%d ",value);
			value+=2;
		}
		printf("\n");
	}
	return 0;
}