#include<stdio.h>
int main()
{
	int num, rem, temp, rev, sum;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	rev = sum = 0;
	temp = num;
	while( temp > 0 )
	{
		rem = temp % 10;
		sum = sum + rem;
		rev = rev * 10 + rem;
		temp = temp / 10;
	}
	printf("\n [");
	temp = rev;
	while( temp > 0 )
	{
		rem = temp % 10;
		printf(" %d",rem);
		temp = temp / 10;
		if( temp != 0 )
		{
			printf(" +");
		}
	}
	printf(" = %d ] \n",sum);
	return 0;
}