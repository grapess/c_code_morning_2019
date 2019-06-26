#include<stdio.h>
int main()
{
	FILE *file, *target;
	char ch;
	file = fopen("D:\\det.txt","r");
	target = fopen("info.txt","a");
	if( file == NULL || target == NULL )
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
			fputc( ch , target );
		}
		fclose( file );
		fclose( target );
	}
	return 0;
}