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
	int A[10][10],B[10][10],C[10][10];
	int frsize,fcsize,srsize,scsize,i,j,k;
	printf("\n Enter First  Matrix Row Size : ");
	scanf("%d",&frsize);
	printf("\n Enter First  Matrix Col Size : ");
	scanf("%d",&fcsize);
	printf("\n Enter Second Matrix Row Size : ");
	scanf("%d",&srsize);
	printf("\n Enter Second Matrix Col Size : ");
	scanf("%d",&scsize);
	srand(time(NULL));
	for( i = 0; i < frsize; i++ )
	{
		for( j = 0; j < fcsize; j++ )
		{
			A[i][j] = rand() % 10;
		}
	}
	for( i = 0; i < srsize; i++ )
	{
		for( j = 0; j < scsize; j++ )
		{
			B[i][j] = rand() % 10;
		}
	}
	printf("\n First Matrix \n");
	show( A , frsize, fcsize );
	printf("\n Second Matrix \n");
	show( B , srsize, scsize );
	if( fcsize == srsize )
	{
		for( i = 0; i < frsize; i++ )
		{
			for( j = 0; j < scsize; j++ )
			{
				C[i][j] = 0;
				for( k = 0; k < fcsize; k++ )
				{
					C[i][j] += A[i][k] * B[k][j];
				}
			}
		}
		printf("\n After Multiplication, Resultant Matrix \n");
		show( C , frsize, scsize );
	}
	else
	{
		printf("\n Multiplication is not possible \n");
	}
	return 0;
}