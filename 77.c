#include<stdio.h>
int main()
{
	int num, choice, sum = 0;
	while( 1 )
	{
		printf("\n Enter Any Number : ");
		scanf("%d",&num);
		sum += num;
		printf("\n Press 1 For Add Another Number ");
		printf("\n Enter Your Choice : ");
		scanf("%d",&choice);
		if( choice != 1 )
		{
			break;
		}
	}
	printf("\n The Sum of Given Number : %d \n",sum);
	return 0;
}