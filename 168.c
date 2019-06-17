#include<stdio.h>
void change( int num )
{
	num += 100;
}
void change1( int *ptr )
{
	*ptr += 100;
}
int main()
{
	int num = 1003;
	printf("\n Number : %d \n",num);
	change( num );
	printf("\n Number : %d \n",num);
	change1( &num );
	printf("\n Number : %d \n",num);
	return 0;
}
