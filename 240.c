#include<stdio.h>
int main()
{
	int x, result;
	printf("\n Enter Any Number : ");
	scanf("%d",&x);
	result = x && (!(x & (x - 1))); 
	printf("\n Result : %d \n",result);
	return 0;
}
// 32
// 32 && ( !( 32 & ( 32 - 1 )))
// 32 && ( !( 32 & 31 ))
// 32 && ( !( 100000 & 011111 ))
// 32 && ( ! ( 0 ))
// 32 && 1 