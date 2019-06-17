#include<stdio.h>
int main()
{
	int num[3][3] = { 11 , 22 , 33 , 21 , 45 , 32 , 45 , 66 ,65 };
	int i, j;
	for( i = 0; i < 3; i++ )
	{
		for( j = 0; j < 3; j++ )
		{
			printf(" Value : %d Memory Address : %u \n",num[i][j],&num[i][j]);
		}
	}
	printf("\n [ %u ] [ %u ] [ %d ] \n",num,*num,**num);
	printf("\n [ %d ] [ %d ] \n",*(*num+1) , *(*(num+1)));
	return 0;
}