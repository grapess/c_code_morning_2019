#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\n Enter First  Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);

	if( num1 == num2 )
	{
		printf("\n Both Number are equal \n");
	}
	else
	{
		if( num1 > num2 )
		{
			printf("\n First Number is Largest \n");
		}
		else
		{
			printf("\n Second Number is Largest \n");
		}
	}
	return 0;
}