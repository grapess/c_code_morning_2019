#include<stdio.h>
int main()
{
	int year;
	printf("\n Enter Any Year : ");
	scanf("%d",&year);
	if( year % 100 == 0 )
	{
		if( year % 400 == 0 )
		{
			printf("\n Given Year is Leap \n");
		}
		else
		{
			printf("\n Given Year is not Leap \n");
		}
	}
	else if( year % 4 == 0 )
	{
		printf("\n Given Year is Leap \n");
	}
	else
	{
		printf("\n Given Year is not Leap \n");
	}
	return 0;
}