#include<stdio.h>
void line();
int main()
{
	line();
	printf(" Hello \n");
	line();
	printf(" Grapess \n");
	line();
	printf(" Solutions \n");
	line();
	return 0;
}
void line()
{
	int count;
	for( count = 1; count <= 35; count++ )
	{
		printf("_");
	}
	printf("\n");
}