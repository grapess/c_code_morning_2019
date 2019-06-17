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
			str[i] = 65 + ( ( str[i] + 3 ) - 65 ) % 26;
		}
		else if( str[i] >= 97 && str[i] <= 122 )
		{
			str[i] = 97 + ( ( str[i] + 3 ) - 97 ) % 26;
		}
		i++;
	}
	printf("\n After Encryption, String : %s \n",str);
	return 0;
}