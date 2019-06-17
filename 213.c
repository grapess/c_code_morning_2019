#include<stdio.h>
int main()
{
	int num[5] = { 22 , 44 , 55 , 63 , 54 };
	int i;
	int (*ptr)[5];
	for( i = 0; i < 5; i++ )
	{
		printf("\n Value : %u Address : %u \n",num[i],&num[i]);
	}
	printf("\n Address of an Array : %u %u %d\n",&num,*&num,**&num);
	ptr = &num;
	printf("\n value : %u Address : %u \n",ptr,&ptr);
	return 0;
}