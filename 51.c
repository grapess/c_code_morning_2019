#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("\n Enter First  Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	printf("\n Enter Third  Number : ");
	scanf("%d",&n3);
	if( n1 == n2 && n1 == n3 )
	{
		printf("\n All Three Number are Equal \n");
	}
	else if( n1 == n2 && n1 > n3 )
	{
		printf("\n First and Second Number are Largest \n");
	}
	else if( n1 == n3 && n1 > n2 )
	{
		printf("\n First and Third Number are Largest \n");
	}
	else if( n2 == n3 && n2 > n1 )
	{
		printf("\n Second and Third Number are Largest \n");
	}
	else if( n1 > n2 && n1 > n3 )
	{
		printf("\n First Number is Largest \n");
	}
	else if( n2 > n3 )
	{
		printf("\n Second Number is Largest \n");
	}
	else
	{
		printf("\n Third Number is Largest \n");
	}
	return 0;
}