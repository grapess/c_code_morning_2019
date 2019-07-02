#include<stdio.h>
struct Ages
{
	int age1;
	int age2;
	int age3;
};
int main()
{
	struct Ages ages;
	printf("\n Size : %d \n",sizeof(ages));
	return 0;
}