#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[100];
	int i, size, j, min, temp;
	printf("\n Enter The Size of Array : ");
	scanf("%d",&size);
	srand(time(NULL));
	for( i = 0; i < size; i++ )
	{
		num[i] = rand() % 50;
	}
	printf("\n Array Elements \n");
	for( i = 0; i < size; i++ )
	{
		printf(" [ %d ]",num[i]);
	}
	printf("\n");	
	
	for( i = 0; i < size - 1; i++ )
	{
		min = i;
		for( j = i + 1; j < size; j++ )
		{
			if( num[min] > num[j] )
			{
				min = j;
			}
		}
		if( min != i )
		{
			temp = num[min];
			num[min] = num[i];
			num[i] = temp;
		}
	}
	printf("\n After Selection Sort, Array Elements \n");
	for( i = 0; i < size; i++ )
	{
		printf(" [ %d ]",num[i]);
	}
	printf("\n");
	return 0;
}