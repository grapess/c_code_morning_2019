#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[100];
	int i, size,large,second_large;
	printf("\n Enter The Size of Array : ");
	scanf("%d",&size);
	srand(time(NULL));
	for( i = 0; i < size; i++ )
	{
		num[i] = rand() % 10;
	}
	printf("\n Array Elements \n");
	for( i = 0; i < size; i++ )
	{
		printf(" [ %d ]",num[i]);
	}
	printf("\n");	
	large = second_large = num[0];
	for( i = 1; i < size; i++ )
	{
		if( large < num[i] )
		{
			second_large = large;
			large = num[i];
		}
		else if( second_large < num[i] )
		{
			second_large = num[i];
		}
	}
	printf("\n Largest Element : %d Second Largest Element : %d \n",large,second_large);
	return 0;
}