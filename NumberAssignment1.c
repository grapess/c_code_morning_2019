#include<stdio.h>
int main()
{
	int num,temp,div,d1,d2;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	printf("\n Number in Words \n");
	
	temp = num;
	if( temp == 0 )
	{
		printf(" Zero");
	}
	else
	{
		if( temp < 0 )
		{
			printf(" -ve");
			temp = temp * -1;
		}
		div = temp / 10000000;
		if( div != 0 )
		{
			printf(" ");
			if( div < 20 )
			{
				switch( div )
				{
					case 1:
						printf("One");
						break;
					case 2:
						printf("Two");
						break;
					case 3:
						printf("Three");
						break;
					case 4:
						printf("Four");
						break;
					case 5:
						printf("Five");
						break;
					case 6:
						printf("Six");
						break;
					case 7:
						printf("Seven");
						break;
					case 8:
						printf("Eight");
						break;
					case 9:
						printf("Nine");
						break;
					case 10:
						printf("Ten");
						break;
					case 11:
						printf("Eleven");
						break;
					case 12:
						printf("Twelve");
						break;
					case 13:
						printf("Thirteen");
						break;
					case 14:
						printf("Forteen");
						break;
					case 15:
						printf("Fifteen");
						break;
					case 16:
						printf("Sixteen");
						break;
					case 17:
						printf("Seventeen");
						break;
					case 18:
						printf("Eighteen");
						break;
					case 19:
						printf("Ninteen");
						break;
				}
			}
			else
			{
				d1 = div / 10;
				d2 = div % 10;
				if( d1 != 0 )
				{
					switch( d1 )
					{
						case 2:
							printf("Twenty");
							break;
						case 3:
							printf("Thirty");
							break;
						case 4:
							printf("Forty");
							break;
						case 5:
							printf("Fifty");
							break;
						case 6:
							printf("Sixty");
							break;
						case 7:
							printf("Seventy");
							break;
						case 8:
							printf("Eighty");
							break;
						case 9:
							printf("Ninty");
							break;
					}
				}
				if( d2 != 0 )
				{
					if( d1 != 0 )
					{
						printf(" ");
					}
					switch( d2 )
					{
						case 1:
							printf("One");
							break;
						case 2:
							printf("Two");
							break;
						case 3:
							printf("Three");
							break;
						case 4:
							printf("Four");
							break;
						case 5:
							printf("Five");
							break;
						case 6:
							printf("Six");
							break;
						case 7:
							printf("Seven");
							break;
						case 8:
							printf("Eight");
							break;
						case 9:
							printf("Nine");
							break;
					}
				}
			}
			printf(" Crore");
		}
		temp = temp % 10000000;
		div = temp / 100000;
		if( div != 0 )
		{
			printf(" ");
			if( div < 20 )
			{
				switch( div )
				{
					case 1:
						printf("One");
						break;
					case 2:
						printf("Two");
						break;
					case 3:
						printf("Three");
						break;
					case 4:
						printf("Four");
						break;
					case 5:
						printf("Five");
						break;
					case 6:
						printf("Six");
						break;
					case 7:
						printf("Seven");
						break;
					case 8:
						printf("Eight");
						break;
					case 9:
						printf("Nine");
						break;
					case 10:
						printf("Ten");
						break;
					case 11:
						printf("Eleven");
						break;
					case 12:
						printf("Twelve");
						break;
					case 13:
						printf("Thirteen");
						break;
					case 14:
						printf("Forteen");
						break;
					case 15:
						printf("Fifteen");
						break;
					case 16:
						printf("Sixteen");
						break;
					case 17:
						printf("Seventeen");
						break;
					case 18:
						printf("Eighteen");
						break;
					case 19:
						printf("Ninteen");
						break;
				}
			}
			else
			{
				d1 = div / 10;
				d2 = div % 10;
				if( d1 != 0 )
				{
					switch( d1 )
					{
						case 2:
							printf("Twenty");
							break;
						case 3:
							printf("Thirty");
							break;
						case 4:
							printf("Forty");
							break;
						case 5:
							printf("Fifty");
							break;
						case 6:
							printf("Sixty");
							break;
						case 7:
							printf("Seventy");
							break;
						case 8:
							printf("Eighty");
							break;
						case 9:
							printf("Ninty");
							break;
					}
				}
				if( d2 != 0 )
				{
					if( d1 != 0 )
					{
						printf(" ");
					}
					switch( d2 )
					{
						case 1:
							printf("One");
							break;
						case 2:
							printf("Two");
							break;
						case 3:
							printf("Three");
							break;
						case 4:
							printf("Four");
							break;
						case 5:
							printf("Five");
							break;
						case 6:
							printf("Six");
							break;
						case 7:
							printf("Seven");
							break;
						case 8:
							printf("Eight");
							break;
						case 9:
							printf("Nine");
							break;
					}
				}
			}
			printf(" Lac");
		}
		temp = temp % 100000;
		div = temp / 1000;
		if( div != 0 )
		{
			printf(" ");
			if( div < 20 )
			{
				switch( div )
				{
					case 1:
						printf("One");
						break;
					case 2:
						printf("Two");
						break;
					case 3:
						printf("Three");
						break;
					case 4:
						printf("Four");
						break;
					case 5:
						printf("Five");
						break;
					case 6:
						printf("Six");
						break;
					case 7:
						printf("Seven");
						break;
					case 8:
						printf("Eight");
						break;
					case 9:
						printf("Nine");
						break;
					case 10:
						printf("Ten");
						break;
					case 11:
						printf("Eleven");
						break;
					case 12:
						printf("Twelve");
						break;
					case 13:
						printf("Thirteen");
						break;
					case 14:
						printf("Forteen");
						break;
					case 15:
						printf("Fifteen");
						break;
					case 16:
						printf("Sixteen");
						break;
					case 17:
						printf("Seventeen");
						break;
					case 18:
						printf("Eighteen");
						break;
					case 19:
						printf("Ninteen");
						break;
				}
			}
			else
			{
				d1 = div / 10;
				d2 = div % 10;
				if( d1 != 0 )
				{
					switch( d1 )
					{
						case 2:
							printf("Twenty");
							break;
						case 3:
							printf("Thirty");
							break;
						case 4:
							printf("Forty");
							break;
						case 5:
							printf("Fifty");
							break;
						case 6:
							printf("Sixty");
							break;
						case 7:
							printf("Seventy");
							break;
						case 8:
							printf("Eighty");
							break;
						case 9:
							printf("Ninty");
							break;
					}
				}
				if( d2 != 0 )
				{
					if( d1 != 0 )
					{
						printf(" ");
					}
					switch( d2 )
					{
						case 1:
							printf("One");
							break;
						case 2:
							printf("Two");
							break;
						case 3:
							printf("Three");
							break;
						case 4:
							printf("Four");
							break;
						case 5:
							printf("Five");
							break;
						case 6:
							printf("Six");
							break;
						case 7:
							printf("Seven");
							break;
						case 8:
							printf("Eight");
							break;
						case 9:
							printf("Nine");
							break;
					}
				}
			}
			printf(" Thousand");
		}
		temp = temp % 1000;
		div = temp / 100;
		if( div != 0 )
		{
			printf(" ");
			if( div < 20 )
			{
				switch( div )
				{
					case 1:
						printf("One");
						break;
					case 2:
						printf("Two");
						break;
					case 3:
						printf("Three");
						break;
					case 4:
						printf("Four");
						break;
					case 5:
						printf("Five");
						break;
					case 6:
						printf("Six");
						break;
					case 7:
						printf("Seven");
						break;
					case 8:
						printf("Eight");
						break;
					case 9:
						printf("Nine");
						break;
					case 10:
						printf("Ten");
						break;
					case 11:
						printf("Eleven");
						break;
					case 12:
						printf("Twelve");
						break;
					case 13:
						printf("Thirteen");
						break;
					case 14:
						printf("Forteen");
						break;
					case 15:
						printf("Fifteen");
						break;
					case 16:
						printf("Sixteen");
						break;
					case 17:
						printf("Seventeen");
						break;
					case 18:
						printf("Eighteen");
						break;
					case 19:
						printf("Ninteen");
						break;
				}
			}
			else
			{
				d1 = div / 10;
				d2 = div % 10;
				if( d1 != 0 )
				{
					switch( d1 )
					{
						case 2:
							printf("Twenty");
							break;
						case 3:
							printf("Thirty");
							break;
						case 4:
							printf("Forty");
							break;
						case 5:
							printf("Fifty");
							break;
						case 6:
							printf("Sixty");
							break;
						case 7:
							printf("Seventy");
							break;
						case 8:
							printf("Eighty");
							break;
						case 9:
							printf("Ninty");
							break;
					}
				}
				if( d2 != 0 )
				{
					if( d1 != 0 )
					{
						printf(" ");
					}
					switch( d2 )
					{
						case 1:
							printf("One");
							break;
						case 2:
							printf("Two");
							break;
						case 3:
							printf("Three");
							break;
						case 4:
							printf("Four");
							break;
						case 5:
							printf("Five");
							break;
						case 6:
							printf("Six");
							break;
						case 7:
							printf("Seven");
							break;
						case 8:
							printf("Eight");
							break;
						case 9:
							printf("Nine");
							break;
					}
				}
			}
			printf(" Hundred");
		}
		temp = temp % 100;
		div = temp;
		if( div != 0 )
		{
			printf(" ");
			if( div < 20 )
			{
				switch( div )
				{
					case 1:
						printf("One");
						break;
					case 2:
						printf("Two");
						break;
					case 3:
						printf("Three");
						break;
					case 4:
						printf("Four");
						break;
					case 5:
						printf("Five");
						break;
					case 6:
						printf("Six");
						break;
					case 7:
						printf("Seven");
						break;
					case 8:
						printf("Eight");
						break;
					case 9:
						printf("Nine");
						break;
					case 10:
						printf("Ten");
						break;
					case 11:
						printf("Eleven");
						break;
					case 12:
						printf("Twelve");
						break;
					case 13:
						printf("Thirteen");
						break;
					case 14:
						printf("Forteen");
						break;
					case 15:
						printf("Fifteen");
						break;
					case 16:
						printf("Sixteen");
						break;
					case 17:
						printf("Seventeen");
						break;
					case 18:
						printf("Eighteen");
						break;
					case 19:
						printf("Ninteen");
						break;
				}
			}
			else
			{
				d1 = div / 10;
				d2 = div % 10;
				if( d1 != 0 )
				{
					switch( d1 )
					{
						case 2:
							printf("Twenty");
							break;
						case 3:
							printf("Thirty");
							break;
						case 4:
							printf("Forty");
							break;
						case 5:
							printf("Fifty");
							break;
						case 6:
							printf("Sixty");
							break;
						case 7:
							printf("Seventy");
							break;
						case 8:
							printf("Eighty");
							break;
						case 9:
							printf("Ninty");
							break;
					}
				}
				if( d2 != 0 )
				{
					if( d1 != 0 )
					{
						printf(" ");
					}
					switch( d2 )
					{
						case 1:
							printf("One");
							break;
						case 2:
							printf("Two");
							break;
						case 3:
							printf("Three");
							break;
						case 4:
							printf("Four");
							break;
						case 5:
							printf("Five");
							break;
						case 6:
							printf("Six");
							break;
						case 7:
							printf("Seven");
							break;
						case 8:
							printf("Eight");
							break;
						case 9:
							printf("Nine");
							break;
					}
				}
			}
		}
	}
	printf(".");
	return 0;
}