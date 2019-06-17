#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[100];
	int i, size, pos, item, k;
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
	printf("\n Enter Position Where We Insert an Item : ");
	scanf("%d",&pos);
	printf("\n Enter Item : ");
	scanf("%d",&item);
	if( pos >= 1 && pos <= size )
	{
		k = size - 1;
		while( k >= pos - 1 )
		{
			num[k+1] = num[k];
			k--;
		}
		num[pos-1] = item;
		size++;
		printf("\n After Inserting Item at Given Position, Array Elements \n");
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