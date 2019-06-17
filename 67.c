#include<stdio.h>
int main()
{
	int count,times;
	printf("\n Enter Number of Times : ");
	scanf("%d",&times);
	count = 1;
	do
	{
		printf(" Hello Grapess Solutions \n");
		count++;
	}
	while( count <= times );
	return 0;
}