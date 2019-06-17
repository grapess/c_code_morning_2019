#include<stdio.h>
void line(char symbol,int times);
int main()
{
	line('=',30);
	printf(" Hello \n");
	line('~',40);
	printf(" Grapess \n");
	line('_',50);
	printf(" Solutions \n");
	line('-',60);
	return 0;
}
void line(char symbol,int times)
{
	int count;
	for( count = 1; count <= times; count++ )
	{
		printf("%c",symbol);		
	}
	printf("\n");
}