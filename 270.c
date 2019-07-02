#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp = fopen("demo.txt","w");
	if( fp != NULL )
	{
		while( !feof(fp) )
		{
			ch = fgetc( fp);
			if( ferror(fp))
			{
				printf(" Error ");
				perror("Failure");
				break;
			}
			printf("%c",ch);
		}
		fclose(fp);
	}
	return 0;
}