#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[10];
	int i, large, first_time;
	srand(time(NULL));
	first_time = 1;
	for( i = 0; i < 10; i++ )
	{
		num[i] = rand() % 50;
		if( first_time == 1 )
		{
			large = num[i];
			first_time = 0;
		}
		else if( large < num[i] )
		{
			large = num[i];
		}
	}
	printf("\n Array Elements \n");
	for( i = 0; i < 10; i++ )
	{
		printf(" [ %d ]",num[i]);
	}
	printf("\n");
	printf("\n Largest Number : %d \n",large);
	return 0;
}