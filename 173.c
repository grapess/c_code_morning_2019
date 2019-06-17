#include<stdio.h>
int sum( int n1 , int n2 )
{
	return n1 + n2;
}
int main()
{
	int (*ptr)(int,int);
	ptr = sum;
	printf("\n Sum : %d \n",(*ptr)(65,23));
	return 0;
}