#include<stdio.h>
#include<string.h>
int main()
{
	char *names[6] = {"ram","aman","ramesh","raj","akshay","amit"};
	char *temp;
	int i;
	printf("\n");
	for( i = 0; i < 6; i++ )
	{
		printf(" [ %s ] ",names[i]);
	}
	printf("\n");
	temp = names[4];
	names[4] = names[1];
	names[1] = temp;
	printf("\n");
	for( i = 0; i < 6; i++ )
	{
		printf(" [ %s ] ",names[i]);
	}
	printf("\n");
	return 0;
}