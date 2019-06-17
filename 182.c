#include<stdio.h>
int binary( int num )
{
	int bin,rem,temp,place;
	temp = num;
	bin = 0;
	place = 1;
	while( temp > 0 )
	{
		rem = temp % 2;
		bin = rem * place + bin;
		temp = temp / 2;
		place = place * 10;
	}
	return bin;
}
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	printf("\n Binary Equivalent Of Given Number : %d \n",binary(num));
	return 0;
}