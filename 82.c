#include<stdio.h>
int main()
{
	int player, total = 21;
	while( total != 1 )
	{
		printf("\n Remaining Matchstick in Game : %d \n",total);
		printf("\n Player can pick 1 or 2 or 3 or 4 Matchstick at once ");
		printf("\n Enter Number of Matchstick you want to Pick : ");
		scanf("%d",&player);
		if( player >= 1 && player <= 4 )
		{
			printf("\n Computer Pick %d Matchstick \n",5-player);
			total -= 5;
		}
		else
		{
			printf("\n Invalid Number of Matchstick. Try Again \n");
		}
	}
	printf("\n Player has to Pick Last Matchstick So Computer wins \n");
	return 0;
}