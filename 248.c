#include<stdio.h>
#include<string.h>
int main()
{
	char str[80],ch;
	int i,result,sign;
	printf("\n Enter String : ");
	gets(str);
	result = 0;
	i = 0;
	sign = 1;
	if( str[0] == '-' )
	{
		sign = -1;
		i++;
	}
	while( str[i] != '\0' )
	{
		ch = str[i];
		if( ch >= '0' && ch <= '9' )
		{
			result = result * 10 + ( ch - 48 );
		}
		else
		{
			break;
		}
		i++;
	}
	result = result * sign;
	printf("\n Result : %d \n",result);
	return 0;
}