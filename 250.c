#include<stdio.h>
#include<string.h>
int main()
{
	char *names[] = { "aman" , "akshay" , "aakash" , "zoya" , "yaman" };
	int i,j;
	char *temp;
	printf("\n Name List \n");
	for( i = 0; i < 5; i++ )
	{
		printf(" [ %s ] ",names[i]);
	}
	printf("\n");
	for( i = 0; i < 4; i++ )
	{
		for( j = 0; j < 5 - i - 1; j++ )
		{
			if( strcmp(names[j] , names[j+1] ) > 0 )
			{
				temp = names[j];
				names[j] = names[j+1];
				names[j+1] = temp;
			}
		}
	}
	printf("\n Name List \n");
	for( i = 0; i < 5; i++ )
	{
		printf(" [ %s ] ",names[i]);
	}
	printf("\n");
	return 0;
}