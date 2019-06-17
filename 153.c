#include<stdio.h>
int main()
{
	int num[10];
	int i, sum = 0;
	for( i = 0; i < 10; i++ )
	{
		printf("\n Enter Array Element : ");
		scanf("%d",&num[i]);
		sum = sum + num[i];
	}
	printf("\n Sum of Given Number : %d \n",sum);
	return 0;
}