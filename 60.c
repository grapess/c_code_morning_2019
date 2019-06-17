#include<stdio.h>
int main()
{
	int num = 9000;
	char ch = 'G';
	void *ptr;
	printf("\n Value of num : %d Memory Address of num : %u \n",num,&num);	
	printf("\n Value of  ch : %c Memory Address of  ch : %u \n",ch,&ch);
	ptr = &num;
	printf("\n Value of ptr : %u Memory Address of ptr : %u \n",ptr,&ptr);
	printf("\n Value at ptr : %d \n",*(int*)ptr);
	ptr = &ch;
	printf("\n Value of ptr : %u Memory Address of ptr : %u \n",ptr,&ptr);
	printf("\n Value at ptr : %c \n",*(char*)ptr);
	return 0;
}