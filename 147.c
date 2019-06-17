#include<stdio.h>
#define AND &&
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	if( num >= 0 AND num <= 100 )
	{
		printf("\n GOOD NUMBER \n");
	}
	else
	{
		printf("\n BAD NUMBER \n");
	}
	return 0;
}