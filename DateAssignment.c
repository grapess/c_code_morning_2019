#include<stdio.h>
int main()
{
	int year,month,date,daterange,totaldays,rem,mon;
	while( 1 )
	{
		printf("\n Enter Any Year : ");
		scanf("%d",&year);
		if( year >= 1950 && year <= 2019 )
		{
			break;
		}
		printf("\n Year must between 1950 to 2019 \n");
	}
	while( 1 )
	{
		printf("\n Enter Any Month : ");
		scanf("%d",&month);
		if( month >= 1 && month <= 12 )
		{
			break;
		}
		printf("\n Month must between 1 to 12 \n");
	}
	daterange = 31;
	if( month == 4 || month == 6 || month == 9 || month == 11 )
	{
		daterange = 30;
	}
	else if( month == 2 )
	{
		if( ( year % 100 != 0 && year % 4 == 0 ) || year % 400 == 0 )
		{
			daterange = 29;
		}
		else
		{
			daterange = 28;
		}
	}
	while( 1 )
	{
		printf("\n Enter Any Date : ");
		scanf("%d",&date);
		if( date >= 1 && date <= daterange )
		{
			break;
		}
		printf("\n Date must between 1 to %d \n",daterange);
	}
	totaldays = ( year - 1 ) * 365;
	totaldays += ( year - 1 ) / 4;
	totaldays -= ( year - 1 ) / 100;
	totaldays += ( year - 1 ) / 400;
	for( mon = 1; mon < month; mon++ )
	{
		daterange = 31;
		if( mon == 4 || mon == 6 || mon == 9 || mon == 11 )
		{
			daterange = 30;
		}
		else if( mon == 2 )
		{
			if( ( year % 100 != 0 && year % 4 == 0 ) || year % 400 == 0 )
			{
				daterange = 29;
			}
			else
			{
				daterange = 28;
			}
		}
		totaldays += daterange;
	}
	totaldays += date - 1;
	rem = totaldays % 7;
	printf("\n On %d",date);
	switch( date )
	{
		case 1:
		case 21:
		case 31:
			printf("st");
			break;
		case 2:
		case 22:
			printf("nd");
			break;
		case 3:
		case 23:
			printf("rd");
			break;
		default:
			printf("th");
			break;
	}
	printf(" ");
	switch( month )
	{
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("October");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
	}
	printf(", %d has ",year);
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
		case 6:
			printf("Sunday");
			break;
	}
	printf(".\n");
	return 0;
}