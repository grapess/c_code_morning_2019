#include<stdio.h>
/*

1
123
12345
1234567
123456789
1234567
12345
123
1

*/
int main()
{
	int row,col,range = 1;
	for( row = 1; row <= 9; row++ )
	{
		for( col = 1; col <= range; col++ )
		{
			printf("%d",col);
		}
		printf("\n");
		if( row < 5 ) 
		{
			range += 2;
		}		
		else		
		{
			range -= 2;
		}		
	}
	return 0;
}