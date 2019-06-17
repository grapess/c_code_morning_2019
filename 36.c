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
	switch( rem )
	{
		case 0:
			printf("Monday");
			break;
		case 1:
			printf("Tuesday");
			break;
		case 2:
			printf("Wednesday");
			break;
		case 3:
			printf("Thursday");
			break;
		case 4:
			printf("Friday");
			break;
		case 5:
			printf("Saturday");
			break;
		default:
			printf("Sunday");
			break;
	}
	printf(".\n");
	return 0;
}