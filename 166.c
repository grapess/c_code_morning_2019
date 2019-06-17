#include<stdio.h>
int main()
{
	char str[40];
	int len, i, j, k;
	char temp;
	printf("\n Enter Any Name : ");
	gets(str);
	printf("\n The Name : %s \n",str);
	len = 0;
	while( str[len] != '\0' )
	{
		len++;
	}
	i = 0;
	j = len - 1;
	for( k = 1; k <= len / 2; k++ )
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	printf("\n After Reverse, String : ");
	puts( str );
	return 0;
}