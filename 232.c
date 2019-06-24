#include<stdio.h>
int main()
{
	int num , choice, pos , neg , zero;
	pos = neg = zero = 0;
	while( 1 )
	{
		printf("\n Enter Any Number : ");
		scanf("%d",&num);
		if( num == 0 )
		{
			zero++;
		}
		else if( num > 0 )
		{
			pos++;
		}
		else
		{
			neg++;
		}
		printf("\n Press 1 For Add Another Number, Enter Your Choice : ");
		scanf("%d",&choice);
		if( choice != 1 )
		{
			break;
		}
	}
	printf("\n Total Positive : %d Total Negative : %d Total Zero : %d \n",pos,neg,zero);
	return 0;
}