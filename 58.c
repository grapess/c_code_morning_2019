#include<stdio.h>
int main()
{
	int num = 1100;
	int * ptr; // int* ptr;  or  int *ptr;
	int * * pt;
	printf("\n Value of num : %d Memory Address of num : %u \n",num,&num);
	printf("\n Value at memory address of num : %d \n",*&num);
	ptr = &num;
	printf("\n Value of ptr : %u Memory Address of ptr : %u \n",ptr,&ptr);
	printf("\n Value at memory address of ptr : %u \n",*&ptr);
	printf("\n Value at ptr : %d \n",*ptr);
	pt = &ptr;
	printf("\n Value of pt : %u Memory Address of pt : %u \n",pt,&pt);
	printf("\n Value at memory address of pt : %u \n",*&pt);
	printf("\n Value at Value at pt : %d \n",**pt);
	return 0;
}