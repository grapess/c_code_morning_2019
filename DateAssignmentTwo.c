#include<stdio.h>
int calculateDateRange( int month, int year )
{
	int daterange = 31;
	if( month == 4 || month == 6 || month == 9 || month == 11 )
	{
		daterange = 30;
	}
	else if( month == 2 )
	{
		daterange = ( year % 100 != 0 && year % 4 == 0 ) || year % 400 == 0 ? 29 : 28;
	}
	return daterange;
}
int readValue( char message[], int begin , int end )
{
	int value;
	while( 1 )
	{
		printf("\n Enter Any %s : ",message);
		scanf("%d",&value);
		if( value >= begin && value <= end )
		{
			break;
		}
		printf("\n %s must between %d to %d \n",message,begin,end);
	}
	return value;
}
int main()
{
	int year,month,date,daterange,totaldays,rem,mon;
	year = readValue("Year",1950,2019);
	month = readValue("Month",1,12);
	daterange = calculateDateRange( month, year);
	date = readValue( "Date",1,daterange);
	totaldays = ( year - 1 ) * 365;
	totaldays += ( year - 1 ) / 4;
	totaldays -= ( year - 1 ) / 100;
	totaldays += ( year - 1 ) / 400;
	for( mon = 1; mon < month; mon++ )
	{
		totaldays += calculateDateRange( mon , year);
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