#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	printf("\n Enter Any String : ");
	gets(str);	
	printf("\n Result : %d \n",strcmp( str , "Hello"));
	printf("\n Result : %d \n",stricmp( str , "Hello"));
	return 0;
}