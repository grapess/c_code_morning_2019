#include<stdio.h>
/*
A B C D E F G F E D C B A	0 space
A B C D E F   F E D C B A   3 space
A B C D E       E D C B A   7 space
A B C D           D C B A	11 space
A B C               C B A	15 space
A B                   B A	17 space
A                       A	21 space

*/
int main()
{
	int row,col,value,space = 0;
	for( row = 1; row <= 7; row++ )
	{
		for( col = 1; col <= 8 - row; col++ )
		{
			printf("%c ",( 64 + col ));
		}
		value = 64 + col - 1;
		for( col = 1; col <= space; col++ )
		{
			printf(" ");
		}		
		if( row == 1 )
		{
			value--;
			space = 2;
		}
		else
		{
			space += 4;
		}
		while( value >= 65 )
		{
			printf("%c ",value);
			value--;
		}
		printf("\n");
	}
	return 0;
}