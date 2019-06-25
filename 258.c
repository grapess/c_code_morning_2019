#include<stdio.h>
int binary( int num )
{
	int result = 0;
	int place = 1;
	while( num > 0 )
	{
		result = ( num % 2 ) * place + result;
		num = num / 2;
		place = place * 10;
	}
	return result;
}
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	printf("\n Binary Form of num : %d \n",binary(num));
	return 0;
}