#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *names[2];
	char name[80];
	int i,len;
	for( i = 0; i < 2; i++ )
	{
		printf("\n Enter Name : ");
		gets( name );
		len = strlen( name ) + 1;
		names[i] = (char*)malloc(sizeof(char) * len );
		strcpy( names[i] , name );
	}
	printf("\n");
	for( i = 0; i < 2; i++ )
	{
		printf(" [ %s ] ",names[i]);
	}
	printf("\n");
	return 0;
}