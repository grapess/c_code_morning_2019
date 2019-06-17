#include<stdio.h>
int main()
{
	int year;
	printf("\n Enter Any Year : ");
	scanf("%d",&year);
	if( ( year % 100 != 0 && year % 4 == 0 ) || year % 400 == 0 )
	{
		printf("\n Given Year is Leap \n");
	}
	else
	{
		printf("\n Given Year is not Leap \n");
	}
	return 0;
}