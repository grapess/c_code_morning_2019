#include<stdio.h>
int main()
{
	int num, temp, rev, rem;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	temp = num;
	rev = 0;
	while( temp > 0 )
	{
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp = temp / 10;
	}
	if( rev == num )
	{
		printf("\n Given Number is Palindrome \n");
	}
	else
	{
		printf("\n Given Number is not Palindrome \n");
	}
	rev == num ? printf("\n Given Number is Palindrome \n") :
			printf("\n Given Number is not Palindrome \n");
	return 0;
}