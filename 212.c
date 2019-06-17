#include<stdio.h>
int main()
{
	int x , y , z;
	int *ptr[3];
	int i;
	x = 99;
	y = 111;
	z = 543;
	printf("\n Value of x : %d Memory Address of x : %u \n",x,&x);
	printf("\n Value of y : %d Memory Address of y : %u \n",y,&y);
	printf("\n Value of z : %d Memory Address of z : %u \n",z,&z);
	ptr[0] = &x;
	ptr[1] = &y;
	ptr[2] = &z;
	for( i = 0; i < 3; i++ )
	{
		printf("\n Value : %u Address : %u Value at : %d \n",ptr[i],&ptr[i],*ptr[i]);
	}
	return 0;
}