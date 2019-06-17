#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[100];
	int i, size, j, temp;
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
	
	i = 1;
	while( i < size )
	{
		temp = num[i];
		j = i - 1;
		while( j >= 0 && temp < num[j] )
		{
			num[j+1] = num[j];
			j--;
		}
		num[j+1] = temp;
		i++;
	}
	
	printf("\n After Insertion Sort, Array Elements \n");
	for( i = 0; i < size; i++ )
	{
		printf(" [ %d ]",num[i]);
	}
	printf("\n");
	return 0;
}