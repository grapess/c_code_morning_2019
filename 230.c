#include<stdio.h>
int main()
{
	int num , large , small, choice, first_time = 1;
	while( 1 )
	{
		printf("\n Enter Any Number : ");
		scanf("%d",&num);
		if( first_time == 1 )
		{
			first_time = 0;
			large = small = num;
		}
		else
		{
			if( large < num )
			{
				large = num;
			}
			if( small > num )
			{
				small = num;
			}
		}
		printf("\n Press 1 For Add Another Number, Enter Your Choice : ");
		scanf("%d",&choice);
		if( choice != 1 )
		{
			break;
		}
	}
	printf("\n Range of Set of Number : %d \n", ( large - small ) );
	return 0;
}