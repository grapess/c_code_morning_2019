#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	char cp[80];
	printf("\n Enter Any String : ");
	gets(str);	
	printf("\n Enter Any String : ");
	gets(cp);	
	printf("\n str = %s cp = %s \n",str,cp);
	strcat( str , cp );
	printf("\n str = %s cp = %s \n",str,cp);
	return 0;
}