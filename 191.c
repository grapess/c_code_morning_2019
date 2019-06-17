#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	char cp[80];
	printf("\n Enter Any String : ");
	gets(str);	
	strcpy( cp , str );
	printf("\n str = %s cp = %s \n",str,cp);
	return 0;
}