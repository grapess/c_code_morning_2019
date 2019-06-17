#include<stdio.h>
int main()
{
	int num, terms;
	printf("\n Enter Number of Terms : ");
	scanf("%d",&terms);
	printf("\n First %d Even Series Term \n",terms);
	for( num = 2; num <= 2 * terms; num += 2 )
	{
		printf(" [ %d ]",num);
	}		
	return 0;
}