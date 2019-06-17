#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter Any Character : ");
	scanf("%c",&ch);
	if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' ||
		ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
	{
		printf("\n Given Character is Vowel \n");
	}
	else
	{
		printf("\n Given Character is not Vowel \n");
	}
	return 0;
}