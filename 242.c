#include<stdio.h>
void change( int val ) // val = x
{
	val += 100;
}
void change1( int *ptr ) // ptr = &x;
{
	*ptr += 100;
}
int main()
{
	int x = 1100;
	printf("\n x = %d \n",x);
	change( x );
	printf("\n x = %d \n",x);
	change1( &x );
	printf("\n x = %d \n",x);
	return 0;
}