#include<stdio.h>
int main()
{
	FILE *file;
	char str[80];
	file = fopen("story.txt","a");
	if( file == NULL )
	{
		printf("\n Failed in Open File \n");
	}
	else
	{
		printf("\n Enter String : ");
		gets( str );
		fputs( str , file );
		fputs("\n", file);
		fclose( file );
	}
	return 0;
}