#include<stdio.h>
/*
1
23
456
78910
*/
void number_pattern()
{
	int row,col,value=1;
	for( row = 1; row <= 4; row++ )
	{
		for( col = 1; col <= row; col++ )
		{
			printf("%d",value);
			value++;
		}
		printf("\n");
	}
}
int main()
{
	number_pattern();
	return 0;
}