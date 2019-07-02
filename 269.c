#include<stdio.h>
int main()
{
	int n1,n2,ans,choice,run;
	printf("\n Enter Any Number : ");
	scanf("%d",&n1);
	printf("\n Enter Any Number : ");
	scanf("%d",&n2);
	run = 1;
	while( run )
	{
		printf("\n Press 1 For Add These Number ");
		printf("\n Press 2 For Subtract These Number ");
		printf("\n Press 3 For Exit \n");
		printf("\n Enter your Choice : ");
		scanf("%d",&choice);
		switch( choice )
		{
			case 1:
				ans = n1 + n2;
				printf("\n Sum : %d \n",ans);
				break;
			case 2:
				ans = n1 - n2;
				printf("\n Difference : %d \n",ans);
				break;
			case 3:
				printf("\n Bye Bye \n");
				run = 0;
				break;
			default:
				printf("\n Invalid CHoice. Try Again \n");
				break;
		}
	}
	return 0;
}