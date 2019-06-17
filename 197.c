#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[5] = { 11 , 33 , 44 , 77 , 99 };
	int i;
	for( i = 0; i < 5; i++ )
	{
		printf("\n Value : %d Memory Address : %u \n",num[i],&num[i]);
	}	
	printf("\n Base Address : %u \n",num);
	printf("\n [ %d ] [ %d ] [ %d ] [ %d ] \n",num[3],*(num+3),*(3+num),3[num]);
	return 0;
}