#include<stdio.h>
/*

*
**
***
****
*****
****
***
**
*

*/
int main()
{
	int row,col,star=1;
	for( row = 1; row <= 9; row++ )
	{
		for( col = 1; col <= star; col++ )
		{
			printf("*");			
		}
		printf("\n");
		if( row < 5 ) 
		{
			star++;
		}
		else
		{
			star--;
		}
	}
	return 0;
}