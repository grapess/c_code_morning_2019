#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void show( int num[] , int size )
{
	int i;
	for( i = 0; i < size; i++ )
	{
		printf(" [ %d ]",num[i]);
	}
}
int main()
{
	int num[100];
	int count[10] = {};
	int pos[10] = {};
	int i,size;
	int frequency, position, value;
	printf("\n Enter Size of Array : ");
	scanf("%d",&size);
	srand(time(NULL));
	for( i = 0; i < size; i++ )
	{
		num[i] = rand() % 10;
		count[num[i]]++;
		if( pos[num[i]] == 0 )
		{
			pos[num[i]] = i + 1;
		}
	}
	printf("\n Array Elements \n");
	show( num , size );
	printf("\n");
	printf("\n Frequency : ");
	for( i = 0; i < 10; i++ )
	{
		if( count[i] != 0 )
		{
			printf(" [ %d : %d : %d ]",i,count[i],pos[i]);
		}
	}
	printf("\n");
	frequency = position = 0;
	value = -1;
	for( i = 0; i < size; i++ )
	{
		if( count[i] != 0 )
		{
			if( frequency < count[i] )
			{
				value = i;
				frequency = count[i];
				position = pos[i];
			}
			else if( frequency == count[i] && position > pos[i] )
			{
				value = i;
				frequency = count[i];
				position = pos[i];
			}
		}
	}
	printf("\n Element Which Occur More in an Array : %d \n",value);
	return 0;
}