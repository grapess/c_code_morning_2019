#include<stdio.h>
int main()
{
	int n1,n2,ans,choice;
	printf("\n Enter Any Number : ");
	scanf("%d",&n1);
	printf("\n Enter Any Number : ");
	scanf("%d",&n2);
	printf("\n Press 1 For Add These Number ");
	printf("\n Press 2 For Subtract These Number ");
	printf("\n Press 3 For Multiply These Number ");
	printf("\n Press 4 For Divide These Number \n");
	printf("\n Enter Your Choice : ");
	scanf("%d",&choice);
	switch( choice )
	{
		case 1:
			ans = n1 + n2;
			printf("\n Sum of Given Number : %d \n",ans);
			break;
		case 2:
			ans = n1 - n2;
			printf("\n Difference of Given Number : %d \n",ans);
			break;
		case 3:
			ans = n1 * n2;
			printf("\n Product of Given Number : %d \n",ans);
			break;
		case 4:
			if( n2 == 0 )
			{
				printf("\n After Divide These Number, Result : Infinity \n");
			}
			else
			{
				ans = n1 / n2;
				printf("\n After Divide These Number, Result : %d \n",ans);
			}
			break;
		default:
			printf("\n Invalid Choice. Try Again \n");
			break;
	}
	return 0;
}