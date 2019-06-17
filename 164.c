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
		len++;
	}
	printf("\n String Length : %d \n",len);
	return 0;
}