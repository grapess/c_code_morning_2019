#include<stdio.h>
int main()
{
	int num, div, temp;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	printf("\n Prime Factor of Given Number [ %d ] \n",num);
	temp = num;
	div = 2;
	while( div <= temp )
	{
		if( temp % div == 0 )
		{
			printf(" [ %d ]",div);
			temp = temp / div;
		}
		else
		{
			div++;
		}
	}
	printf("\n");
	return 0;
}