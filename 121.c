#include<stdio.h>
void line(char symbol);
int main()
{
	line('=');
	printf(" Hello \n");
	line('~');
	printf(" Grapess \n");
	line('_');
	printf(" Solutions \n");
	line('-');
	return 0;
}
void line(char symbol)
{
	int count;
	for( count = 1; count <= 35; count++ )
	{
		printf("%c",symbol);		
	}
	printf("\n");
}