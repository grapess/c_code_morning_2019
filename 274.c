#include<stdio.h>
struct Ages
{
	unsigned age1:8;
	unsigned age2:8;
	unsigned age3:8;
	unsigned age4:8;
};
int main()
{
	struct Ages ages;
	printf("\n Size : %d \n",sizeof(ages));
	return 0;
}