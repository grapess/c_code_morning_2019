#include<stdio.h>
int main()
{
	int num;
	num = 0;
	while( num <= 255 )
	{
		printf("\n ASCII : %d Character : %c ",num,num);
		num++;
	}
	return 0;
}