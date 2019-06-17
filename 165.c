#include<stdio.h>
int main()
{
	char str[40];
	int len;
	printf("\n Enter Any Name : ");
	gets(str);
	printf("\n The Name : %s \n",str);
	len = 0;
	while( str[len] != '\0' )
	{
		if( str[len] >= 65 && str[len] <= 90 )
		{
			str[len] += 32;
		}
		else if( str[len] >= 97 && str[len] <= 122 )
		{
			str[len] -= 32;
		}
		len++;
	}
	printf("\n After Change Case, String : ");
	puts( str );
	return 0;
}