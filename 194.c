#include<stdio.h>
#include<string.h>
int main()
{
	char str[80],st1[80];
	printf("\n Enter Any String : ");
	gets(str);	
	printf("\n Enter Any String : ");
	gets(st1);	
	printf("\n Result : %s \n",strstr( str , st1 ));
	if( strstr( str , st1 ) != NULL )
	{
		printf("\n Present \n");
	}
	else
	{
		printf("\n Absent \n");
	}
	return 0;
}