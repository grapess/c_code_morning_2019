#include<stdio.h>
int main()
{
	int num, temp, rem, oct, place;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	temp = num;
	place = 1;
	oct = 0;
	while( temp > 0 )
	{
		rem = temp % 8;
		oct = oct + rem * place;
		temp = temp / 8;
		place = place * 10;
	}
	printf("\n Octal Equivalent of Given Number : %d \n",oct);
	return 0;
}