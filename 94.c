#include<stdio.h>
int main()
{
	int num, temp, rem, sum, rev;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	temp = num;
	sum = 0;
	while( temp > 0 )
	{
		rem = temp % 10;
		sum = sum + rem;
		temp = temp / 10;
	}
	temp = sum;
	rev = 0;
	while( temp > 0 )
	{
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp = temp / 10;
	}
	if( sum * rev == num )
	{
		printf("\n Given Number is Magic \n");
	}
	else
	{
		printf("\n Given Number is not Magic \n");
	}
	return 0;
}