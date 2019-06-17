#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[10];
	int i;
	srand(time(NULL));
	for( i = 0; i < 10; i++ )
	{
		num[i] = rand() % 50;
	}
	printf("\n Array Elements \n");
	for( i = 0; i < 10; i++ )
	{
		printf(" [ %d ]",num[i]);
	}
	printf("\n");
	return 0;
}