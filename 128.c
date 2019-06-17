#include<stdio.h>
void show()
{
	auto int value = 1;
	printf("\n Value : %d \n",value);
	value++;
}
int main()
{
	show();
	show();
	show();
	return 0;
}
