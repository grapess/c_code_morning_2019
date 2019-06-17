#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *num;
	num = (int*)malloc(sizeof(int));
	printf("\n Enter Any Number : ");
	scanf("%d",num);
	printf("\n The Number : %d \n",*num);
	free( num );
	return 0;
}