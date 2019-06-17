#include<stdio.h>
void show( int *ptr , int size)
{
	int i;
	for( i = 0; i < size; i++ )
	{
		printf(" [ %d ] [ %d ]",*(ptr + i),ptr[i]);
	}
}
int main()
{
	int num[5] = { 22 , 44 , 55 , 63 , 54 };
	show( num , 5 );
	return 0;
}