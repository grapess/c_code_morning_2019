#include<stdio.h>
int main()
{
	int year, total_days, rem;
	printf("\n Enter Any Year : ");
	scanf("%d",&year);
	// Year has 365 days = 52 Weeks + 1 day
	// Leap Year has 366 days = 52 Weeks + 2 days
	total_days = ( year - 1 ) * 365;
	total_days += ( year - 1 ) / 4;
	total_days -= ( year - 1 ) / 100;
	total_days += ( year - 1 ) / 400;
	
	rem = total_days % 7;
	printf("\n On 1st January, %d has ",year);
	if( rem == 0 )
	{
		printf("Monday");
	}
	else if( rem == 1 )
	{
		printf("Tuesday");
	}
	else if( rem == 2 )
	{
		printf("Wednesday");
	}
	else if( rem == 3 )
	{
		printf("Thursday");
	}
	else if( rem == 4 ) 
	{
		printf("Friday");
	}
	else if( rem == 5 )
	{
		printf("Saturday");
	}
	else
	{
		printf("Sunday");
	}
	printf(".\n");
	return 0;
}