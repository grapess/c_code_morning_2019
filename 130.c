#include<stdio.h>
void show()
{
	static int value;
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
