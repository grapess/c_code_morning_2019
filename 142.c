#include<stdio.h>
/*

1
23
4567
89123456
7891234567891234

*/
int main()
{
	int row,col,times,value = 1;
	times = 1;
	for( row = 1; row <= 5; row++ )
	{
		for( col = 1; col <= times; col++ )
		{
			printf("%d",value);
			value++;
			if( value == 10 )
			{
				value = 1;
			}
		}		
		printf("\n");
		times = times * 2;
	}
	return 0;
}