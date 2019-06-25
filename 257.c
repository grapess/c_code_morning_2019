#include<stdio.h>
int main()
{
	float result, x, term, value;
	int i,j;
	printf("\n Enter value of x : ");
	scanf("%f",&x);
	term = ( x - 1 ) / x;
	result = term;
	for( i = 2; i <= 7; i++ )
	{
		value = 1;
		for( j = 1; j <= i; j++ )
		{
			value = value * term;
		}
		result += value / 2;
	}
	printf("\n Result : %f \n",result);
	return 0;
}