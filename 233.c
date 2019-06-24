#include<stdio.h>
int main()
{
	int num , rem , sum1 ,sum2 , temp;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	temp = num;
	sum1 = temp % 10;
	sum2 = 0;
	temp = temp / 10;
	while( temp > 9 )
	{
		rem = temp % 10;
		sum2 = sum2 + rem;
		temp = temp / 10;
	}
	sum1 = sum1 + temp;
	if( sum1 == sum2 )
	{
		printf("\n Given Number is Cool \n");
	}
	else
	{
		printf("\n Given Number is not Cool \n");
	}
	return 0;
}