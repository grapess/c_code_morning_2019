#include<stdio.h>
int value;
void show()
{
	printf("\n Value : %d \n",value);	
}
void increment()
{
	value += 110;
}
int main()
{
	show();
	value = 112;
	show();
	increment();
	show();
	return 0;
}
