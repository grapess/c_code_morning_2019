#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	printf("\n Enter Any String : ");
	gets(str);	
	printf("\n str = %s \n",str);
	strupr( str );
	printf("\n str = %s \n",str);
	strlwr( str );
	printf("\n str = %s \n",str);
	return 0;
}