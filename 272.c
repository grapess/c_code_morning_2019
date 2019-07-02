#include<stdio.h>
enum Weekend
{
	Friday = 19 , Saturday = 22 , Sunday = 45
};
int main()
{
	enum Weekend we;
	we = Saturday;
	printf("\n Weekend : %d \n",we);
	return 0;
}