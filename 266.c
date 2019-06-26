#include<stdio.h>
int main()
{
	FILE *file;
	char str[80];
	file = fopen("story.txt","r");
	if( file == NULL )
	{
		printf("\n Failed in Open File \n");
	}
	else
	{
		while( fgets( str , 79 , file ) != NULL )
		{
			printf("%s",str);
		}
		fclose( file );
	}
	return 0;
}