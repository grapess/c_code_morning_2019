#include<stdio.h>
#include<string.h>
#define SPACE ' '
int main()
{
	char str[80],ch;
	int i,j,len;
	printf("\n Enter String : ");
	gets(str);
	len = strlen( str );
	i = 0;
	
	while( i < len )
	{
		if( str[i] == SPACE && str[i+1] == SPACE )
		{
			j = i + 1;
			while( j < len - 1 )
			{
				str[j] = str[j+1];
				j++;
			}
			str[j] = '\0';
			len--;
		}
		else
		{
			i++;
		}
	}
	printf("\n After Removing Consecutive Spaces, String \n %s \n",str);
	return 0;
}