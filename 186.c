#include<stdio.h>
int main()
{
	char str[80];
	int count[26];
	int i,pangram;
	printf("\n Enter Any String : ");
	gets(str);	
	for( i = 0; i < 26; i++ )
	{
		count[i] = 0;
	}
	pangram = 1;
	i = 0;
	while( str[i] != '\0' )
	{
		if( str[i] >= 65 && str[i] <= 90 )
		{
			count[str[i] - 65]++;
		}
		else if( str[i] >= 97 && str[i] <= 122 )
		{
			count[str[i] - 97]++;
		}
		i++;
	}
	
	for( i = 0; i < 26; i++ )
	{
		if( count[i] == 0 )
		{
			pangram = 0;
			break;
		}
	}
	
	if( pangram == 1 )
	{
		printf("\n Given String is Pangram \n");
	}
	else
	{
		printf("\n Given String is not Pangram \n");
	}
	return 0;
}