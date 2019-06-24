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
	char *month_names[] = {"","January","February","March","April","May","June","July",
	"August","September","October","November","December"};
	char *day_names[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};	
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
	printf(" %s, %d has %s.\n",month_names[month],year,day_names[rem]);
	return 0;
}