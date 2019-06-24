#include<stdio.h>
#include<string.h>
int main()
{
	char *names[6] = {"ram","aman","ramesh","raj","akshay","amit"};
	char name[10];
	int i,found;
	printf("\n Enter Name : ");
	scanf("%s",name);
	found = 0;
	
	for( i = 0; i < 6; i++ )
	{
		if( strcmp( names[i] , name ) == 0 )
		{
			found = 1;
			break;
		}
	}
	
	found == 1 ? printf("\n Found \n") : printf("\n Not Found \n");
	return 0;
}