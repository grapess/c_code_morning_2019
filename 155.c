#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[10];
	int i, large;
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
	large = num[0];
	for( i = 1; i < 10; i++ )
	{
		if( large < num[i] )
		{
			large = num[i];
		}
	}
	printf("\n Largest Number : %d \n",large);
	return 0;
}