#include<stdio.h>
int main()
{
	int n1,n2;
	printf("\n Enter First  Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	n1 == n2 ? printf("\n Both Number are Equal \n") : n1 > n2 ? 
		printf(" \n First Number is Largest \n") : printf("\n Second Number is Largest \n");
	return 0;
}