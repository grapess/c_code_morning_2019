#include<stdio.h>
int main()
{
	char str[40];
	printf("\n Enter Any Name : ");
	//scanf("%s",str);
	scanf("%[^\n]s",str);
	printf("\n The Name : %s \n",str);
	return 0;
}