#include<stdio.h>
int main()
{
	unsigned char ch;
	for( ch = 0; ch < 255; ch++ )
	{
		printf(" [ %d = %c ] ",ch,ch);
	}
	printf(" [ %d = %c ] ",ch,ch);
	return 0;
}
