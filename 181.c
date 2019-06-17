#include<stdio.h>
int main()
{
	char str[80];
	int i, word;
	printf("\n Enter Any String : ");
	gets( str );
	i = 0;
	word = 0;
	while( str[i] == ' ' )
	{
		i++;
	}
	if( str[i] != '\0' )
	{
		word = 1;
		while( str[i] != '\0' )
		{
			if( str[i] == ' ' && str[i+1] != '\0' && str[i+1] != ' ')
			{
				word++;
			}
			i++;
		}
	}
	printf("\n Total Word in String : %d \n",word);
	return 0;
}