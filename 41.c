#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter Any Character : ");
	scanf("%c",&ch);
	switch( ch )
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("\n Given Character is Vowel \n");
			break;
		default:
			printf("\n Given Character is not Vowel \n");
			break;
	}
	return 0;
}