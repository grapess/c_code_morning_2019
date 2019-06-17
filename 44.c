#include<stdio.h>
int main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	if( num % 2 == 0 )	
		printf("\n Even Number \n");
		printf(" YES ");	
	else	
		printf("\n Odd Number \n");
	
	return 0;
}