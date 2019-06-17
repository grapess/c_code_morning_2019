#include<stdio.h>
int main()
{
	int num,temp,rem,sum;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	
	temp = num;
	sum = 0;
	if( temp < 0 )
	{
		temp = temp * -1;
	}
	
	while( temp > 0 )
	{
		rem = temp % 10;
		sum = sum + rem;
		temp = temp / 10;
	}
	
	printf("\n Sum of Digit of Given Number : %d \n",sum);
	
	return 0;
}