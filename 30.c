#include<stdio.h>
int main()
{
	int price;
	printf("\n Enter Price : ");
	scanf("%d",&price);

	if( price > 1000 )
	{
		printf("\n You Got 10%% Discount \n");
	}
	
	return 0;
}