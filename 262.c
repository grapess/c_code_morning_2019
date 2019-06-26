#include<stdio.h>
int main()
{
	FILE *file;
	char ch;
	file = fopen("D:\\det.txt","r");
	if( file == NULL )
	{
		printf("\n Failed in Open File \n");
	}
	else
	{
		while( 1 )
		{
			ch = fgetc( file );
			if( ch == EOF )
			{
				break;
			}
			printf("%c",ch);
		}
		fclose( file );
	}
	return 0;
}