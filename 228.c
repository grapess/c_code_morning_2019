#include<stdio.h>
int fibo( int term )
{
	int f , s , n , count;
	if( term == 1 || term == 2 )
	{
		return term - 1;
	}
	else
	{
		f = 0;
		s = 1;
		n = f + s;
		count = 3;
		while( count != term )
		{
			count++;
			f = s;
			s = n;
			n = f + s;
		}
		return n;
	}
}
int rfibo( int term )
{
	if( term == 1 || term == 2 )
	{
		return term - 1;
	}
	else
	{
		return rfibo( term - 2 ) + rfibo( term - 1 );
	}
}
int main()
{
	int term;
	printf("\n Enter Any Term Number : ");
	scanf("%d",&term);
	printf("\n Fibonacci Term value : %d \n",fibo(term));
	printf("\n Fibonacci Term value : %d \n",rfibo(term));
	return 0;
}