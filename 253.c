#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	float fact,num,result=0;
	for( value = 1; value <= 7; value++ )
	{
		num = value;
		fact = 1;
		while( num > 1 )
		{
			fact = fact * num;
			num--;
		}
		result += value / fact;
	}
	printf("\n Result of Seven Terms : %f \n",result);
	return 0;
}