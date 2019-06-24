#include<stdio.h>
void showbits( int num )
{
	int k,i,result;
	i = 31;
	while( i >= 0 )
	{
		k = 1 << i;
		result = num & k;
		result == 0 ? printf("0") : printf("1");
		i--;
	}
}
int main()
{
	int x;
	printf("\n Enter Any Number : ");
	scanf("%d",&x);
	printf("\n Binary Form \n ");
	showbits( x );
	printf("\n");
	return 0;
}