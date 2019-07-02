#include<stdio.h>
int value = 1100;
int* changes()
{
	return &value;
}
int main()
{
	printf("\n Value : %d \n",value);
	*changes() = 100;
	printf("\n Value : %d \n",value);
	return 0;
}