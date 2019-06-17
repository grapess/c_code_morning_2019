#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void show( int num[] , int size )
{
	int i;
	for( i = 0; i < size; i++ )
	{
		printf(" [ %d ] ",num[i]);
	}
	printf("\n");
}
int main()
{
	int num[100];
	int size, i, j,item;
	printf("\n Enter Size of Array : ");
	scanf("%d",&size);
	srand(time(NULL));
	for( i = 0; i < size; i++ )
	{
		num[i] = rand() % 10;
	}
	printf("\n Array Elements \n");
	show( num , size );
	printf("\n Enter Item to be Removed : ");
	scanf("%d",&item);
	i = 0;
	while( i < size )
	{
		if( num[i] == item )
		{
			j = i;
			while( j < size - 1 )
			{
				num[j] = num[j+1];
				j++;
			}
			size--;
		}
		else
		{
			i++;
		}
	}
	printf("\n After Removing Item, Array Elements \n");
	show( num , size );
	return 0;
}