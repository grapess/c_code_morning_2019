#include<stdio.h>
void show( int num[][3] , int rsize , int csize )
{
	int i , j ;
	for( i = 0; i < rsize; i++ )
	{
		printf("\n");
		for( j = 0; j < csize; j++ )
		{
			printf("\t%d",num[i][j]);
		}
		printf("\n");
	}
}
void display( int (*ptr)[3] , int rsize , int csize )
{
	int i , j ;
	int *pt;
	for( i = 0; i < rsize; i++ )
	{
		pt = (int*)( ptr + i );
		printf("\n");
		for( j = 0; j < csize; j++ )
		{
			printf("\t%d",*(pt+j));
		}
		printf("\n");
	}
}
void print( int *ptr , int rsize , int csize )
{
	int i , j ;
	for( i = 0; i < rsize; i++ )
	{
		printf("\n");
		for( j = 0; j < csize; j++ )
		{
			printf("\t%d",*(ptr+ i * csize + j));
			// * ( ptr + 0 * 3 + 0 )
			// * ( ptr + 0 * 3 + 1 )
			// * ( ptr + 0 * 3 + 2 )
			// * ( ptr + 1 * 3 + 0 )
			// * ( ptr + 1 * 3 + 1 )
		}
		printf("\n");
	}
}
int main()
{
	int num[3][3] = { 11 , 22 , 33 , 44 , 55 , 66 , 77 , 88 , 99 };
	show( num , 3 , 3 );
	display( num , 3 , 3 );
	print( (int*)num , 3 , 3 );
	return 0;
}