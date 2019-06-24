#include<stdio.h>
void number_to_word(int div);
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
			number_to_word( div );
			printf(" Crore");
		}
		temp = temp % 10000000;
		div = temp / 100000;
		if( div != 0 )
		{
			number_to_word( div );
			printf(" Lac");
		}
		temp = temp % 100000;
		div = temp / 1000;
		if( div != 0 )
		{
			number_to_word( div );
			printf(" Thousand");
		}
		temp = temp % 1000;
		div = temp / 100;
		if( div != 0 )
		{
			number_to_word( div );
			printf(" Hundred");
		}
		temp = temp % 100;
		div = temp;
		if( div != 0 )
		{
			number_to_word( div );
		}
	}
	printf(".");
	return 0;
}
void number_to_word( int div )
{
	char *one_to_ninteen[] = {"Zero","One","Two","Three","Four","Five","Six","Seven",
	"Eight","Nine","Ten","Eleven","Twelve","Thirteen","Forteen","Fifteen","Sixteen",
	"Seventeen","Eighteen","Ninteen"};
	char *ten_to_ninty[] = {"","Ten","Twenty","Thirty","Forty","Fifty","Sixty",
	"Seventy","Eighty","Ninty"};
	int d1,d2;
	printf(" ");
	if( div < 20 )
	{
		printf("%s",one_to_ninteen[div]);		
	}
	else
	{
		d1 = div / 10;
		d2 = div % 10;
		if( d1 != 0 )
		{
			printf("%s",ten_to_ninty[d1]);
		}
		if( d2 != 0 )
		{
			if( d1 != 0 )
			{
				printf(" ");
			}
			printf("%s",one_to_ninteen[d2]);
		}
	}
}