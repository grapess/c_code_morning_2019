#include<stdio.h>
void show()
{
	printf("\n Show Method \n");
}
int main()
{
	void (*ptr)();
	printf("\n Show Memory Address : %u \n",show);	
	ptr  = show;
	printf("\n Value of ptr : %u Memory Address of ptr : %u \n",ptr,&ptr);
	(*ptr)();
	return 0;
}