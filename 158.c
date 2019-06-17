#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[100];
	int i, size, pos, k;
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
	printf("\n Enter Position Where We Delete the Item from Array : ");
	scanf("%d",&pos);
	if( pos >= 1 && pos <= size )
	{
		k = pos - 1;
		while( k < size - 1 )
		{
			num[k] = num[k+1];
			k++;
		}
		size--;
		printf("\n After Delete Item from Given Position, Array Elements \n");
		for( i = 0; i < size; i++ )
		{
			printf(" [ %d ]",num[i]);
		}
		printf("\n");
	}
	else
	{
		printf("\n There is no such position available in Array \n");
	}
	return 0;
}