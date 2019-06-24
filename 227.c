#include<stdio.h>
int factorial( int num )
{
	int fact = 1;
	while( num > 1 )
	{
		fact = fact * num;
		num--;
	}
	return fact;
}
int rfactorial( int num )
{
	int fact = 1;
	if( num > 1 )
	{
		fact = num * rfactorial( num - 1 );
	}
	return fact;
}
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	printf("\n Factorial : %d \n",factorial(num));
	printf("\n Factorial : %d \n",rfactorial(num));
	return 0;
}