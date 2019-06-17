#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[100];
	int i, size,j,k;
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
	for( i = 0; i < size - 1; i++ )
	{
		j = i + 1;
		while( j < size )
		{
			if( num[i] == num[j] )
			{
				k = j;
				while( k < size - 1 )
				{
					num[k] = num[k+1];
					k++;
				}
				size--;
			}
			else
			{
				j++;
			}
		}
	}
	printf("\n After Delete All Duplicate Element from Array, Array Elements \n");
	for( i = 0; i < size; i++ )
	{
		printf(" [ %d ]",num[i]);
	}
	printf("\n");	
	return 0;
}