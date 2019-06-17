#include<stdio.h>
int main()
{
	int num;
	char ch;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	fflush(stdin);
	printf("\n Enter Any Character : ");
	scanf("%c",&ch);	
	printf("\n Character : %c Number : %d \n",ch,num);
	return 0;
}