#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char str[80];
	int i;
	printf("\n Enter Any String : ");
	gets(str);
	i = 0;
	while( str[i] != '\0' )
	{
		if( str[i] >= 65 && str[i] <= 90 )
		{
			if( str[i] == 'X' )
			{
				str[i] = 'A';
			}
			else if( str[i] == 'Y' )
			{
				str[i] = 'B';
			}
			else if( str[i] == 'Z' )
			{
				str[i] = 'C';
			}
			else
			{
				str[i] += 3;
			}
		}
		else if( str[i] >= 97 && str[i] <= 122 )
		{
			if( str[i] == 'x' )
			{
				str[i] = 'a';
			}
			else if( str[i] == 'y' )
			{
				str[i] = 'b';
			}
			else if( str[i] == 'z' )
			{
				str[i] = 'c';
			}
			else
			{
				str[i] += 3;
			}
		}
		i++;
	}
	printf("\n After Encryption, String : %s \n",str);
	return 0;
}