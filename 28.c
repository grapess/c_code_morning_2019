#include<stdio.h>
int main()
{
	int num, result, temp, rem;
	printf("\n Enter Any Five Digit Number : ");
	scanf("%d",&num);

	temp = num;
	//Unit Place Digit
	rem = temp % 10;
	result = ( ( rem + 1 ) % 10 );
	temp = temp / 10;
	// Tenth Place Digit
	rem = temp % 10;
	result = ( ( rem + 1 ) % 10 ) * 10 + result;
	temp = temp / 10;
	// 100th Place Digit
	rem = temp % 10;
	result = ( ( rem + 1 ) % 10 ) * 100 + result;
	temp = temp / 10;
	// 1000th Place Digit
	rem = temp % 10;
	result = ( ( rem + 1 ) % 10 ) * 1000 + result;
	temp = temp / 10;
	// 10000th Place Digit
	rem = temp % 10;
	result = ( ( rem + 1 ) % 10 ) * 10000 + result;
	temp = temp / 10;
	
	printf("\n The Result : %d \n",result);
	
	return 0;
}