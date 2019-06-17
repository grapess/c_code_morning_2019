#include<stdio.h>
int main()
{
	float num = 5.5F;
	switch( num )
	{
		case 5.5F:
			printf("\n GOOD \n");
			break;
		default:
			printf("\n BAD \n");
			break;
	}
	return 0;
}