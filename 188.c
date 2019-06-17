#include<stdio.h>
#include<string.h>
int main()
{
	char str[80],temp;
	int i,len,j;
	printf("\n Enter Any String : ");
	gets(str);	
	len = strlen( str );
	i = 0;
	while( i < len )
	{
		if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' 
			|| str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' 
			|| str[i] == 'O' || str[i] == 'U' )
		{
			j = i;
			while( j < len )
			{
				str[j] = str[j+1];
				j++;
			}
			len--;
		}
		else
		{
			i++;
		}
	}
	printf("\n After Removing All Vowel, Result : %s \n",str);	
	return 0;
}