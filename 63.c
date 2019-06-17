#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *num;
	num = (int*)calloc(sizeof(int),1);
	printf("\n The Number : %d \n",*num);
	free( num );
	num = (int*)malloc(sizeof(int));
	printf("\n The Number : %d \n",*num);
	free( num );
	return 0;
}