#include<stdio.h>
#include<string.h>
int main()
{
	char str[80],ch;
	int i,j,len,k;
	printf("\n Enter String : ");
	gets(str);
	len = strlen( str );
	i = 0;
	while( i < len )
	{
		if( str[i] == 't' && str[i+1] == 'h' && str[i+2] == 'e' )
		{
			for( k = 1; k <= 3; k++ )
			{
				j = i;
				while( j < len - 1 )
				{
					str[j] = str[j+1];
					j++;
				}
				str[j] = '\0';
				len--;
			}				
		}
		else
		{
			i++;
		}
	}
	str[j] = '\0';
	printf("\n After Removing, String : %s \n",str);
	return 0;
}