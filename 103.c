#include<stdio.h>
int main()
{
	int num, rem, sum, temp, rev, result;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	temp = num;
	if( temp < 0 )
	{
		temp = temp * -1;
	}
	sum = 0;
	while( temp > 0 )
	{
		rem = temp % 10;
		sum = sum + rem;
		temp = temp / 10;
	}
	rev = 0;
	temp = sum;
	while( temp > 0 )
	{
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp = temp / 10;
	}
	result = sum * rev;
	if( num < 0 ) 
	{
		result = result * -1;
	}
	if( result == num )
	{
		printf("\n Given Number is Magic \n");
	}
	else
	{
		printf("\n Given Number is not Magic \n");
	}
	return 0;
}