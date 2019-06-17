#include<stdio.h>
#define YES 1
int main()
{
	
	#undef YES
	
	#ifdef YES
		printf(" GOOD ");			
	#endif
	
	
	
	#ifndef YES
		printf(" NOT GOOD ");
	#endif
	return 0;
}