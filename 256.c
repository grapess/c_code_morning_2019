#include<stdio.h>
/*
         1
      2     3
   4     5     6
7     8     9     10

Space = 9 6 3 0
*/
int main()
{
	int row,col,value=1;
	int space = 9;
	for( row = 1; row <= 4; row++ )
	{
		for( col = 1; col <= space; col++ )
		{
			printf(" ");
		}
		space -= 3;
		for( col = 1; col <= row; col++ )
		{
			printf("%d     ",value);
			value++;
		}
		printf("\n");
	}
	return 0;
}