#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void show( int num[][10] , int rsize , int csize )
{
	int i , j ;
	for( i = 0; i < rsize; i++ )
	{
		printf("\n");
		for( j = 0; j < csize; j++ )
		{
			printf("\t%d",num[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int num[10][10];
	int rsize,csize,i,j,temp;
	printf("\n Enter Matrix Row Size : ");
	scanf("%d",&rsize);
	printf("\n Enter Matrix Col Size : ");
	scanf("%d",&csize);
	srand(time(NULL));
	for( i = 0; i < rsize; i++ )
	{
		for( j = 0; j < csize; j++ )
		{
			num[i][j] = rand() % 30;
		}
	}
	printf("\n Matrix \n");
	show( num , rsize, csize );
	for( i = 0; i < rsize; i++ )
	{
		for( j = 0; j < csize; j++ )
		{
			if( i < j )
			{
				temp = num[i][j];
				num[i][j] = num[j][i];
				num[j][i] = temp;
			}
		}
	}
	printf("\n After Transpose, Matrix \n");
	show( num , rsize, csize );
	return 0;
}